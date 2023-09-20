/*
 * main.c
 *
 *  Created on: 19 Sep 2023
 *      Author: hp
 */


#include <stdio.h>
#include <stdlib.h>
#include "state.h"
#include "OneModuleCA.h"


int main(void) {
	setUp();
	int i;
	while(1){
		State();
		for(i=0 ; i<20000 ; i++);
	}


	return EXIT_SUCCESS;
}
