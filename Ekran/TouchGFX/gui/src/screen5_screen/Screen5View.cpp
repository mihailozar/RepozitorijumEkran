#include <gui/screen5_screen/Screen5View.hpp>
#include <touchgfx/Color.hpp>

extern float bms_hv_voltage[10][14];
extern float bms_hv_volt[10];
extern uint16_t bms_hv_board_fault;

Screen5View::Screen5View()
{

}

void Screen5View::setupScreen()
{
    Screen5ViewBase::setupScreen();
}

void Screen5View::tearDownScreen()
{
    Screen5ViewBase::tearDownScreen();
}

void Screen5View::updateHV(){

	// SEGMENT1
	Unicode::snprintfFloat(bms5_cell1Buffer, BMS5_CELL1_SIZE, "%.1f",bms_hv_voltage[4][0]);
	bms5_cell1.invalidate();

	Unicode::snprintfFloat(bms5_cell2Buffer, BMS5_CELL1_SIZE, "%.1f",bms_hv_voltage[4][1]);
	bms5_cell2.invalidate();

	Unicode::snprintfFloat(bms5_cell3Buffer, BMS5_CELL1_SIZE, "%.1f",bms_hv_voltage[4][2]);
	bms5_cell3.invalidate();

	Unicode::snprintfFloat(bms5_cell4Buffer, BMS5_CELL1_SIZE, "%.1f",bms_hv_voltage[4][3]);
	bms5_cell4.invalidate();

	Unicode::snprintfFloat(bms5_cell5Buffer, BMS5_CELL1_SIZE, "%.1f",bms_hv_voltage[4][4]);
	bms5_cell5.invalidate();

	Unicode::snprintfFloat(bms5_cell6Buffer, BMS5_CELL1_SIZE, "%.1f",bms_hv_voltage[4][5]);
	bms5_cell6.invalidate();

	Unicode::snprintfFloat(bms5_cell7Buffer, BMS5_CELL1_SIZE, "%.1f",bms_hv_voltage[4][6]);
	bms5_cell7.invalidate();

	Unicode::snprintfFloat(bms5_cell8Buffer, BMS5_CELL1_SIZE, "%.1f",bms_hv_voltage[4][7]);
	bms5_cell8.invalidate();

	Unicode::snprintfFloat(bms5_cell9Buffer, BMS5_CELL1_SIZE, "%.1f",bms_hv_voltage[4][8]);
	bms5_cell9.invalidate();

	Unicode::snprintfFloat(bms5_cell10Buffer, BMS5_CELL1_SIZE, "%.1f",bms_hv_voltage[4][9]);
	bms5_cell10.invalidate();

	Unicode::snprintfFloat(bms5_cell11Buffer, BMS5_CELL1_SIZE, "%.1f",bms_hv_voltage[4][10]);
	bms5_cell11.invalidate();

	Unicode::snprintfFloat(bms5_cell12Buffer, BMS5_CELL1_SIZE, "%.1f",bms_hv_voltage[4][11]);
	bms5_cell12.invalidate();

	Unicode::snprintfFloat(bms5_cell13Buffer, BMS5_CELL1_SIZE, "%.1f",bms_hv_voltage[4][12]);
	bms5_cell13.invalidate();

	Unicode::snprintfFloat(bms5_cell14Buffer, BMS5_CELL1_SIZE, "%.1f",bms_hv_voltage[4][13]);
	bms5_cell14.invalidate();


	// SEGMENT2
	Unicode::snprintfFloat(bms6_cell1Buffer, BMS5_CELL1_SIZE, "%.1f",bms_hv_voltage[5][0]);
	bms6_cell1.invalidate();

	Unicode::snprintfFloat(bms6_cell2Buffer, BMS5_CELL1_SIZE, "%.1f",bms_hv_voltage[5][1]);
	bms6_cell2.invalidate();

	Unicode::snprintfFloat(bms6_cell3Buffer, BMS5_CELL1_SIZE, "%.1f",bms_hv_voltage[5][2]);
	bms6_cell3.invalidate();

	Unicode::snprintfFloat(bms6_cell4Buffer, BMS5_CELL1_SIZE, "%.1f",bms_hv_voltage[5][3]);
	bms6_cell4.invalidate();

	Unicode::snprintfFloat(bms6_cell5Buffer, BMS5_CELL1_SIZE, "%.1f",bms_hv_voltage[5][4]);
	bms6_cell5.invalidate();

	Unicode::snprintfFloat(bms6_cell6Buffer, BMS5_CELL1_SIZE, "%.1f",bms_hv_voltage[5][5]);
	bms6_cell6.invalidate();

	Unicode::snprintfFloat(bms6_cell7Buffer, BMS5_CELL1_SIZE, "%.1f",bms_hv_voltage[5][6]);
	bms6_cell7.invalidate();

	Unicode::snprintfFloat(bms6_cell8Buffer, BMS5_CELL1_SIZE, "%.1f",bms_hv_voltage[5][7]);
	bms6_cell8.invalidate();

	Unicode::snprintfFloat(bms6_cell9Buffer, BMS5_CELL1_SIZE, "%.1f",bms_hv_voltage[5][8]);
	bms6_cell9.invalidate();

	Unicode::snprintfFloat(bms6_cell10Buffer, BMS5_CELL1_SIZE, "%.1f",bms_hv_voltage[5][9]);
	bms6_cell10.invalidate();

	Unicode::snprintfFloat(bms6_cell11Buffer, BMS5_CELL1_SIZE, "%.1f",bms_hv_voltage[5][10]);
	bms6_cell11.invalidate();

	Unicode::snprintfFloat(bms6_cell12Buffer, BMS5_CELL1_SIZE, "%.1f",bms_hv_voltage[5][11]);
	bms6_cell12.invalidate();

	Unicode::snprintfFloat(bms6_cell13Buffer, BMS5_CELL1_SIZE, "%.1f",bms_hv_voltage[5][12]);
	bms6_cell13.invalidate();

	Unicode::snprintfFloat(bms6_cell14Buffer, BMS5_CELL1_SIZE, "%.1f",bms_hv_voltage[5][13]);
	bms6_cell14.invalidate();


	// SEGMENT3
	Unicode::snprintfFloat(bms7_cell1Buffer, BMS5_CELL1_SIZE, "%.1f",bms_hv_voltage[6][0]);
	bms7_cell1.invalidate();

	Unicode::snprintfFloat(bms7_cell2Buffer, BMS5_CELL1_SIZE, "%.1f",bms_hv_voltage[6][1]);
	bms7_cell2.invalidate();

	Unicode::snprintfFloat(bms7_cell3Buffer, BMS5_CELL1_SIZE, "%.1f",bms_hv_voltage[6][2]);
	bms7_cell3.invalidate();

	Unicode::snprintfFloat(bms7_cell4Buffer, BMS5_CELL1_SIZE, "%.1f",bms_hv_voltage[6][3]);
	bms7_cell4.invalidate();

	Unicode::snprintfFloat(bms7_cell5Buffer, BMS5_CELL1_SIZE, "%.1f",bms_hv_voltage[6][4]);
	bms7_cell5.invalidate();

	Unicode::snprintfFloat(bms7_cell6Buffer, BMS5_CELL1_SIZE, "%.1f",bms_hv_voltage[6][5]);
	bms7_cell6.invalidate();

	Unicode::snprintfFloat(bms7_cell7Buffer, BMS5_CELL1_SIZE, "%.1f",bms_hv_voltage[6][6]);
	bms7_cell7.invalidate();

	Unicode::snprintfFloat(bms7_cell8Buffer, BMS5_CELL1_SIZE, "%.1f",bms_hv_voltage[6][7]);
	bms7_cell8.invalidate();

	Unicode::snprintfFloat(bms7_cell9Buffer, BMS5_CELL1_SIZE, "%.1f",bms_hv_voltage[6][8]);
	bms7_cell9.invalidate();

	Unicode::snprintfFloat(bms7_cell10Buffer, BMS5_CELL1_SIZE, "%.1f",bms_hv_voltage[6][9]);
	bms7_cell10.invalidate();

	Unicode::snprintfFloat(bms7_cell11Buffer, BMS5_CELL1_SIZE, "%.1f",bms_hv_voltage[6][10]);
	bms7_cell11.invalidate();

	Unicode::snprintfFloat(bms7_cell12Buffer, BMS5_CELL1_SIZE, "%.1f",bms_hv_voltage[6][11]);
	bms7_cell12.invalidate();

	Unicode::snprintfFloat(bms7_cell13Buffer, BMS5_CELL1_SIZE, "%.1f",bms_hv_voltage[6][12]);
	bms7_cell13.invalidate();

	Unicode::snprintfFloat(bms7_cell14Buffer, BMS5_CELL1_SIZE, "%.1f",bms_hv_voltage[6][13]);
	bms7_cell14.invalidate();

	// SEGMENT4
	Unicode::snprintfFloat(bms8_cell1Buffer, BMS5_CELL1_SIZE, "%.1f",bms_hv_voltage[7][0]);
	bms8_cell1.invalidate();

	Unicode::snprintfFloat(bms8_cell2Buffer, BMS5_CELL1_SIZE, "%.1f",bms_hv_voltage[7][1]);
	bms8_cell2.invalidate();

	Unicode::snprintfFloat(bms8_cell3Buffer, BMS5_CELL1_SIZE, "%.1f",bms_hv_voltage[7][2]);
	bms8_cell3.invalidate();

	Unicode::snprintfFloat(bms8_cell4Buffer, BMS5_CELL1_SIZE, "%.1f",bms_hv_voltage[7][3]);
	bms8_cell4.invalidate();

	Unicode::snprintfFloat(bms8_cell5Buffer, BMS5_CELL1_SIZE, "%.1f",bms_hv_voltage[7][4]);
	bms8_cell5.invalidate();

	Unicode::snprintfFloat(bms8_cell6Buffer, BMS5_CELL1_SIZE, "%.1f",bms_hv_voltage[7][5]);
	bms8_cell6.invalidate();

	Unicode::snprintfFloat(bms8_cell7Buffer, BMS5_CELL1_SIZE, "%.1f",bms_hv_voltage[7][6]);
	bms8_cell7.invalidate();

	Unicode::snprintfFloat(bms8_cell8Buffer, BMS5_CELL1_SIZE, "%.1f",bms_hv_voltage[7][7]);
	bms8_cell8.invalidate();

	Unicode::snprintfFloat(bms8_cell9Buffer, BMS5_CELL1_SIZE, "%.1f",bms_hv_voltage[7][8]);
	bms8_cell9.invalidate();

	Unicode::snprintfFloat(bms8_cell10Buffer, BMS5_CELL1_SIZE, "%.1f",bms_hv_voltage[7][9]);
	bms8_cell10.invalidate();

	Unicode::snprintfFloat(bms8_cell11Buffer, BMS5_CELL1_SIZE, "%.1f",bms_hv_voltage[7][10]);
	bms8_cell11.invalidate();

	Unicode::snprintfFloat(bms8_cell12Buffer, BMS5_CELL1_SIZE, "%.1f",bms_hv_voltage[7][11]);
	bms8_cell12.invalidate();

	Unicode::snprintfFloat(bms8_cell13Buffer, BMS5_CELL1_SIZE, "%.1f",bms_hv_voltage[7][12]);
	bms8_cell13.invalidate();

	Unicode::snprintfFloat(bms8_cell14Buffer, BMS5_CELL1_SIZE, "%.1f",bms_hv_voltage[7][13]);
	bms8_cell14.invalidate();

}


void Screen5View::updateHVFaults() {

	//SEGMENT1
		if (bms_hv_board_fault & 0x010) {
			bms5_circlePainter.setColor(
						touchgfx::Color::getColorFrom24BitRGB(255, 0, 0));
			} else {
				bms5_circlePainter.setColor(
						touchgfx::Color::getColorFrom24BitRGB(0, 255, 0));
			}
		bms5_circle.invalidate();

		//SEGMENT2
		if (bms_hv_board_fault & 0x020) {
				bms6_circlePainter.setColor(
							touchgfx::Color::getColorFrom24BitRGB(255, 0, 0));
				} else {
					bms6_circlePainter.setColor(
							touchgfx::Color::getColorFrom24BitRGB(0, 255, 0));
				}
		bms6_circle.invalidate();

		//SEGMENT3
		if (bms_hv_board_fault & 0x040) {
				bms7_circlePainter.setColor(
							touchgfx::Color::getColorFrom24BitRGB(255, 0, 0));
				} else {
					bms7_circlePainter.setColor(
							touchgfx::Color::getColorFrom24BitRGB(0, 255, 0));
				}
		bms7_circle.invalidate();

		//SEGMENT4
		if (bms_hv_board_fault & 0x080) {
				bms8_circlePainter.setColor(
							touchgfx::Color::getColorFrom24BitRGB(255, 0, 0));
				} else {
					bms8_circlePainter.setColor(
							touchgfx::Color::getColorFrom24BitRGB(0, 255, 0));
				}
		bms8_circle.invalidate();
}
