/*
 ============================================================================
 Name        : ThreeModulesCA.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "state.h"
#include "ThreeModulesCA.h"
#include "US.h"
#include "DC_Motor.h"


int CA_Speed = 0;
int CA_Distance = 0;
int Threshold = 50;

extern void (*State)();


void setUp(){

	US_init();
	DC_init();

	State = state(CA_Waiting);
	US_State = state(US_busy);
	DC_State = state(DC_Idle);

}

US_Distance_Get(int d){
	CA_Distance = d;
	(CA_Distance <= Threshold) ? (State = state(CA_Waiting)) : (State = state(CA_Driving));
	printf("US------Distance----->CA %d\n",CA_Distance);
}

state_define(CA_Waiting){
	// state name

	CA_State = CA_waiting ;

	// action
	CA_Speed = 0;
	DCmotor_Set_Speed(CA_Speed);

	printf("Driving state: Speed: %d   Distance= %d\n",CA_Speed,CA_Distance);
}
state_define(CA_Driving){
	// state name
	CA_State = CA_driving ;
	// action
	CA_Speed = 30;
	DCmotor_Set_Speed(CA_Speed);


	printf("Driving state: Speed: %d   Distance= %d\n",CA_Speed,CA_Distance);
}





