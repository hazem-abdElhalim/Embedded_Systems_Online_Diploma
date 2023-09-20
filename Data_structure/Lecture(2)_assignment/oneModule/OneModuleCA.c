/*
 ============================================================================
 Name        : OneModuleCA.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include "state.h"
#include "OneModuleCA.h"

int Speed = 0;
int Distance = 0;
int threshold = 50;

extern void (*State)();


void setUp(){

	State = state(CA_Waiting);

}


state_define(CA_Waiting){
	// state name

	CA_State = CA_Waiting ;

	// action
	Speed = 0;
	Distance = generateRandom( 45 , 55 , 1);

	// check
	(Distance <= threshold) ? (State = state(CA_Waiting)) : (State = state(CA_Driving));
	DPRINTF("Waiting state: Speed: %d   Distance= %d\n",Speed,Distance)
}
state_define(CA_Driving){
	// state name

	CA_State = CA_Waiting ;

	// action
	Speed = 30;
	Distance = generateRandom( 45 , 55 , 1);

	// check
	(Distance > threshold) ? (State = state(CA_Driving)) : (State = state(CA_Waiting));
	DPRINTF("Driving state: Speed: %d   Distance= %d\n",Speed,Distance)
}


int generateRandom(int min, int max) {

  return min + rand() % (max - min + 1);
}



