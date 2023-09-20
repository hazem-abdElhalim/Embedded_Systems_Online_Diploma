/*
 * US.h
 *
 *  Created on: 20 Sep 2023
 *      Author: hp
 */

#ifndef US_H_
#define US_H_

#include "state.h"


enum{
	US_Busy,
}US_State_id;

void (*US_State)();

void US_init();
state_define(US_busy);


#endif
