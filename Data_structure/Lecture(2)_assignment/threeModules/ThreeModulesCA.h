/*
 * ThreeModulesCA.h
 *
 *  Created on: 20 Sep 2023
 *      Author: hp
 */

#ifndef THREEMODULESCA_H_
#define THREEMODULESCA_H_

#include <stdio.h>
#include <stdlib.h>
#include "state.h"

enum{
	CA_waiting,
	CA_driving
}CA_State;

void (*State)();

state_define(CA_Driving);
state_define(CA_Waiting);

US_Distance_Get(int d);
DCmotor_Set_Speed(int s);




#endif /* THREEMODULESCA_H_ */
