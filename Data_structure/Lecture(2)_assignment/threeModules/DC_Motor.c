/*
 * DC_Motor.c
 *
 *  Created on: 20 Sep 2023
 *      Author: hp
 */

#include "DC_Motor.h"

unsigned int Speed = 0;
extern void (*DC_State)();
void DC_init(){
	printf("DC_Init\n");
}
DCmotor_Set_Speed(int s){
	Speed = s;
	DC_State = state(DC_Busy);
	printf("CA------->DC\n");

}
state_define(DC_Idle){

	DC_State = DC_idle;
	printf("DC_IdleState : Speed= %d\n",Speed);

}
state_define(DC_Busy){
	DC_State = DC_idle;

	DC_State = state(DC_Idle);

	printf("DC_BusyState : Speed= %d\n",Speed);
}







