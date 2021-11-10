#include <gui/screen7_screen/Screen7View.hpp>
#include <touchgfx/Color.hpp>


extern uint16_t bms_hv_board_fault;
extern uint8_t bms_hv_fault[10][16];

Screen7View::Screen7View()
{

}

void Screen7View::setupScreen()
{
    Screen7ViewBase::setupScreen();
}

void Screen7View::tearDownScreen()
{
    Screen7ViewBase::tearDownScreen();
}

void Screen7View::updateHVFaults(){
	//SEGMENT1
		if (bms_hv_board_fault & 0x001) {
			circle_bms1Painter.setColor(
						touchgfx::Color::getColorFrom24BitRGB(255, 0, 0));
			} else {
				circle_bms1Painter.setColor(
						touchgfx::Color::getColorFrom24BitRGB(0, 255, 0));
			}
		circle_bms1.invalidate();

		//SEGMENT2
		if (bms_hv_board_fault & 0x002) {
			circle_bms2Painter.setColor(
						touchgfx::Color::getColorFrom24BitRGB(255, 0, 0));
			} else {
				circle_bms2Painter.setColor(
						touchgfx::Color::getColorFrom24BitRGB(0, 255, 0));
			}
		circle_bms2.invalidate();

		//SEGMENT3
		if (bms_hv_board_fault & 0x004) {
			circle_bms3Painter.setColor(
						touchgfx::Color::getColorFrom24BitRGB(255, 0, 0));
			} else {
				circle_bms3Painter.setColor(
						touchgfx::Color::getColorFrom24BitRGB(0, 255, 0));
			}
		circle_bms3.invalidate();

		//SEGMENT4
		if (bms_hv_board_fault & 0x008) {
			circle_bms4Painter.setColor(
						touchgfx::Color::getColorFrom24BitRGB(255, 0, 0));
			} else {
				circle_bms4Painter.setColor(
						touchgfx::Color::getColorFrom24BitRGB(0, 255, 0));
			}
		circle_bms4.invalidate();

		//SEGMENT5
		if (bms_hv_board_fault & 0x010) {
			circle_bms5Painter.setColor(
						touchgfx::Color::getColorFrom24BitRGB(255, 0, 0));
			} else {
				circle_bms5Painter.setColor(
						touchgfx::Color::getColorFrom24BitRGB(0, 255, 0));
			}
		circle_bms5.invalidate();

		//SEGMENT6
		if (bms_hv_board_fault & 0x0020) {
			circle_bms6Painter.setColor(
						touchgfx::Color::getColorFrom24BitRGB(255, 0, 0));
			} else {
				circle_bms6Painter.setColor(
						touchgfx::Color::getColorFrom24BitRGB(0, 255, 0));
			}
		circle_bms6.invalidate();

		//SEGMENT7
		if (bms_hv_board_fault & 0x040) {
			circle_bms7Painter.setColor(
						touchgfx::Color::getColorFrom24BitRGB(255, 0, 0));
			} else {
				circle_bms7Painter.setColor(
						touchgfx::Color::getColorFrom24BitRGB(0, 255, 0));
			}
		circle_bms7.invalidate();

		//SEGMENT8
		if (bms_hv_board_fault & 0x080) {
			circle_bms8Painter.setColor(
						touchgfx::Color::getColorFrom24BitRGB(255, 0, 0));
			} else {
				circle_bms8Painter.setColor(
						touchgfx::Color::getColorFrom24BitRGB(0, 255, 0));
			}
		circle_bms8.invalidate();

		//SEGMENT9
		if (bms_hv_board_fault & 0x100) {
			circle_bms9Painter.setColor(
						touchgfx::Color::getColorFrom24BitRGB(255, 0, 0));
			} else {
				circle_bms9Painter.setColor(
						touchgfx::Color::getColorFrom24BitRGB(0, 255, 0));
			}
		circle_bms9.invalidate();

		//SEGMENT10
		if (bms_hv_board_fault & 0x200) {
			circle_bms10Painter.setColor(
						touchgfx::Color::getColorFrom24BitRGB(255, 0, 0));
			} else {
				circle_bms10Painter.setColor(
						touchgfx::Color::getColorFrom24BitRGB(0, 255, 0));
			}
		circle_bms10.invalidate();

}
