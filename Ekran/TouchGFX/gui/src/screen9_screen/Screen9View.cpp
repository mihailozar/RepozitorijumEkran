#include <gui/screen9_screen/Screen9View.hpp>
#include <touchgfx/Color.hpp>

extern volatile uint8_t periphery_state;
extern int relayFaults;
extern int prechargFaultState;
Screen9View::Screen9View()
{

}

void Screen9View::setupScreen()
{
    Screen9ViewBase::setupScreen();
}

void Screen9View::tearDownScreen()
{
    Screen9ViewBase::tearDownScreen();
}
void Screen9View::updatePrechargRelay(){
	if(periphery_state & 0x80){
		pre_notf.setVisible(false);
		pre_finished.setVisible(true);
	}else{
		pre_notf.setVisible(true);
		pre_finished.setVisible(false);
	}

	if(periphery_state & 0x01){
		sd_open.setVisible(true);
		sd_closed.setVisible(false);
	}else{
		sd_open.setVisible(false);
		sd_closed.setVisible(true);
	}
	if(periphery_state & 0x02){
		circle_fatal_errorPainter.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 0, 0));
		circle_fatal_error.invalidate();
	}else{
		circle_fatal_errorPainter.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 255, 0));
		circle_fatal_error.invalidate();
	}

	if(periphery_state & 0x08){
		circle_voltagePainter.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 0, 0));
		circle_voltage.invalidate();
	}else{
		circle_voltagePainter.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 255, 0));
		circle_voltage.invalidate();
	}

	if(periphery_state & 0x10){
		circle_currentPainter.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 0, 0));
		circle_current.invalidate();
	}else{
		circle_currentPainter.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 255, 0));
		circle_current.invalidate();
	}

	if(periphery_state & 0x40){
		circle_imdPainter.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 0, 0));
		circle_imd.invalidate();
	}else{
		circle_imdPainter.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 255, 0));
		circle_imd.invalidate();
	}

	if(relayFaults & 0x01){
		circle_air_plusPainter.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 0, 0));
		circle_air_plus.invalidate();
	}else{
		circle_air_plusPainter.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 255, 0));
		circle_air_plus.invalidate();
	}
	if(relayFaults & 0x02){
		circle_air_minusPainter.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 0, 0));
		circle_air_minus.invalidate();
	}else{
		circle_air_minusPainter.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 255, 0));
		circle_air_minus.invalidate();
	}

	if(relayFaults & 0x18){
		circle_shd_cmdPainter.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 0, 0));
		circle_shd_cmd.invalidate();
	}else{
		circle_shd_cmdPainter.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 255, 0));
		circle_shd_cmd.invalidate();
	}
	if(prechargFaultState & 0x01){
		precharg_minus.setVisible(true);
	}else{
		precharg_minus.setVisible(false);
	}

	if(prechargFaultState & 0x08){
		precharg_plus.setVisible(true);
	}else{
		precharg_plus.setVisible(false);

	}
	if((prechargFaultState & 0x0a) || (relayFaults & 0x04)){
		circle_relayPainter.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 0, 0));
		circle_relay.invalidate();
	}else{
		circle_relayPainter.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 255, 0));
		circle_relay.invalidate();
	}
}
