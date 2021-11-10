#include <gui/screen6_screen/Screen6View.hpp>
#include <touchgfx/Color.hpp>

extern float bms_hv_voltage[10][14];
extern float bms_hv_volt[10];
extern uint16_t bms_hv_board_fault;
extern uint8_t periphery_state;

Screen6View::Screen6View()
{

}

void Screen6View::setupScreen()
{
    Screen6ViewBase::setupScreen();
}

void Screen6View::tearDownScreen()
{
    Screen6ViewBase::tearDownScreen();
}

void Screen6View::updateHV(){
	// SEGMENT9
		Unicode::snprintfFloat(bms9_cell1Buffer, BMS9_CELL1_SIZE, "%.1f",bms_hv_voltage[8][0]);
		bms9_cell1.invalidate();

		Unicode::snprintfFloat(bms9_cell2Buffer, BMS9_CELL1_SIZE, "%.1f",bms_hv_voltage[8][1]);
		bms9_cell2.invalidate();

		Unicode::snprintfFloat(bms9_cell3Buffer, BMS9_CELL1_SIZE, "%.1f",bms_hv_voltage[8][2]);
		bms9_cell3.invalidate();

		Unicode::snprintfFloat(bms9_cell4Buffer, BMS9_CELL1_SIZE, "%.1f",bms_hv_voltage[8][3]);
		bms9_cell4.invalidate();

		Unicode::snprintfFloat(bms9_cell5Buffer, BMS9_CELL1_SIZE, "%.1f",bms_hv_voltage[8][4]);
		bms9_cell5.invalidate();

		Unicode::snprintfFloat(bms9_cell6Buffer, BMS9_CELL1_SIZE, "%.1f",bms_hv_voltage[8][5]);
		bms9_cell6.invalidate();

		Unicode::snprintfFloat(bms9_cell7Buffer, BMS9_CELL1_SIZE, "%.1f",bms_hv_voltage[8][6]);
		bms9_cell7.invalidate();

		Unicode::snprintfFloat(bms9_cell8Buffer, BMS9_CELL1_SIZE, "%.1f",bms_hv_voltage[8][7]);
		bms9_cell8.invalidate();

		Unicode::snprintfFloat(bms9_cell9Buffer, BMS9_CELL1_SIZE, "%.1f",bms_hv_voltage[8][8]);
		bms9_cell9.invalidate();

		Unicode::snprintfFloat(bms9_cell10Buffer, BMS9_CELL1_SIZE, "%.1f",bms_hv_voltage[8][9]);
		bms9_cell10.invalidate();

		Unicode::snprintfFloat(bms9_cell11Buffer, BMS9_CELL1_SIZE, "%.1f",bms_hv_voltage[8][10]);
		bms9_cell11.invalidate();

		Unicode::snprintfFloat(bms9_cell12Buffer, BMS9_CELL1_SIZE, "%.1f",bms_hv_voltage[8][11]);
		bms9_cell12.invalidate();

		Unicode::snprintfFloat(bms9_cell13Buffer, BMS9_CELL1_SIZE, "%.1f",bms_hv_voltage[8][12]);
		bms9_cell13.invalidate();

		Unicode::snprintfFloat(bms9_cell14Buffer, BMS9_CELL1_SIZE, "%.1f",bms_hv_voltage[8][13]);
		bms9_cell14.invalidate();


		// SEGMENT10
		Unicode::snprintfFloat(bms10_cell1Buffer, BMS9_CELL1_SIZE, "%.1f",bms_hv_voltage[9][0]);
		bms10_cell1.invalidate();

		Unicode::snprintfFloat(bms10_cell2Buffer, BMS9_CELL1_SIZE, "%.1f",bms_hv_voltage[9][1]);
		bms10_cell2.invalidate();

		Unicode::snprintfFloat(bms10_cell3Buffer, BMS9_CELL1_SIZE, "%.1f",bms_hv_voltage[9][2]);
		bms10_cell3.invalidate();

		Unicode::snprintfFloat(bms10_cell4Buffer, BMS9_CELL1_SIZE, "%.1f",bms_hv_voltage[9][3]);
		bms10_cell4.invalidate();

		Unicode::snprintfFloat(bms10_cell5Buffer, BMS9_CELL1_SIZE, "%.1f",bms_hv_voltage[9][4]);
		bms10_cell5.invalidate();

		Unicode::snprintfFloat(bms10_cell6Buffer, BMS9_CELL1_SIZE, "%.1f",bms_hv_voltage[9][5]);
		bms10_cell6.invalidate();

		Unicode::snprintfFloat(bms10_cell7Buffer, BMS9_CELL1_SIZE, "%.1f",bms_hv_voltage[9][6]);
		bms10_cell7.invalidate();

		Unicode::snprintfFloat(bms10_cell8Buffer, BMS9_CELL1_SIZE, "%.1f",bms_hv_voltage[9][7]);
		bms10_cell8.invalidate();

		Unicode::snprintfFloat(bms10_cell9Buffer, BMS9_CELL1_SIZE, "%.1f",bms_hv_voltage[9][8]);
		bms10_cell9.invalidate();

		Unicode::snprintfFloat(bms10_cell10Buffer, BMS9_CELL1_SIZE, "%.1f",bms_hv_voltage[9][9]);
		bms10_cell10.invalidate();

		Unicode::snprintfFloat(bms10_cell11Buffer, BMS9_CELL1_SIZE, "%.1f",bms_hv_voltage[9][10]);
		bms10_cell11.invalidate();

		Unicode::snprintfFloat(bms10_cell12Buffer, BMS9_CELL1_SIZE, "%.1f",bms_hv_voltage[9][11]);
		bms10_cell12.invalidate();

		Unicode::snprintfFloat(bms10_cell13Buffer, BMS9_CELL1_SIZE, "%.1f",bms_hv_voltage[9][12]);
		bms10_cell13.invalidate();

		Unicode::snprintfFloat(bms10_cell14Buffer, BMS9_CELL1_SIZE, "%.1f",bms_hv_voltage[9][13]);
		bms10_cell14.invalidate();

		//PERIPHERY STATE (1 is error, 0 is ok)
			if (periphery_state & 0x08) {
					air_plusPainter.setColor(
							touchgfx::Color::getColorFrom24BitRGB(255, 0, 0));
					air_plus.invalidate();
				} else {
					air_plusPainter.setColor(
							touchgfx::Color::getColorFrom24BitRGB(0, 255, 0));
					air_plus.invalidate();
				}

			//air_minus
			if (periphery_state & 0x10) {
				circle1_2Painter.setColor(
								touchgfx::Color::getColorFrom24BitRGB(255, 0, 0));
				circle1_2.invalidate();
					} else {
						circle1_2Painter.setColor(
								touchgfx::Color::getColorFrom24BitRGB(0, 255, 0));
						circle1_2.invalidate();
					}

			//TSAL
			if (periphery_state & 0x20) {
				circle1_1Painter.setColor(
								touchgfx::Color::getColorFrom24BitRGB(255, 0, 0));
				circle1_1.invalidate();
					} else {
						circle1_1Painter.setColor(
								touchgfx::Color::getColorFrom24BitRGB(0, 255, 0));
						circle1_1.invalidate();
					}
			//IMD
			if (periphery_state & 0x40) {
				circle1_3Painter.setColor(
								touchgfx::Color::getColorFrom24BitRGB(255, 0, 0));
				circle1_3.invalidate();
					} else {
						circle1_3Painter.setColor(
								touchgfx::Color::getColorFrom24BitRGB(0, 255, 0));
						circle1_3.invalidate();
					}

}

void Screen6View::updateHVFaults(){

	//SEGMENT 9
		if (bms_hv_board_fault & 0x100) {
			bms9_circlePainter.setColor(
					touchgfx::Color::getColorFrom24BitRGB(255, 0, 0));
		} else {
			bms9_circlePainter.setColor(
					touchgfx::Color::getColorFrom24BitRGB(0, 255, 0));
		}
		bms9_circle.invalidate();
		//SEGMENT 10
		if (bms_hv_board_fault & 0x200) {
			bms10_circlePainter.setColor(
					touchgfx::Color::getColorFrom24BitRGB(255, 0, 0));
		} else {
			bms10_circlePainter.setColor(
					touchgfx::Color::getColorFrom24BitRGB(0, 255, 0));
		}
		bms10_circle.invalidate();
}
