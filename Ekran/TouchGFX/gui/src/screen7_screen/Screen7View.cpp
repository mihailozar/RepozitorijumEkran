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

		//SEGMENT 1
			if (bms_hv_fault[0][0] != 0 || bms_hv_fault[0][1] != 0) {
				under_bms1.setVisible(true);
			}
			if (bms_hv_fault[0][2] != 0 || bms_hv_fault[0][3] != 0) {
				over_bms1.setVisible(true);
			}
			if (bms_hv_fault[0][12] != 0 || bms_hv_fault[0][13] != 0) {
				comm_bms1.setVisible(true);
			}

			//SEGMENT 2
			if (bms_hv_fault[1][0] != 0 || bms_hv_fault[1][1] != 0) {
				under_bms2.setVisible(true);
			}
			if (bms_hv_fault[1][2] != 0 || bms_hv_fault[1][3] != 0) {
				over_bms2.setVisible(true);
			}
			if (bms_hv_fault[1][12] != 0 || bms_hv_fault[1][13] != 0) {
				comm_bms2.setVisible(true);
			}

			//SEGMENT 3
			if (bms_hv_fault[2][0] != 0 || bms_hv_fault[2][1] != 0) {
				under_bms3.setVisible(true);
			}
			if (bms_hv_fault[2][2] != 0 || bms_hv_fault[2][3] != 0) {
				over_bms3.setVisible(true);
			}
			if (bms_hv_fault[2][12] != 0 || bms_hv_fault[2][13] != 0) {
				comm_bms3.setVisible(true);
			}

			//SEGMENT 4
			if (bms_hv_fault[3][0] != 0 || bms_hv_fault[3][1] != 0) {
				under_bms4.setVisible(true);
			}
			if (bms_hv_fault[3][2] != 0 || bms_hv_fault[3][3] != 0) {
				over_bms4.setVisible(true);
			}
			if (bms_hv_fault[3][12] != 0 || bms_hv_fault[3][13] != 0) {
				comm_bms4.setVisible(true);
			}

			//SEGMENT 5
			if (bms_hv_fault[4][0] != 0 || bms_hv_fault[4][1] != 0) {
				under_bms5.setVisible(true);
			}
			if (bms_hv_fault[4][2] != 0 || bms_hv_fault[4][3] != 0) {
				over_bms5.setVisible(true);
			}
			if (bms_hv_fault[4][12] != 0 || bms_hv_fault[4][13] != 0) {
				comm_bms5.setVisible(true);
			}

			//SEGMENT 6
			if (bms_hv_fault[5][0] != 0 || bms_hv_fault[5][1] != 0) {
				under_bms6.setVisible(true);
			}
			if (bms_hv_fault[5][2] != 0 || bms_hv_fault[5][3] != 0) {
				over_bms6.setVisible(true);
			}
			if (bms_hv_fault[5][12] != 0 || bms_hv_fault[5][13] != 0) {
				comm_bms6.setVisible(true);
			}

			//SEGMENT 7
			if (bms_hv_fault[6][0] != 0 || bms_hv_fault[6][1] != 0) {
				under_bms7.setVisible(true);
			}
			if (bms_hv_fault[6][2] != 0 || bms_hv_fault[6][3] != 0) {
				over_bms7.setVisible(true);
			}
			if (bms_hv_fault[6][12] != 0 || bms_hv_fault[6][13] != 0) {
				comm_bms7.setVisible(true);
			}

			//SEGMENT 8
			if (bms_hv_fault[7][0] != 0 || bms_hv_fault[7][1] != 0) {
				under_bms8.setVisible(true);
			}
			if (bms_hv_fault[7][2] != 0 || bms_hv_fault[7][3] != 0) {
				over_bms8.setVisible(true);
			}
			if (bms_hv_fault[7][12] != 0 || bms_hv_fault[7][13] != 0) {
				comm_bms8.setVisible(true);
			}

			//SEGMENT 9
			if (bms_hv_fault[8][0] != 0 || bms_hv_fault[8][1] != 0) {
				under_bms9.setVisible(true);
			}
			if (bms_hv_fault[8][2] != 0 || bms_hv_fault[8][3] != 0) {
				over_bms9.setVisible(true);
			}
			if (bms_hv_fault[8][12] != 0 || bms_hv_fault[8][13] != 0) {
				comm_bms9.setVisible(true);
			}

			//SEGMENT 10
			if (bms_hv_fault[9][0] != 0 || bms_hv_fault[9][1] != 0) {
				under_bms10.setVisible(true);
			}
			if (bms_hv_fault[9][2] != 0 || bms_hv_fault[9][3] != 0) {
				over_bms10.setVisible(true);
			}
			if (bms_hv_fault[9][12] != 0 || bms_hv_fault[9][13] != 0) {
				comm_bms10.setVisible(true);
			}


}
