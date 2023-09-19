/*
 * FIFO_Buffer.h
 *
 *  Created on: 14 Sep 2023
 *      Author: hp
 */

#ifndef FIFO_BUFFER_H_
#define FIFO_BUFFER_H_

#include "stdint.h"
#include "stdio.h"

#define  lengthOfBuffer 5
#define  elementType uint8_t

typedef struct{
	elementType  counter;
	elementType*  tail;
	elementType*  base;
	elementType*  head;
	elementType  length;
}FIFO_buffer;

typedef enum {
	FIFO_noError,
	FIFO_full,
	FIFO_notFull,
	FIFO_empty,
	FIFO_notEmpty,
	FIFO_null
}FIFO_Status;

// APIs
FIFO_Status LIFO_init(FIFO_buffer* FIFO_Bf , elementType* bf , elementType length);
FIFO_Status enqueueItem(FIFO_buffer* FIFO_Bf , elementType* item );
FIFO_Status dequeueItem(FIFO_buffer* FIFO_Bf , elementType* item );
FIFO_Status isFull(FIFO_buffer* FIFO_Bf );
void print(FIFO_buffer* FIFO_Bf );

#endif /* FIFO_BUFFER_H_ */
