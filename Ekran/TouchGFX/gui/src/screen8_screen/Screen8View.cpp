#include <gui/screen8_screen/Screen8View.hpp>
#include <touchgfx/Color.hpp>
extern int screen;
extern float bms_lv_voltage[4];
extern float bms_lv_temperature[4];
extern uint8_t fans_pumps;
extern uint8_t pump1_pwm;
extern uint8_t pump2_pwm;
extern uint8_t bms_lv_maxtemp;
extern uint8_t fans_pumps_fault;
extern uint8_t bms_lv_fault[3];
extern float bms_lv_curr;


extern float bms_lv_voltage_total;

Screen8View::Screen8View() {

}

void Screen8View::setupScreen() {
	Screen8ViewBase::setupScreen();
}

void Screen8View::tearDownScreen() {
	Screen8ViewBase::tearDownScreen();

}

void Screen8View::handleTickEvent() {

	if (screen == 8) {
		application().gotoScreen1ScreenNoTransition();
	}

}
void Screen8View::updateLV() {

	//VOLTAGE + TEMP
	Unicode::snprintfFloat(lv_voltageBuffer, LV_VOLTAGE_SIZE, "%.1f",
			bms_lv_voltage_total);
	lv_voltage.invalidate();

	Unicode::snprintfFloat(lv_currentBuffer, LV_VOLTAGE_SIZE, "%.1f",
			bms_lv_curr);
	lv_current.invalidate();

	//CELL 1
	Unicode::snprintfFloat(voltage_1Buffer, VOLTAGE_1_SIZE, "%.1f",
			bms_lv_voltage[0]);
	Unicode::snprintfFloat(temp_1Buffer, VOLTAGE_1_SIZE, "%.1f",
			bms_lv_temperature[0]);
	voltage_1.invalidate();
	temp_1.invalidate();

	//CELL 2
	Unicode::snprintfFloat(voltage_2Buffer, VOLTAGE_1_SIZE, "%.1f",
			bms_lv_voltage[1]);
	Unicode::snprintfFloat(temp2Buffer, VOLTAGE_1_SIZE, "%.1f",
			bms_lv_temperature[1]);
	voltage_2.invalidate();
	temp2.invalidate();

	//CELL 3
	Unicode::snprintfFloat(voltage_3Buffer, VOLTAGE_1_SIZE, "%.1f",
			bms_lv_voltage[2]);
	Unicode::snprintfFloat(temp_3Buffer, VOLTAGE_1_SIZE, "%.1f",
			bms_lv_temperature[2]);
	voltage_3.invalidate();
	temp_3.invalidate();

	//CELL 4
	Unicode::snprintfFloat(voltage_4Buffer, VOLTAGE_1_SIZE, "%.1f",
			bms_lv_voltage[3]);
	Unicode::snprintfFloat(temp_4Buffer, VOLTAGE_1_SIZE, "%.1f",
			bms_lv_temperature[3]);
	voltage_4.invalidate();
	temp_4.invalidate();

	Unicode::snprintf(percent_1Buffer, PERCENT_1_SIZE, "%d", pump1_pwm);
	percent_1.invalidate();

	Unicode::snprintf(textArea14Buffer, PERCENT_1_SIZE, "%d", pump2_pwm);
	textArea14.invalidate();

	//CIRCLE
	if (bms_lv_fault[0] & 0x0001) {
		circle_cell1Painter.setColor(
				touchgfx::Color::getColorFrom24BitRGB(255, 0, 0));
	} else {
		circle_cell1Painter.setColor(
				touchgfx::Color::getColorFrom24BitRGB(0, 255, 0));
	}
	circle_cell1.invalidate();

	if (bms_lv_fault[0] & 0x0010) {
		circle_cell2Painter.setColor(
				touchgfx::Color::getColorFrom24BitRGB(255, 0, 0));
	} else {
		circle_cell2Painter.setColor(
				touchgfx::Color::getColorFrom24BitRGB(0, 255, 0));
	}
	circle_cell2.invalidate();

	if (bms_lv_fault[0] & 0x0100) {
		circle_cell3Painter.setColor(
				touchgfx::Color::getColorFrom24BitRGB(255, 0, 0));
	} else {
		circle_cell3Painter.setColor(
				touchgfx::Color::getColorFrom24BitRGB(0, 255, 0));
	}
	circle_cell3.invalidate();

	if (bms_lv_fault[0] & 0x1000) {
		circle_cell4Painter.setColor(
				touchgfx::Color::getColorFrom24BitRGB(255, 0, 0));
	} else {
		circle_cell4Painter.setColor(
				touchgfx::Color::getColorFrom24BitRGB(0, 255, 0));
	}
	circle_cell4.invalidate();

	//Pump1
	if (fans_pumps & 0x1) {
		circle_cell1_1_2Painter.setColor(
				touchgfx::Color::getColorFrom24BitRGB(0, 255, 0));
	} else {
		circle_cell1_1_2Painter.setColor(
				touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
	}
	circle_cell1_1_2.invalidate();
	//Pump2
	if (fans_pumps & 0x2) {
		circle_cell1_1_3Painter.setColor(
				touchgfx::Color::getColorFrom24BitRGB(0, 255, 0));
	} else {
		circle_cell1_1_3Painter.setColor(
				touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
	}
	circle_cell1_1_3.invalidate();

	//Fan1
	if (fans_pumps & 0x4) {
		circle_cell1_1Painter.setColor(
				touchgfx::Color::getColorFrom24BitRGB(0, 255, 0));
	} else {
		circle_cell1_1Painter.setColor(
				touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
	}
	circle_cell1_1.invalidate();

	//Fan2
	if (fans_pumps & 0x8) {
		circle_cell1_1_1Painter.setColor(
				touchgfx::Color::getColorFrom24BitRGB(0, 255, 0));
	} else {
		circle_cell1_1_1Painter.setColor(
				touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
	}
	circle_cell1_1_1.invalidate();

}
