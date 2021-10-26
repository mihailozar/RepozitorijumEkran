/*
 * work.c
 *
 *  Created on: 23.10.2021.
 *      Author: mihailozar
 */

#include "work.h"
#include "can.h"
#include "can_id.h"
#include "FreeRTOS.h"
#include "FreeRTOSconfig.h"
#include "task.h"
#include "queue.h"
#include "semphr.h"


QueueHandle_t CAN_Rx_Queue;
SemaphoreHandle_t CANMutex;
static void workTask(void *parameters) {
	myState = INIT;
	screen = 1;
	uint8_t data[1] = { VEHICLE_START };

	while (1) {

//		if (stateEcu == IDLE || stateEcu == ACC_ACTIVE) {
//			if (startButton) {
//				sendStartMessage(data);
//				vTaskDelay(1000 / portTICK_PERIOD_MS);
//				startButton = 0;
//			}
//		}

//		if (stateEcu == READY_TO_DRIVE_SIGNAL) {
//			HAL_GPIO_WritePin(GPIOG, GPIO_PIN_9, GPIO_PIN_RESET);
//			HAL_GPIO_WritePin(GPIOK, GPIO_PIN_3, GPIO_PIN_RESET);
//			HAL_Delay(3000);
//			HAL_GPIO_WritePin(GPIOG, GPIO_PIN_9, GPIO_PIN_SET);
//			HAL_GPIO_WritePin(GPIOK, GPIO_PIN_3, GPIO_PIN_SET);
//			startButton = 0;
//		}

	}
}

static void canTask(void *parameters) {
		while (1) {
			if (uxQueueMessagesWaiting(CAN_Rx_Queue) > 0) {
				//xSemaphoreTake(CANMutex, portMAX_DELAY);
				getCANMessage();
				//xSemaphoreGive(CANMutex);
			}
			uint8_t data1[8];
			data1[0]=3;
			sendStartMessage(data1);
		}
}

void workInit() {
	CAN_Rx_Queue = xQueueCreate(10, sizeof(struct CANMessage));
	CANMutex = xSemaphoreCreateMutex();
	xTaskCreate(workTask, "workTask", 128, NULL, 5, NULL);
	xTaskCreate(canTask, "canTask", 128, NULL, 5, NULL);
//	xTaskCreate(buttonTask, "buttonTask", 128, NULL, 5, NULL);
}
