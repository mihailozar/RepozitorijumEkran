/*
 * can.h
 *
 *  Created on: Mar 28, 2021
 *      Author: rm170154d
 */

#ifndef APPLICATION_USER_CAN_H_
#define APPLICATION_USER_CAN_H_

#include "main.h"

enum State {
	INIT,
	VEHICLE_CHECK,
	IDLE,
	FAULT,
	PRECHARGE,
	ACC_ACTIVE,
	INVERTER_ACTIVE,
	READY_TO_DRIVE_SIGNAL,
	READY_TO_DRIVE
};

enum StateBoard{
	OK,
	ACTIVATING,
	CHARGING,
	UNKNOWN,
	FATAL
};

int lv_comm_fault;
int hv_comm_fault;
int ecu_comm_fault;


typedef enum State state_type;

volatile enum State stateEcu;
volatile enum State myState;
volatile enum StateBoard BMS_HV_state;
volatile enum StateBoard BMS_LV_state;
volatile enum StateBoard APPS_state;
volatile enum StateBoard Inverter_state;
volatile int Telemetry_state;
volatile enum StateBoard wheels[4];


int speed;

//HIGH VOLTAGE
float bms_hv_voltage[10][14];
float bms_hv_volt[10];
float bms_hv_temperature[10][7];
float bms_hv_max_temperature[10];
uint8_t bms_hv_fault[10][16];
uint8_t bms_hv_soc;
uint8_t volatile periphery_state;
uint16_t bms_hv_voltage_total;
uint16_t bms_hv_current;
uint16_t bms_hv_board_fault;
int hv_comm;

//LOW VOLTAGE
float bms_lv_voltage_total;
float bms_lv_curr;
float bms_lv_voltage[4];
float bms_lv_temperature[6];

uint8_t bms_lv_soc;
uint8_t bms_lv_maxtemp;
uint8_t fans_pumps;
uint8_t pump1_pwm;
uint8_t pump2_pwm;
uint8_t bms_lv_fault[3];
uint8_t fans_pumps_fault;
int lv_comm;

int ecu_comm;

volatile int warningTemperatureFlag;
volatile int LVopenCircuit;
volatile int relayFaults;
volatile int prechargFaultState;

extern CAN_HandleTypeDef hcan2;
uint8_t rxData[8];
int screen;
volatile int startButton;
void sendStartMessage(uint8_t data[], int id);
void canInit();
void getCANMessage();


#endif /* APPLICATION_USER_CAN_H_ */
