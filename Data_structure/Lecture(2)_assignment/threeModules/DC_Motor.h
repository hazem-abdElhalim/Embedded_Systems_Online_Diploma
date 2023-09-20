/*
 * DC_Motor.h
 *
 *  Created on: 20 Sep 2023
 *      Author: hp
 */

#ifndef DC_MOTOR_H_
#define DC_MOTOR_H_

#include "state.h"


enum{
	DC_idle,
	DC_busy
}DC_State_id;

void (*DC_State)();

void DC_init();
state_define(DC_Idle);
state_define(DC_Busy);


#endif /* DC_MOTOR_H_ */
