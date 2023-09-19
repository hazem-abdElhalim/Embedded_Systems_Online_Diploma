/*
 * FIFO_Buffer.c
 *
 *  Created on: 14 Sep 2023
 *      Author: hp
 */


#include "stdint.h"
#include "stdio.h"
#include "FIFO_Buffer.h"

FIFO_Status LIFO_init(FIFO_buffer* LIFO_Bf , elementType* bf , elementType length){
	LIFO_Bf->base= bf;
	LIFO_Bf->head = LIFO_Bf->base;
	LIFO_Bf->tail = LIFO_Bf->base;
	LIFO_Bf->counter =0;
	LIFO_Bf->length = length;
	if(LIFO_Bf->base && LIFO_Bf->length){
		return FIFO_noError;
	}
	return FIFO_null;
}


FIFO_Status isFull(FIFO_buffer* FIFO_Bf ){
	// check if FIFO is exist
	if(!FIFO_Bf->base || !FIFO_Bf->head || !FIFO_Bf->tail ){
		return FIFO_null;
	}
	// check if FIFO is full
	if(FIFO_Bf->counter >= FIFO_Bf->length ){
		printf("FIFO is full\n");
		return	FIFO_full;
	}
	return FIFO_noError;
}

FIFO_Status enqueueItem(FIFO_buffer* FIFO_Bf , elementType* item ){
	// enqueue the new item
	if(isFull(FIFO_Bf)== FIFO_noError){
		*(FIFO_Bf->head) = *item;
		FIFO_Bf->counter ++ ;


		// increase the head pointer
		if(FIFO_Bf->head == (FIFO_Bf->base + FIFO_Bf->length *sizeof(elementType)) ){
			FIFO_Bf->head = FIFO_Bf->base;
		}
		else{
			FIFO_Bf->head ++ ;
		}
	}
	else{
		printf("Failed to enqueue\n");
		return isFull(FIFO_Bf);
	}
	return FIFO_noError;
}

FIFO_Status dequeueItem(FIFO_buffer* FIFO_Bf , elementType* item ){
	// check if FIFO is exist
	if(!FIFO_Bf->base || !FIFO_Bf->head || !FIFO_Bf->tail ){
			return FIFO_null;
		}
	// check if FIFO is empty
	if(FIFO_Bf->counter == 0){
		printf("FIFO is empty\n");
		return FIFO_empty;
	}

	*item = *(FIFO_Bf->tail);
	FIFO_Bf->counter -- ;

	// increase the head pointer
	if(FIFO_Bf->tail == (FIFO_Bf->base + FIFO_Bf->length *sizeof(elementType)) ){
		FIFO_Bf->tail = FIFO_Bf->base;
	}
	else{
		FIFO_Bf->tail ++ ;
	}

	return FIFO_noError;
}

void print(FIFO_buffer* FIFO_Bf ){
	elementType* temp , i;
	if(FIFO_Bf->counter == 0){
		printf("The buffer is empty\n");
	}
	temp = FIFO_Bf->tail ;
	printf("----------FIFO print------------\n");
	for (i=0 ; i< FIFO_Bf->counter ; i++ , temp++){
		printf("the element no. %x is %x\n",i+1,*temp);
	}
	printf("---------------------------------\n");
}


