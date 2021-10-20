#include <gui/screen1_screen/Screen1View.hpp>

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
void Screen1View::handleTickEvent(){
	counter++;
	if(counter%30==0){
		Unicode::snprintf(speedBuffer, SPEED_SIZE, "%d", counter);
			speed.invalidate();
	}




}
