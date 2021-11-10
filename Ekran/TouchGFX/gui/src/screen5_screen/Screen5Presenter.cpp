#include <gui/screen5_screen/Screen5View.hpp>
#include <gui/screen5_screen/Screen5Presenter.hpp>

Screen5Presenter::Screen5Presenter(Screen5View& v)
    : view(v)
{

}

void Screen5Presenter::activate()
{

}

void Screen5Presenter::deactivate()
{

}
void Screen5Presenter::notifyHV() {
	view.updateHV();
}
void Screen5Presenter::notifyHVFaults() {
	view.updateHVFaults();
}
