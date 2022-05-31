#include <gui/screen9_screen/Screen9View.hpp>
#include <touchgfx/Color.hpp>

extern uint8_t periphery_state;
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
}
