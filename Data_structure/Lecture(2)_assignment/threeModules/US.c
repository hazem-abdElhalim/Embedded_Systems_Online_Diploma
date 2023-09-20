/*
 * US.c
 *
 *  Created on: 20 Sep 2023
 *      Author: hp
 */


#include "US.h"

unsigned int Distance = 0;
extern void (*US_State)();

int generateRandom(int min, int max) {

  return min + rand() % (max - min + 1);
}


void US_init(){
	printf("US is initialized\n");
}

state_define(US_busy){
	// state name
	US_State_id = US_Busy;

	// action
	Distance = generateRandom(45,55);
	printf("US_Busy state :  Distance = %d\n",Distance);

	US_Distance_Get(Distance);
	US_State = state(US_busy);

}






