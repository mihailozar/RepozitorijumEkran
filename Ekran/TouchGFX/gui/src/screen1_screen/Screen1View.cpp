#include <gui/screen1_screen/Screen1View.hpp>
#include <touchgfx/Color.hpp>
#include "can.h"

extern int lv_comm_fault, hv_comm_fault, ecu_comm_fault;
char *states[9] = { "INIT", "VEHICLE CHECK", "IDLE", "FAULT", "PRECHARGE",
		"ACC ACTIVE", "INVERTER ACTIVE", "READY TO DRIVE SIGNAL",
		"READY TO DRIVE" };

Screen1View::Screen1View()
{

}

void Screen1View::setupScreen()
{
    Screen1ViewBase::setupScreen();
}

void Screen1View::tearDownScreen()
{
    Screen1ViewBase::tearDownScreen();
}

int counter=0;
int i=0;
char* oldState = "INIT";
int speedPredstavljanje=0;
void Screen1View::handleTickEvent(){

	if (screen == 1) {
			application().gotoScreen3ScreenNoTransition();
		}


}

void Screen1View::updateState() {
	//if(states[stateEcu] != oldState) {
		Unicode::strncpy(vehicle_stateBuffer, states[stateEcu], 20);
		vehicle_state.invalidate();
		oldState = states[stateEcu];
	////}


}

void Screen1View::updateHV() {
	hv_comm_fault=0;
	if (hv_comm_fault) {
		bmsPainter.setColor(
				touchgfx::Color::getColorFrom24BitRGB(255, 0, 0));
		bms.invalidate();
	} else {
		bmsPainter.setColor(
				touchgfx::Color::getColorFrom24BitRGB(0, 255, 0));
		bms.invalidate();
	}


	Unicode::snprintf(speed_txtBuffer, SPEED_TXT_SIZE,"%d", speed);
	speed_txt.invalidate();


	bms_hv_voltage_total=550;
	Unicode::snprintf(voltageBuffer, VOLTAGE_SIZE,"%d", bms_hv_voltage_total);
	voltage.invalidate();

	bms_hv_soc=28;
	Unicode::snprintf(socBuffer, SOC_SIZE,"%d", bms_hv_soc);
	soc.invalidate();
}


void Screen1View::updateLV() {
	lv_comm_fault=0;
	if (lv_comm_fault) {
		lvpbPainter.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 0, 0));
		lvpb.invalidate();
	} else {
		lvpbPainter.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 255, 0));
		lvpb.invalidate();
	}
	ecu_comm_fault=0;
	if (ecu_comm_fault) {
		ecuPainter.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 0, 0));
		ecu.invalidate();
	} else {
		ecuPainter.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 255, 0));
		ecu.invalidate();
	}

}
