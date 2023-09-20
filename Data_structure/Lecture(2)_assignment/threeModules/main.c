/*
 * main.c
 *
 *  Created on: 20 Sep 2023
 *      Author: hp
 */


#include <stdio.h>
#include <stdlib.h>
#include "ThreeModulesCA.h"
#include "US.h"
#include "DC_Motor.h"
#include "state.h"
int main(void) {
	volatile unsigned int i;
	setUp();
	while(1){
		State();
		US_State();
		DC_State();

		for(i=0 ; i<200000 ; i++);
	}


}
