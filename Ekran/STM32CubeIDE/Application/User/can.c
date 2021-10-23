#include "can.h"
#include "can_id.h"
#include "FreeRTOS.h"
#include "task.h"
#include "queue.h"
#include <stdlib.h>
#include "work.h"



struct CANMessage *msg;
extern QueueHandle_t CAN_Rx_Queue;
int new[10];
int newFault[10];

uint8_t getSlave(uint32_t id) {
	switch (id) {
	case BMS0L_FAULT_ID:
	case BMS0H_FAULT_ID:
	case BMS0L_HV_V_ID:
	case BMS0H_HV_V_ID:
	case BMS0_HV_TEMP_ID:
		return 0;
	case BMS1L_FAULT_ID:
	case BMS1H_FAULT_ID:
	case BMS1L_HV_V_ID:
	case BMS1H_HV_V_ID:
	case BMS1_HV_TEMP_ID:
		return 1;
	case BMS2L_FAULT_ID:
	case BMS2H_FAULT_ID:
	case BMS2L_HV_V_ID:
	case BMS2H_HV_V_ID:
	case BMS2_HV_TEMP_ID:
		return 2;
	case BMS3L_FAULT_ID:
	case BMS3H_FAULT_ID:
	case BMS3L_HV_V_ID:
	case BMS3H_HV_V_ID:
	case BMS3_HV_TEMP_ID:
		return 3;
	case BMS4L_FAULT_ID:
	case BMS4H_FAULT_ID:
	case BMS4L_HV_V_ID:
	case BMS4H_HV_V_ID:
	case BMS4_HV_TEMP_ID:
		return 4;
	case BMS5L_FAULT_ID:
	case BMS5H_FAULT_ID:
	case BMS5L_HV_V_ID:
	case BMS5H_HV_V_ID:
	case BMS5_HV_TEMP_ID:
		return 5;
	case BMS6L_FAULT_ID:
	case BMS6H_FAULT_ID:
	case BMS6L_HV_V_ID:
	case BMS6H_HV_V_ID:
	case BMS6_HV_TEMP_ID:
		return 6;
	case BMS7L_FAULT_ID:
	case BMS7H_FAULT_ID:
	case BMS7L_HV_V_ID:
	case BMS7H_HV_V_ID:
	case BMS7_HV_TEMP_ID:
		return 7;
	case BMS8L_FAULT_ID:
	case BMS8H_FAULT_ID:
	case BMS8L_HV_V_ID:
	case BMS8H_HV_V_ID:
	case BMS8_HV_TEMP_ID:
		return 8;
	case BMS9L_FAULT_ID:
	case BMS9H_FAULT_ID:
	case BMS9L_HV_V_ID:
	case BMS9H_HV_V_ID:
	case BMS9_HV_TEMP_ID:
		return 9;
	}
	return 0;
}

void canInit() {
//	HAL_CAN_ActivateNotification(&hcan2, CAN_IT_TX_MAILBOX_EMPTY);
//	HAL_CAN_ActivateNotification(&hcan2, CAN_IT_RX_FIFO0_MSG_PENDING);
//	HAL_CAN_ActivateNotification(&hcan2, CAN_IT_RX_FIFO1_MSG_PENDING);

	CAN_FilterTypeDef CanFilter;
	CanFilter.FilterIdHigh = 0x0000;
	CanFilter.FilterIdLow = 0;
	CanFilter.FilterMaskIdHigh = 0x0000;
	CanFilter.FilterMaskIdLow = 0;
	CanFilter.FilterFIFOAssignment = CAN_FILTER_FIFO0;
	CanFilter.FilterBank = 15;
	CanFilter.FilterMode = CAN_FILTERMODE_IDMASK;
	CanFilter.FilterScale = CAN_FILTERSCALE_32BIT;
	CanFilter.FilterActivation = CAN_FILTER_ENABLE;
	HAL_CAN_ConfigFilter(&hcan2, &CanFilter);
	HAL_CAN_Start(&hcan2);
}


void getCANMessage() {
	xQueueReceive(CAN_Rx_Queue, &(msg), 0);

	uint32_t messageID = msg->pHeader.StdId;
	uint8_t *rxData = msg->rxData;

//VEHICLE GENERAL STATE

	if (messageID == 0x0282) {
		speed = (int) (((rxData[2] << 8) + rxData[3]) * 0.0754);
	} else if (messageID == GENERAL_STATE_VEHICLE_ID ) {
		ecu_comm=1;
		stateEcu = (int) rxData[0];
	} else
//BMS HV FAULTS (Obrnuti su ID-evi u odnosu na dokument CAN Popis poruka)
	if (messageID >= BMS0L_FAULT_ID && messageID <= BMS9H_FAULT_ID) {
		hv_comm=1;
		uint8_t slave = getSlave(messageID); //BMS SLAVE NO
		if (newFault[slave]++ % 2 == 0) {
			for (int i = 0; i < 16; i++)
				bms_hv_fault[slave][i] = 0;
		}
		if (messageID % 2 == 0)
			for (int i = 0; i < 8; i++)
				bms_hv_fault[slave][i] = rxData[i];
		else
			for (int i = 0; i < 8; i++)
				bms_hv_fault[slave][i + 8] = rxData[i];
	} else
//BMS HV GENERAL STATE
	if (messageID == GENERAL_STATE_HV_ID) {
		hv_comm=1;
		periphery_state = rxData[0];
		bms_hv_voltage_total = ((rxData[1] << 8) + rxData[2]) / 65535 * 5;
		bms_hv_current = (rxData[3] << 8) + rxData[4];
		bms_hv_soc = rxData[5];
		bms_hv_board_fault = (rxData[6] << 8) + rxData[7];
	} else
//BMS LV GENERAL STATE
	if (messageID == GENERAL_STATE_LV_ID) {
		lv_comm=1;
		bms_lv_voltage_total = rxData[1];
		bms_lv_current = (rxData[2] << 8) + rxData[3];
		bms_lv_soc = rxData[4];
		bms_lv_maxtemp = rxData[5];
		fans_pumps = rxData[6];
		fans_pumps_fault = rxData[7];
	} else
//BMS HV VOLTAGES
	if (messageID >= BMS0L_HV_V_ID && messageID <= BMS9H_HV_V_ID) {
		hv_comm=1;
		uint8_t slave = getSlave(messageID); //BMS SLAVE NO

		if (new[slave]++ % 2 == 0) //if (new data has arrived)
				{
			bms_hv_volt[slave] = 0; //erase old data
			for (int i = 0; i < 14; i++)
				bms_hv_voltage[slave][i] = 0;
		}

		if (messageID % 2 == 0) {
			//CELL0 - CELL7
			for (int i = 0; i < 8; i++) {
				bms_hv_voltage[slave][i] = (float) (rxData[i] * 5) / 256;
				bms_hv_volt[slave] += bms_hv_voltage[slave][i];
			}

		} else {
			//CELL8 - CELL14
			for (int i = 0; i < 6; i++) {
				bms_hv_voltage[slave][i + 8] = (float) (rxData[i] * 5) / 256;
				bms_hv_volt[slave] += bms_hv_voltage[slave][i + 8];
			}

			//bms_hv_volt[slave] = (bms_hv_volt[slave] * 5 / 256);

		}

	} else
//BMS HV TEMPERATURES
	if (messageID >= BMS0_HV_TEMP_ID && messageID <= BMS9_HV_TEMP_ID) {
		hv_comm=1;
		uint8_t slave = getSlave(messageID); //BMS SLAVE NO
		bms_hv_max_temperature[slave] = 0;
		for (int i = 0; i < 7; i++) { //7 temperatures for one slave
			bms_hv_temperature[slave][i] = rxData[i];
			if (bms_hv_max_temperature[slave] < bms_hv_temperature[slave][i])
				bms_hv_max_temperature[slave] = bms_hv_temperature[slave][i];
		}
	} else
//BMS LV VOLTAGES + TEMPERATURES
	if (messageID == BMS_LV_V_TEMP_ID) {
		lv_comm=1;
		for (int i = 0; i < 4; i++) {
			bms_lv_voltage[i] = rxData[i] * 0.0001907349 * 256;
			bms_lv_temperature[i] = rxData[i + 4];
		}
	} else
//FANS + PUMPS
	if (messageID == 0x0192) {
		lv_comm=1;
		//fans_pumps = rxData[0];
		pump1_pwm = rxData[1];
		pump2_pwm = rxData[2];
	} else
//BMS LV FAULTS
	if (messageID == 0x0191) {
		lv_comm=1;
		for (int i = 0; i < 3; i++)
			bms_lv_fault[i] = rxData[i];
	}
}



uint32_t TxMailbox;

void sendStartMessage(uint8_t data[]) {

	CAN_TxHeaderTypeDef pHeader;
	pHeader.DLC = 1;
	pHeader.RTR = CAN_RTR_DATA;
	pHeader.IDE = CAN_ID_STD;
	pHeader.StdId = VEHICLE_START_ID;
	HAL_CAN_AddTxMessage(&hcan2, &pHeader, data, &TxMailbox);
	//while (HAL_CAN_IsTxMessagePending(&hcan2, TxMailbox));
}