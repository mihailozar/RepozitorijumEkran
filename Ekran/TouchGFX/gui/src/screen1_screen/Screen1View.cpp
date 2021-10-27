#include <gui/screen1_screen/Screen1View.hpp>
#include <touchgfx/Color.hpp>

const char *states[9] = { "INIT", "VEHICLE CHECK", "IDLE", "FAULT", "PRECHARGE",
		"ACC ACTIVE", "INVERTER ACTIVE", "READY TO DRIVE SIGNAL",
		"READY TO DRIVE" };

Screen1View::Screen1View()
{

}

void Screen1View::setupScreen()
{
    Screen1ViewBase::setupScreen();
}

void Screen1View::tearDownScreen()
{
    Screen1ViewBase::tearDownScreen();
}

int counter=0;
int i=0;
void Screen1View::handleTickEvent(){
	counter++;

	if(counter%30==0){
		i++;
		Unicode::snprintf(speedBuffer, SPEED_SIZE, "%d", counter);
			speed.invalidate();
		Unicode::strncpy(vehicle_stateBuffer, states[i%10], 30);
		vehicle_state.invalidate();
		if(i%2==0){
			ecuPainter.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 0, 0));
			ecu.invalidate();
		}else{
			ecuPainter.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 255, 0));
			ecu.invalidate();
		}

		Unicode::snprintf(voltageBuffer, VOLTAGE_SIZE, "%d",(counter%101));
		voltage.invalidate();

	}


}
void Screen1View::updateState(){
	Unicode::strncpy(stateBuffer, states[stateEcu], 20);
	state.invalidate();s
	}
