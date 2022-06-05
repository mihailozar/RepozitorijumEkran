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



void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{
  /* USER CODE BEGIN Callback 0 */

  /* USER CODE END Callback 0 */
  if (htim->Instance == TIM6) {
    HAL_IncTick();
  }
  /* USER CODE BEGIN Callback 1 */

  if(htim->Instance == TIM3){

		 if (ecu_comm) {
		 	  ecu_comm_fault=0;
		 	  ecu_comm=0;
		   }
		   else {
		 	  ecu_comm_fault=1;

		 	 BMS_HV_state=(int) 5;
		 	 BMS_LV_state=(int) 5;
		 	 APPS_state=(int)5;
		 	 Inverter_state=(int)5;
		 	 Telemetry_state=0x3;
		   }
		   if (lv_comm) {
		 	  lv_comm_fault=0;
		 	  lv_comm=0;
		   }
		   else {
		 	  lv_comm_fault=1;
		   }
		   if (hv_comm) {
		 	  hv_comm_fault=0;
		 	  hv_comm=0;
		 	  ;
		   }
		   else {
		 	  hv_comm_fault=1;
		   }


  }
  /* USER CODE END Callback 1 */
}
QueueHandle_t CAN_Rx_Queue;
SemaphoreHandle_t CANMutex;
static void workTask(void *parameters) {
	myState = INIT;
	screen = 1;
	uint8_t data[8]={0};
	uint8_t dataAlive[8]={0};
	int lastButtonState = 0;
	unsigned long lastDebounceTime = 0;
	int buttonState=0;

	while (1) {
//////////////////////////////////
		///ALIVE MESSAGE
		dataAlive[0] =  1 ;
		sendStartMessage(dataAlive);
		HAL_Delay(30);
////////////////////////
		if (stateEcu == IDLE || stateEcu == ACC_ACTIVE) {

			 int reading = HAL_GPIO_ReadPin(START_GPIO_Port, START_Pin);
					  if (reading != lastButtonState) {
					    // reset the debouncing timer
					    lastDebounceTime = HAL_GetTick();;
					  }
					  if ((HAL_GetTick() - lastDebounceTime) > 50) {
					    if (reading != buttonState) {
					      buttonState = reading;
					      if (buttonState == 1) {

					    	  for(int i=0;i<10;i++){
					    		  //ECO SPORT
					    		if(HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_6)){
					    			data[1]=0xff;
					    		}
					    		//TORQUE ON OFF
					    		if(HAL_GPIO_ReadPin(GPIOG, GPIO_PIN_11)){
					    			data[2]=0xff;
					    		}
					    	  data[0] =  VEHICLE_START ;

					    	  sendStartMessage(data);
					    	  HAL_Delay(30);
					    	  }
					      }
					    }
					  }
					  lastButtonState=reading;

		}

//		startButton = 0;
		if (stateEcu == READY_TO_DRIVE_SIGNAL) {

			HAL_GPIO_WritePin(BUZZER_GPIO_Port, BUZZER_Pin, GPIO_PIN_SET);
			HAL_Delay(3000);
			HAL_GPIO_WritePin(BUZZER_GPIO_Port, BUZZER_Pin, GPIO_PIN_RESET);
			startButton = 0;
		}

	}
}

static void canTask(void *parameters) {
	while (1) {
		/*if (HAL_CAN_GetRxFifoFillLevel(&hcan2, 0) > 0) {
		 //xSemaphoreTake(CANMutex, portMAX_DELAY);
		 getCANMessage();
		 //xSemaphoreGive(CANMutex);
		 }*/
		uint8_t data1[8];
		data1[0] = 3;
		//sendStartMessage(data1);
	}
}

static void buttonTask(void *parameters) {
	int cnt = 0;
	int cntStart = 0;
	screen = 0;
	uint32_t oldMili = 0;
	uint32_t oldMili2 = 0;
	int changeFlag=0;
	int flag2=0;
	int lastButtonState = 0;
	unsigned long lastDebounceTime = 0;
	int buttonState=0;

	while (1) {

//		if (HAL_GPIO_ReadPin(DISPLAY_CHANGE_GPIO_Port, DISPLAY_CHANGE_Pin)) {
//			startButton = 0;
//			cntStart++;
//		}else {
//			if (cntStart > 1400
//					&& (stateEcu == IDLE || stateEcu == ACC_ACTIVE)) {
//				startButton = 1;
//			}
//			cntStart = 0;
//		}
		if (HAL_GPIO_ReadPin(DISPLAY_CHANGE_GPIO_Port, DISPLAY_CHANGE_Pin)
				== GPIO_PIN_RESET) {
			if (oldMili == 0) {
				oldMili = HAL_GetTick();
				changeFlag=1;
			}
		}
		if (HAL_GPIO_ReadPin(DISPLAY_CHANGE_GPIO_Port, DISPLAY_CHANGE_Pin) && changeFlag==1) {
			uint32_t currMili = HAL_GetTick();

			if (currMili - oldMili > 350) {
				if (screen == 0)
					screen = 1;
				else if (screen == 1)
					screen = 2;
				else if (screen == 2)
					screen = 3;
				else if (screen == 3)
					screen = 4;
				else if (screen == 4)
					screen = 5;
				else if (screen == 5)
					screen = 6;
				else if (screen == 6)
					screen = 7;
				else if (screen == 7)
					screen = 8;
				else if (screen == 8)
					screen = 9;
				else if (screen ==9)
					screen =1;
				oldMili = 0;
				changeFlag=0;
			}
		}



//		 int reading = HAL_GPIO_ReadPin(START_GPIO_Port, START_Pin);
//		  if (reading != lastButtonState) {
//		    // reset the debouncing timer
//		    lastDebounceTime = HAL_GetTick();;
//		  }
//		  if ((HAL_GetTick() - lastDebounceTime) > 50) {
//		    if (reading != buttonState) {
//		      buttonState = reading;
//		      if (buttonState == 1) {
//
//		    	  uint8_t data[1] = { VEHICLE_START };
//		    	  sendStartMessage(data);
//		    	  HAL_GPIO_WritePin(BUZZER_GPIO_Port, BUZZER_Pin, GPIO_PIN_SET);
//		    	  HAL_Delay(3000);
//		    	  HAL_GPIO_WritePin(BUZZER_GPIO_Port, BUZZER_Pin, GPIO_PIN_RESET);
//
//
//		      }
//		    }
//		  }
//		  lastButtonState=reading;


//		if (HAL_GPIO_ReadPin(START_GPIO_Port, START_Pin)== GPIO_PIN_RESET) {
//					if (oldMili2 == 0) {
//						oldMili2 = HAL_GetTick();
//						flag2=1;
//
//					}
//				}
//				if (HAL_GPIO_ReadPin(START_GPIO_Port, START_Pin) && flag2==1) {
//					uint32_t currMili = HAL_GetTick();
//
//					if (currMili - oldMili2 > 250) {
//						startButton = 1;
//						uint8_t data[1] = { VEHICLE_START };
//						sendStartMessage(data);
//						HAL_GPIO_WritePin(BUZZER_GPIO_Port, BUZZER_Pin, GPIO_PIN_SET);
//						HAL_Delay(3000);
//						HAL_GPIO_WritePin(BUZZER_GPIO_Port, BUZZER_Pin, GPIO_PIN_RESET);
//						oldMili2 = 0;
//						flag2=0;
//					}
//				}
	}
}



void workInit() {
	CAN_Rx_Queue = xQueueCreate(10, sizeof(struct CANMessage));
	CANMutex = xSemaphoreCreateMutex();
	xTaskCreate(workTask, "workTask", 128, NULL, 5, NULL);
//	xTaskCreate(canTask, "canTask", 128, NULL, 5, NULL);
		xTaskCreate(buttonTask, "buttonTask", 128, NULL, 5, NULL);
}


