#include <gui/screen8_screen/Screen8View.hpp>
#include <touchgfx/Color.hpp>
extern int screen;
extern float bms_lv_voltage[4];
extern float bms_lv_temperature[6];
extern uint8_t fans_pumps;
extern uint8_t pump1_pwm;
extern uint8_t pump2_pwm;
extern uint8_t bms_lv_maxtemp;
extern uint8_t fans_pumps_fault;
extern uint8_t bms_lv_fault[3];
extern float bms_lv_curr;
extern int LVopenCircuit;
extern int bml_lv_tempFault;
extern int bms_lv_soc;
extern int bms_lv_actuator;


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
		application().gotoScreen9ScreenNoTransition();
	}

}
void Screen8View::updateLV() {

	//VOLTAGE + TEMP + SOC
	Unicode::snprintfFloat(lv_voltageBuffer, LV_VOLTAGE_SIZE, "%.1f",
			bms_lv_voltage_total);
	lv_voltage.invalidate();

	Unicode::snprintfFloat(lv_currentBuffer, LV_VOLTAGE_SIZE, "%.1f",
			bms_lv_curr);
	lv_current.invalidate();

	Unicode::snprintf(socBuffer, LV_VOLTAGE_SIZE, "%d",
				bms_lv_soc);
	soc.invalidate();

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

	Unicode::snprintfFloat(temp_5Buffer, VOLTAGE_1_SIZE, "%.1f",
				bms_lv_temperature[4]);
	temp_5.invalidate();

	Unicode::snprintfFloat(temp_6Buffer, VOLTAGE_1_SIZE, "%.1f",
					bms_lv_temperature[5]);
	temp_6.invalidate();

	Unicode::snprintf(percent_1Buffer, PERCENT_1_SIZE, "%d", pump1_pwm);
	percent_1.invalidate();

	Unicode::snprintf(textArea14Buffer, PERCENT_1_SIZE, "%d", pump2_pwm);
	textArea14.invalidate();

	//CIRCLE
	if ((bms_lv_fault[0] & 0x0001) || (bms_lv_fault[0] & 0x10)) {
		circle_cell1Painter.setColor(
				touchgfx::Color::getColorFrom24BitRGB(255, 0, 0));
	}
	else {
		circle_cell1Painter.setColor(
				touchgfx::Color::getColorFrom24BitRGB(0, 255, 0));
	}
	circle_cell1.invalidate();

	if ((bms_lv_fault[0] & 0x2) || (bms_lv_fault[0] & 0x20)) {
		circle_cell2Painter.setColor(
				touchgfx::Color::getColorFrom24BitRGB(255, 0, 0));
	} else  {
		circle_cell2Painter.setColor(
				touchgfx::Color::getColorFrom24BitRGB(0, 255, 0));
	}
	circle_cell2.invalidate();

	if ((bms_lv_fault[0] & 0x4) || (bms_lv_fault[0] & 0x40)) {
		circle_cell3Painter.setColor(
				touchgfx::Color::getColorFrom24BitRGB(255, 0, 0));
	} else  {
		circle_cell3Painter.setColor(
				touchgfx::Color::getColorFrom24BitRGB(0, 255, 0));
	}
	circle_cell3.invalidate();

	if ((bms_lv_fault[0] & 0x8) || (bms_lv_fault[0] & 0x80)) {
		circle_cell4Painter.setColor(
				touchgfx::Color::getColorFrom24BitRGB(255, 0, 0));
	} else {
		circle_cell4Painter.setColor(
				touchgfx::Color::getColorFrom24BitRGB(0, 255, 0));
	}
	circle_cell4.invalidate();

	if(bml_lv_tempFault & 0x01){
		circle_temp1Painter.setColor(
							touchgfx::Color::getColorFrom24BitRGB(255, 0, 0));
			circle_temp1.invalidate();
	}else  if((LVopenCircuit & 0x1) ){

		circle_temp1Painter.setColor(
						touchgfx::Color::getColorFrom24BitRGB(0xfa, 0x8c, 0x05));
		circle_temp1.invalidate();
	}else {
		circle_temp1Painter.setColor(
							touchgfx::Color::getColorFrom24BitRGB(0, 255, 0));
			circle_temp1.invalidate();
	}

	if(bml_lv_tempFault & 0x02){
		circle_temp2Painter.setColor(
								touchgfx::Color::getColorFrom24BitRGB( 255,0 , 0));
			circle_temp2.invalidate();
		}else if((LVopenCircuit & 0x2)){
			circle_temp2Painter.setColor(
					touchgfx::Color::getColorFrom24BitRGB(0xfa, 0x8c, 0x05));
			circle_temp2.invalidate();
		}else{
			circle_temp2Painter.setColor(
									touchgfx::Color::getColorFrom24BitRGB(0, 255, 0));
				circle_temp2.invalidate();
		}
	if(bml_lv_tempFault & 0x04){
		circle_temp3Painter.setColor(
								touchgfx::Color::getColorFrom24BitRGB( 255,0 , 0));
		circle_temp3.invalidate();
		}else if((LVopenCircuit & 0x4)){
			circle_temp3Painter.setColor(
							touchgfx::Color::getColorFrom24BitRGB(0xfa, 0x8c, 0x05));
			circle_temp3.invalidate();
		}else{
			circle_temp3Painter.setColor(
									touchgfx::Color::getColorFrom24BitRGB(0, 255, 0));
			circle_temp3.invalidate();
		}
	if(bml_lv_tempFault & 0x08){
		circle_temp4Painter.setColor(
								touchgfx::Color::getColorFrom24BitRGB( 255,0 , 0));
		circle_temp4.invalidate();
		}else if((LVopenCircuit & 0x8)){
			circle_temp4Painter.setColor(
							touchgfx::Color::getColorFrom24BitRGB(0xfa, 0x8c, 0x05));
			circle_temp4.invalidate();
		}else{
			circle_temp4Painter.setColor(
									touchgfx::Color::getColorFrom24BitRGB(0, 255, 0));
			circle_temp4.invalidate();
		}
	if(bml_lv_tempFault & 0x10){
		circle_temp5Painter.setColor(
									touchgfx::Color::getColorFrom24BitRGB( 255,0 , 0));
		circle_temp5.invalidate();
			}else if((LVopenCircuit & 0x10)){
				circle_temp5Painter.setColor(
								touchgfx::Color::getColorFrom24BitRGB(0xfa, 0x8c, 0x05));
				circle_temp5.invalidate();
			}else{
				circle_temp5Painter.setColor(
										touchgfx::Color::getColorFrom24BitRGB(0, 255, 0));
				circle_temp5.invalidate();
			}

	if(bml_lv_tempFault & 0x20){
		circle_temp6Painter.setColor(
										touchgfx::Color::getColorFrom24BitRGB( 255,0 , 0));
		circle_temp6.invalidate();
				}else if((LVopenCircuit & 0x20)){
					circle_temp6Painter.setColor(
									touchgfx::Color::getColorFrom24BitRGB(0xfa, 0x8c, 0x05));
					circle_temp6.invalidate();
				}else{
					circle_temp6Painter.setColor(
											touchgfx::Color::getColorFrom24BitRGB(0, 255, 0));
					circle_temp6.invalidate();
				}
	//Pump1
	if (fans_pumps & 0x1) {
		circle_cell1_1_2Painter.setColor(
				touchgfx::Color::getColorFrom24BitRGB(0, 255, 0));
	} else if (bms_lv_actuator & 0x10){
		circle_cell1_1_2Painter.setColor(
						touchgfx::Color::getColorFrom24BitRGB(255,0 , 0));
	}else{
		circle_cell1_1_2Painter.setColor(
				touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
	}
	circle_cell1_1_2.invalidate();
	//Pump2
	if (fans_pumps & 0x2) {
		circle_cell1_1_3Painter.setColor(
				touchgfx::Color::getColorFrom24BitRGB(0, 255, 0));
	} else if  (bms_lv_actuator & 0x20){
		circle_cell1_1_3Painter.setColor(
						touchgfx::Color::getColorFrom24BitRGB(255,0 , 0));
	}else{
		circle_cell1_1_3Painter.setColor(
				touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
	}
	circle_cell1_1_3.invalidate();

	//Fan1
	if (fans_pumps & 0x4) {
		circle_cell1_1Painter.setColor(
				touchgfx::Color::getColorFrom24BitRGB(0, 255, 0));
	} else if  (bms_lv_actuator & 0x40){
		circle_cell1_1Painter.setColor(
						touchgfx::Color::getColorFrom24BitRGB(255,0 , 0));
	}else {
		circle_cell1_1Painter.setColor(
				touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
	}
	circle_cell1_1.invalidate();

	//Fan2
	if (fans_pumps & 0x8) {
		circle_cell1_1_1Painter.setColor(
				touchgfx::Color::getColorFrom24BitRGB(0, 255, 0));
	} else if  (bms_lv_actuator & 0x80){
		circle_cell1_1_1Painter.setColor(
						touchgfx::Color::getColorFrom24BitRGB(255,0 , 0));
	}else{
		circle_cell1_1_1Painter.setColor(
				touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
	}
	circle_cell1_1_1.invalidate();

	switch (bms_lv_actuator & 0x0f ){
	case 0x01:
		actuator_fault_code.setVisible(true);
		Unicode::snprintfFloat(fault_code_numBuffer, LV_VOLTAGE_SIZE, "%d",
					1);
		fault_code_num.invalidate();
		fault_code_num.setVisible(true);
		break;
	case 0x02:
		actuator_fault_code.setVisible(true);
		Unicode::snprintfFloat(fault_code_numBuffer, LV_VOLTAGE_SIZE, "%d",
							2);
		fault_code_num.invalidate();
		fault_code_num.setVisible(true);
		break;
	case 0x04:
		actuator_fault_code.setVisible(true);
		Unicode::snprintfFloat(fault_code_numBuffer, LV_VOLTAGE_SIZE, "%d",
							3);
		fault_code_num.invalidate();
		fault_code_num.setVisible(true);
		break;
	case 0x08:
		actuator_fault_code.setVisible(true);
		Unicode::snprintfFloat(fault_code_numBuffer, LV_VOLTAGE_SIZE, "%d",
							4);

		fault_code_num.setVisible(true);
		fault_code_num.invalidate();
		break;
	default:
		actuator_fault_code.setVisible(false);
		fault_code_num.setVisible(false);

	}
	actuator_fault_code.invalidate();
	fault_code_num.invalidate();

}
