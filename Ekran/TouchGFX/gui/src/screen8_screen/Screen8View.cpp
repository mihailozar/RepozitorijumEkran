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

extern float bms_lv_voltage_total;

Screen8View::Screen8View()
{

}

void Screen8View::setupScreen()
{
    Screen8ViewBase::setupScreen();
}

void Screen8View::tearDownScreen()
{
    Screen8ViewBase::tearDownScreen();

}

void Screen8View::handleTickEvent(){

	if (screen == 8) {
			application().gotoScreen1ScreenNoTransition();
		}

}
void Screen8View::updateLV(){

	//VOLTAGE + TEMP
		Unicode::snprintfFloat(lv_voltageBuffer, LV_VOLTAGE_SIZE, "%.1f",bms_lv_voltage_total);
		lv_voltage.invalidate();
		Unicode::snprintfFloat(lv_tempBuffer, LV_VOLTAGE_SIZE, "%.1f", bms_lv_maxtemp);
		lv_temp.invalidate();

		//CELL 1
			Unicode::snprintfFloat(voltage_1Buffer, VOLTAGE_1_SIZE,"%.1f", bms_lv_voltage[0]);
			Unicode::snprintfFloat(temp_1Buffer, VOLTAGE_1_SIZE, "%.1f",
					bms_lv_temperature[0]);
			voltage_1.invalidate();
			temp_1.invalidate();

			//CELL 2
			Unicode::snprintfFloat(voltage_2Buffer, VOLTAGE_1_SIZE,
					"%.1f", bms_lv_voltage[1]);
			Unicode::snprintfFloat(temp2Buffer, VOLTAGE_1_SIZE, "%.1f",
					bms_lv_temperature[1]);
			voltage_2.invalidate();
			temp2.invalidate();

			//CELL 3
			Unicode::snprintfFloat(voltage_3Buffer, VOLTAGE_1_SIZE,
					"%.1f", bms_lv_voltage[2]);
			Unicode::snprintfFloat(temp_3Buffer, VOLTAGE_1_SIZE, "%.1f",
					bms_lv_temperature[2]);
			voltage_3.invalidate();
			temp_3.invalidate();

			//CELL 4
			Unicode::snprintfFloat(voltage_4Buffer, VOLTAGE_1_SIZE,
					"%.1f", bms_lv_voltage[3]);
			Unicode::snprintfFloat(temp_4Buffer, VOLTAGE_1_SIZE, "%.1f",
					bms_lv_temperature[3]);
			voltage_4.invalidate();
			temp_4.invalidate();
}
