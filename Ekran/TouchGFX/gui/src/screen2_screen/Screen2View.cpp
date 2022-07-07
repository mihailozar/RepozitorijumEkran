#include <gui/screen2_screen/Screen2View.hpp>
#include <touchgfx/Color.hpp>

enum StateBoard{
	OK,
	ACTIVATING,
	CHARGING,
	UNKNOWN,
	FATAL
};

extern int screen;
extern enum StateBoard BMS_HV_state;
extern enum StateBoard BMS_LV_state;
extern enum StateBoard APPS_state;
extern enum StateBoard Inverter_state;
extern int Telemetry_state;
extern int getColor(int arg);
extern enum StateBoard wheels[4];
extern uint8_t display;
Screen2View::Screen2View()
{

}
void Screen2View::handleTickEvent(){

	if (screen == 2) {
			application().gotoScreen3ScreenNoTransition();
		}

}
void Screen2View::setupScreen()
{
    Screen2ViewBase::setupScreen();
}

void Screen2View::tearDownScreen()
{
    Screen2ViewBase::tearDownScreen();
}


void Screen2View::updateECUinfo(){
	int pom=getColor(BMS_HV_state);
	bms_hv_state_circlePainter.setColor(touchgfx::Color::getColorFrom24BitRGB(pom>>16, (pom>>8)&0xFF, pom&0xFF));
	bms_hv_state_circle.invalidate();

	pom=getColor(BMS_LV_state);
	bms_lv_statePainter.setColor(touchgfx::Color::getColorFrom24BitRGB(pom>>16, (pom>>8)&0xFF, pom&0xFF));
	bms_lv_state.invalidate();

	pom=getColor(APPS_state);
	apps_statePainter.setColor(touchgfx::Color::getColorFrom24BitRGB(pom>>16, (pom>>8)&0xFF, pom&0xFF));
	apps_state.invalidate();

	pom=getColor(Inverter_state);
	inverter_statePainter.setColor(touchgfx::Color::getColorFrom24BitRGB(pom>>16, (pom>>8)&0xFF, pom&0xFF));
	inverter_state.invalidate();

	pom=getColor(wheels[0]);
	wheel_00Painter.setColor(touchgfx::Color::getColorFrom24BitRGB(pom>>16, (pom>>8)&0xFF, pom&0xFF));
	wheel_00.invalidate();

	pom=getColor(wheels[1]);
	wheel_01Painter.setColor(touchgfx::Color::getColorFrom24BitRGB(pom>>16, (pom>>8)&0xFF, pom&0xFF));
	wheel_01.invalidate();

	pom=getColor(wheels[2]);
	wheel_10Painter.setColor(touchgfx::Color::getColorFrom24BitRGB(pom>>16, (pom>>8)&0xFF, pom&0xFF));
	wheel_10.invalidate();

	pom=getColor(wheels[3]);
	wheel_11Painter.setColor(touchgfx::Color::getColorFrom24BitRGB(pom>>16, (pom>>8)&0xFF, pom&0xFF));
	wheel_11.invalidate();
	if(Telemetry_state && 0x1){
		dof_statePainter.setColor(touchgfx::Color::getColorFrom24BitRGB(0xff, 0, 0));
		dof_state.invalidate();
	}else{
		dof_statePainter.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0xFF, 0));
		dof_state.invalidate();

	}

	if(Telemetry_state && 0x2){
		gps_statePainter.setColor(touchgfx::Color::getColorFrom24BitRGB(0xFF, 0, 0));
		gps_state.invalidate();
	}else{
		gps_statePainter.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0xFF, 0));
		gps_state.invalidate();
	}

	if(Telemetry_state && 0x2){
		sd_statePainter.setColor(touchgfx::Color::getColorFrom24BitRGB(0xFF, 0, 0));
			sd_state.invalidate();
		}else{
			sd_statePainter.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0xFF, 0));
				sd_state.invalidate();
		}

	if(Telemetry_state && 0x2){
		xbee_statePainter.setColor(touchgfx::Color::getColorFrom24BitRGB(0xFF, 0, 0));
			xbee_state.invalidate();
		}else{
			xbee_statePainter.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0xFF, 0));
				xbee_state.invalidate();
		}

	if(display!=0){
		display_circlePainter.setColor(touchgfx::Color::getColorFrom24BitRGB(0xFF, 0, 0));
		display_circle.invalidate();
	}else{
		display_circlePainter.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0xff, 0));
				display_circle.invalidate();
	}


}
