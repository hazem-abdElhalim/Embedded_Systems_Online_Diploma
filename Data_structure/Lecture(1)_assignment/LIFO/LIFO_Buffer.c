/*
 * main.c
 *
 *  Created on: 14 Sep 2023
 *      Author: hp
 */

#include "LIFO_Buffer.h"
#include <stdio.h>
#include <stdlib.h>


LIFO_Status LIFO_init(LIFO_Buffer* LIFO_Bf ){
	// set base pointer
		LIFO_Bf->base = (u32*)malloc(LIFO_BUFFER_SIZE*4);

		// check whether the base pointer is null or not
		if(!LIFO_Bf->base){
			return LIFO_null;
		}

		//set counter
		LIFO_Bf->counter =0;

		//set head pointer
		LIFO_Bf->head = LIFO_Bf->base;

		return LIFO_noError;
}

LIFO_Status isFull( LIFO_Buffer* LIFO_Bf ){
	if(LIFO_Bf->head >= (LIFO_Bf->base + LIFO_Bf->length *4)){
		return LIFO_full;
	}
	return LIFO_notFull;
}

LIFO_Status pushItem(LIFO_Buffer* LIFO_Bf , u32 item ){
	if(!LIFO_Bf || !LIFO_Bf->base || !LIFO_Bf->head){
		return LIFO_null;
	}
	if(isFull(LIFO_Bf) == LIFO_full){
			return LIFO_full;
		}
	*(LIFO_Bf->head) = item;
	LIFO_Bf->head ++ ;
	LIFO_Bf->counter ++ ;
	return LIFO_noError;
}


LIFO_Status popItem(LIFO_Buffer* LIFO_Bf , u32* item ){
	if(!LIFO_Bf || !LIFO_Bf->base || !LIFO_Bf->head){
			return LIFO_null;
		}
	if(isFull(LIFO_Bf) == LIFO_full){
				return LIFO_full;
		}
	LIFO_Bf->head -- ;
	*item = *(LIFO_Bf->head);
	LIFO_Bf->counter -- ;
	return LIFO_noError;
}



