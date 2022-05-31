#include <gui/screen9_screen/Screen9View.hpp>
#include <gui/screen9_screen/Screen9Presenter.hpp>

Screen9Presenter::Screen9Presenter(Screen9View& v)
    : view(v)
{

}

void Screen9Presenter::activate()
{

}

void Screen9Presenter::deactivate()
{

}

void Screen9Presenter::notifyPrechagrRelay(){
	view.updatePrechargRelay();
}
