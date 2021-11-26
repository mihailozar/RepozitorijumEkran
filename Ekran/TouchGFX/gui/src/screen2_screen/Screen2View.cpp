#include <gui/screen2_screen/Screen2View.hpp>

extern int screen;
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

