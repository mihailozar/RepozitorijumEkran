#include <gui/screen4_screen/Screen4View.hpp>
#include <touchgfx/Color.hpp>


extern int screen;
extern float bms_hv_voltage[10][14];
extern float bms_hv_volt[10];
extern uint16_t bms_hv_board_fault;

Screen4View::Screen4View()
{

}

void Screen4View::handleTickEvent(){

	if (screen == 4) {
			application().gotoScreen5ScreenNoTransition();
		}

}
void Screen4View::setupScreen()
{
    Screen4ViewBase::setupScreen();
}

void Screen4View::tearDownScreen()
{
    Screen4ViewBase::tearDownScreen();
}

void Screen4View::updateHV(){



	// SEGMENT1
	Unicode::snprintfFloat(bms1_cell1Buffer, BMS1_CELL1_SIZE, "%.1f",bms_hv_voltage[0][0]);
	bms1_cell1.invalidate();

	Unicode::snprintfFloat(bms1_cell2Buffer, BMS1_CELL1_SIZE, "%.1f",bms_hv_voltage[0][1]);
	bms1_cell2.invalidate();

	Unicode::snprintfFloat(bms1_cell3Buffer, BMS1_CELL1_SIZE, "%.1f",bms_hv_voltage[0][2]);
	bms1_cell3.invalidate();

	Unicode::snprintfFloat(bms1_cell4Buffer, BMS1_CELL1_SIZE, "%.1f",bms_hv_voltage[0][3]);
	bms1_cell4.invalidate();

	Unicode::snprintfFloat(bms1_cell5Buffer, BMS1_CELL1_SIZE, "%.1f",bms_hv_voltage[0][4]);
	bms1_cell5.invalidate();

	Unicode::snprintfFloat(bms1_cell6Buffer, BMS1_CELL1_SIZE, "%.1f",bms_hv_voltage[0][5]);
	bms1_cell6.invalidate();

	Unicode::snprintfFloat(bms1_cell7Buffer, BMS1_CELL1_SIZE, "%.1f",bms_hv_voltage[0][6]);
	bms1_cell7.invalidate();

	Unicode::snprintfFloat(bms1_cell8Buffer, BMS1_CELL1_SIZE, "%.1f",bms_hv_voltage[0][7]);
	bms1_cell8.invalidate();

	Unicode::snprintfFloat(bms1_cell9Buffer, BMS1_CELL1_SIZE, "%.1f",bms_hv_voltage[0][8]);
	bms1_cell9.invalidate();

	Unicode::snprintfFloat(bms1_cell10Buffer, BMS1_CELL1_SIZE, "%.1f",bms_hv_voltage[0][9]);
	bms1_cell10.invalidate();

	Unicode::snprintfFloat(bms1_cell11Buffer, BMS1_CELL1_SIZE, "%.1f",bms_hv_voltage[0][10]);
	bms1_cell11.invalidate();

	Unicode::snprintfFloat(bms1_cell12Buffer, BMS1_CELL1_SIZE, "%.1f",bms_hv_voltage[0][11]);
	bms1_cell12.invalidate();

	Unicode::snprintfFloat(bms1_cell13Buffer, BMS1_CELL1_SIZE, "%.1f",bms_hv_voltage[0][12]);
	bms1_cell13.invalidate();

	Unicode::snprintfFloat(bms1_cell14Buffer, BMS1_CELL1_SIZE, "%.1f",bms_hv_voltage[0][13]);
	bms1_cell14.invalidate();


	// SEGMENT2
	Unicode::snprintfFloat(bms2_cell1Buffer, BMS1_CELL1_SIZE, "%.1f",bms_hv_voltage[1][0]);
	bms2_cell1.invalidate();

	Unicode::snprintfFloat(bms2_cell2Buffer, BMS1_CELL1_SIZE, "%.1f",bms_hv_voltage[1][1]);
	bms2_cell2.invalidate();

	Unicode::snprintfFloat(bms2_cell3Buffer, BMS1_CELL1_SIZE, "%.1f",bms_hv_voltage[1][2]);
	bms2_cell3.invalidate();

	Unicode::snprintfFloat(bms2_cell4Buffer, BMS1_CELL1_SIZE, "%.1f",bms_hv_voltage[1][3]);
	bms2_cell4.invalidate();

	Unicode::snprintfFloat(bms2_cell5Buffer, BMS1_CELL1_SIZE, "%.1f",bms_hv_voltage[1][4]);
	bms2_cell5.invalidate();

	Unicode::snprintfFloat(bms2_cell6Buffer, BMS1_CELL1_SIZE, "%.1f",bms_hv_voltage[1][5]);
	bms2_cell6.invalidate();

	Unicode::snprintfFloat(bms2_cell7Buffer, BMS1_CELL1_SIZE, "%.1f",bms_hv_voltage[1][6]);
	bms2_cell7.invalidate();

	Unicode::snprintfFloat(bms2_cell8Buffer, BMS1_CELL1_SIZE, "%.1f",bms_hv_voltage[1][7]);
	bms2_cell8.invalidate();

	Unicode::snprintfFloat(bms2_cell9Buffer, BMS1_CELL1_SIZE, "%.1f",bms_hv_voltage[1][8]);
	bms2_cell9.invalidate();

	Unicode::snprintfFloat(bms2_cell10Buffer, BMS1_CELL1_SIZE, "%.1f",bms_hv_voltage[1][9]);
	bms2_cell10.invalidate();

	Unicode::snprintfFloat(bms2_cell11Buffer, BMS1_CELL1_SIZE, "%.1f",bms_hv_voltage[1][10]);
	bms2_cell11.invalidate();

	Unicode::snprintfFloat(bms2_cell12Buffer, BMS1_CELL1_SIZE, "%.1f",bms_hv_voltage[1][11]);
	bms2_cell12.invalidate();

	Unicode::snprintfFloat(bms2_cell13Buffer, BMS1_CELL1_SIZE, "%.1f",bms_hv_voltage[1][12]);
	bms2_cell13.invalidate();

	Unicode::snprintfFloat(bms2_cell14Buffer, BMS1_CELL1_SIZE, "%.1f",bms_hv_voltage[1][13]);
	bms2_cell14.invalidate();


	// SEGMENT3
	Unicode::snprintfFloat(bms3_cell1Buffer, BMS1_CELL1_SIZE, "%.1f",bms_hv_voltage[2][0]);
	bms3_cell1.invalidate();

	Unicode::snprintfFloat(bms3_cell2Buffer, BMS1_CELL1_SIZE, "%.1f",bms_hv_voltage[2][1]);
	bms3_cell2.invalidate();

	Unicode::snprintfFloat(bms3_cell3Buffer, BMS1_CELL1_SIZE, "%.1f",bms_hv_voltage[2][2]);
	bms3_cell3.invalidate();

	Unicode::snprintfFloat(bms3_cell4Buffer, BMS1_CELL1_SIZE, "%.1f",bms_hv_voltage[2][3]);
	bms3_cell4.invalidate();

	Unicode::snprintfFloat(bms3_cell5Buffer, BMS1_CELL1_SIZE, "%.1f",bms_hv_voltage[2][4]);
	bms3_cell5.invalidate();

	Unicode::snprintfFloat(bms3_cell6Buffer, BMS1_CELL1_SIZE, "%.1f",bms_hv_voltage[2][5]);
	bms3_cell6.invalidate();

	Unicode::snprintfFloat(bms3_cell7Buffer, BMS1_CELL1_SIZE, "%.1f",bms_hv_voltage[2][6]);
	bms3_cell7.invalidate();

	Unicode::snprintfFloat(bms3_cell8Buffer, BMS1_CELL1_SIZE, "%.1f",bms_hv_voltage[2][7]);
	bms3_cell8.invalidate();

	Unicode::snprintfFloat(bms3_cell9Buffer, BMS1_CELL1_SIZE, "%.1f",bms_hv_voltage[2][8]);
	bms3_cell9.invalidate();

	Unicode::snprintfFloat(bms3_cell10Buffer, BMS1_CELL1_SIZE, "%.1f",bms_hv_voltage[2][9]);
	bms3_cell10.invalidate();

	Unicode::snprintfFloat(bms3_cell11Buffer, BMS1_CELL1_SIZE, "%.1f",bms_hv_voltage[2][10]);
	bms1_cell11.invalidate();

	Unicode::snprintfFloat(bms3_cell12Buffer, BMS1_CELL1_SIZE, "%.1f",bms_hv_voltage[2][11]);
	bms3_cell12.invalidate();

	Unicode::snprintfFloat(bms3_cell13Buffer, BMS1_CELL1_SIZE, "%.1f",bms_hv_voltage[2][12]);
	bms3_cell13.invalidate();

	Unicode::snprintfFloat(bms3_cell14Buffer, BMS1_CELL1_SIZE, "%.1f",bms_hv_voltage[2][13]);
	bms3_cell14.invalidate();

	// SEGMENT4
	Unicode::snprintfFloat(bms4_cell1Buffer, BMS1_CELL1_SIZE, "%.1f",bms_hv_voltage[3][0]);
	bms4_cell1.invalidate();

	Unicode::snprintfFloat(bms4_cell2Buffer, BMS1_CELL1_SIZE, "%.1f",bms_hv_voltage[3][1]);
	bms4_cell2.invalidate();

	Unicode::snprintfFloat(bms4_cell3Buffer, BMS1_CELL1_SIZE, "%.1f",bms_hv_voltage[3][2]);
	bms4_cell3.invalidate();

	Unicode::snprintfFloat(bms4_cell4Buffer, BMS1_CELL1_SIZE, "%.1f",bms_hv_voltage[3][3]);
	bms4_cell4.invalidate();

	Unicode::snprintfFloat(bms4_cell5Buffer, BMS1_CELL1_SIZE, "%.1f",bms_hv_voltage[3][4]);
	bms4_cell5.invalidate();

	Unicode::snprintfFloat(bms4_cell6Buffer, BMS1_CELL1_SIZE, "%.1f",bms_hv_voltage[3][5]);
	bms4_cell6.invalidate();

	Unicode::snprintfFloat(bms4_cell7Buffer, BMS1_CELL1_SIZE, "%.1f",bms_hv_voltage[3][6]);
	bms4_cell7.invalidate();

	Unicode::snprintfFloat(bms4_cell8Buffer, BMS1_CELL1_SIZE, "%.1f",bms_hv_voltage[3][7]);
	bms4_cell8.invalidate();

	Unicode::snprintfFloat(bms4_cell9Buffer, BMS1_CELL1_SIZE, "%.1f",bms_hv_voltage[3][8]);
	bms4_cell9.invalidate();

	Unicode::snprintfFloat(bms4_cell10Buffer, BMS1_CELL1_SIZE, "%.1f",bms_hv_voltage[3][9]);
	bms4_cell10.invalidate();

	Unicode::snprintfFloat(bms4_cell11Buffer, BMS1_CELL1_SIZE, "%.1f",bms_hv_voltage[3][10]);
	bms4_cell11.invalidate();

	Unicode::snprintfFloat(bms4_cell12Buffer, BMS1_CELL1_SIZE, "%.1f",bms_hv_voltage[3][11]);
	bms4_cell12.invalidate();

	Unicode::snprintfFloat(bms4_cell13Buffer, BMS1_CELL1_SIZE, "%.1f",bms_hv_voltage[3][12]);
	bms4_cell13.invalidate();

	Unicode::snprintfFloat(bms4_cell14Buffer, BMS1_CELL1_SIZE, "%.1f",bms_hv_voltage[3][13]);
	bms4_cell14.invalidate();

}

void Screen4View::updateHVFaults(){

	//SEGMENT1
	if (bms_hv_board_fault & 0x001) {
		bms1_circlePainter.setColor(
					touchgfx::Color::getColorFrom24BitRGB(255, 0, 0));
		} else {
			bms1_circlePainter.setColor(
					touchgfx::Color::getColorFrom24BitRGB(0, 255, 0));
		}
	bms1_circle.invalidate();

	//SEGMENT2
	if (bms_hv_board_fault & 0x002) {
			bms2_circlePainter.setColor(
						touchgfx::Color::getColorFrom24BitRGB(255, 0, 0));
			} else {
				bms2_circlePainter.setColor(
						touchgfx::Color::getColorFrom24BitRGB(0, 255, 0));
			}
	bms2_circle.invalidate();

	//SEGMENT3
	if (bms_hv_board_fault & 0x004) {
			bms3_circlePainter.setColor(
						touchgfx::Color::getColorFrom24BitRGB(255, 0, 0));
			} else {
				bms3_circlePainter.setColor(
						touchgfx::Color::getColorFrom24BitRGB(0, 255, 0));
			}
	bms3_circle.invalidate();

	//SEGMENT4
	if (bms_hv_board_fault & 0x008) {
			bms4_circlePainter.setColor(
						touchgfx::Color::getColorFrom24BitRGB(255, 0, 0));
			} else {
				bms4_circlePainter.setColor(
						touchgfx::Color::getColorFrom24BitRGB(0, 255, 0));
			}
	bms4_circle.invalidate();

}
