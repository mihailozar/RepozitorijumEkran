#include <gui/screen3_screen/Screen3View.hpp>

#include <touchgfx/Color.hpp>

extern float bms_hv_volt[10];
extern float bms_hv_temperature[10][7];
extern float bms_hv_max_temperature[10];
extern uint16_t bms_hv_voltage_total;
extern uint16_t bms_hv_board_fault;
extern uint16_t bms_hv_current;

Screen3View::Screen3View()
{

}

void Screen3View::setupScreen()
{
    Screen3ViewBase::setupScreen();
}

void Screen3View::tearDownScreen()
{
    Screen3ViewBase::tearDownScreen();
}

void Screen3View::updateHV(){

	// TOTAL VOLTAGE + CURRENT
	Unicode::snprintf(total_voltageBuffer,  TOTAL_VOLTAGE_SIZE,"%d",bms_hv_voltage_total );
	total_voltage.invalidate();
	Unicode::snprintf(currnetBuffer, CURRNET_SIZE,"%d", bms_hv_current);
	currnet.invalidate();

	// SEGMENT1
	Unicode::snprintfFloat(voltage_bms1Buffer, VOLTAGE_BMS1_SIZE, "%.1f", bms_hv_volt[0]);
	voltage_bms1.invalidate();
	Unicode::snprintf(temp_bms1Buffer, TEMP_BMS1_SIZE, "%d", (int)bms_hv_max_temperature[0]);
	temp_bms1.invalidate();

	// SEGMENT2
	Unicode::snprintfFloat(voltage_bms2Buffer, VOLTAGE_BMS2_SIZE, "%.1f", bms_hv_volt[1]);
	voltage_bms2.invalidate();
	Unicode::snprintf(temp_bms2Buffer, TEMP_BMS1_SIZE, "%d", (int)bms_hv_max_temperature[1]);
	temp_bms2.invalidate();

	// SEGMENT3
	Unicode::snprintfFloat(voltage_bms3Buffer, VOLTAGE_BMS1_SIZE, "%.1f", bms_hv_volt[2]);
	voltage_bms3.invalidate();
	Unicode::snprintf(temp_bms3Buffer, TEMP_BMS1_SIZE, "%d", (int)bms_hv_max_temperature[2]);
	temp_bms3.invalidate();

	// SEGMENT4
	Unicode::snprintfFloat(voltage_bms4Buffer, VOLTAGE_BMS1_SIZE, "%.1f", bms_hv_volt[3]);
	voltage_bms4.invalidate();
	Unicode::snprintf(temp_bms4Buffer, TEMP_BMS1_SIZE, "%d", (int)bms_hv_max_temperature[3]);
	temp_bms4.invalidate();

	// SEGMENT5
	Unicode::snprintfFloat(voltage_bms5Buffer, VOLTAGE_BMS1_SIZE, "%.1f", bms_hv_volt[4]);
	voltage_bms5.invalidate();
	Unicode::snprintf(temp_bms5Buffer, TEMP_BMS1_SIZE, "%d", (int)bms_hv_max_temperature[4]);
	temp_bms5.invalidate();

	// SEGMENT6
	Unicode::snprintfFloat(voltage_bms6Buffer, VOLTAGE_BMS1_SIZE, "%.1f", bms_hv_volt[5]);
	voltage_bms6.invalidate();
	Unicode::snprintf(temp_bms6Buffer, TEMP_BMS1_SIZE, "%d", (int)bms_hv_max_temperature[5]);
	temp_bms6.invalidate();

	// SEGMENT7
	Unicode::snprintfFloat(voltage_bms7Buffer, VOLTAGE_BMS1_SIZE, "%.1f", bms_hv_volt[6]);
	voltage_bms7.invalidate();
	Unicode::snprintf(temp_bms7Buffer, TEMP_BMS1_SIZE, "%d", (int)bms_hv_max_temperature[6]);
	temp_bms7.invalidate();

	// SEGMENT8
	Unicode::snprintfFloat(voltage_bms8Buffer, VOLTAGE_BMS1_SIZE, "%.1f", bms_hv_volt[7]);
	voltage_bms8.invalidate();
	Unicode::snprintf(temp_bms8Buffer, TEMP_BMS1_SIZE, "%d", (int)bms_hv_max_temperature[7]);
	temp_bms8.invalidate();

	// SEGMENT9
	Unicode::snprintfFloat(voltage_bms9Buffer, VOLTAGE_BMS1_SIZE, "%.1f", bms_hv_volt[8]);
	voltage_bms9.invalidate();
	Unicode::snprintf(temp_bms9Buffer, TEMP_BMS1_SIZE, "%d", (int)bms_hv_max_temperature[8]);
	temp_bms9.invalidate();

	// SEGMENT10
	Unicode::snprintfFloat(voltage_bms10Buffer, VOLTAGE_BMS1_SIZE, "%.1f", bms_hv_volt[9]);
	voltage_bms10.invalidate();
	Unicode::snprintf(temp_bms10Buffer, TEMP_BMS1_SIZE, "%d", (int)bms_hv_max_temperature[9]);
	temp_bms10.invalidate();


}

void Screen3View::updateHVFaults(){

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
