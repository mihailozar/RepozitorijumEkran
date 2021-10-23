#ifndef APPLICATION_USER_TOUCHGFX_APP_WORK_H_
#define APPLICATION_USER_TOUCHGFX_APP_WORK_H_

#include "main.h"

struct CANMessage {
	CAN_RxHeaderTypeDef pHeader;
	uint8_t rxData[8];
} CANMsg;

//extern CAN_HandleTypeDef hcan2;
void workInit();

#endif /* APPLICATION_USER_TOUCHGFX_APP_WORK_H_ */
