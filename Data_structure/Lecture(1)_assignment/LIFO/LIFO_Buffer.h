/*
 * LIFO_Buffer.h
 *
 *  Created on: 14 Sep 2023
 *      Author: hp
 */

#ifndef LIFO_BUFFER_H_
#define LIFO_BUFFER_H_

#define LIFO_BUFFER_SIZE   5

typedef  unsigned int  u32;

typedef struct {
	u32  length;
	u32  counter;
	u32* base;
	u32* head;
}LIFO_Buffer;

typedef enum {
	LIFO_noError,
	LIFO_full,
	LIFO_notFull,
	LIFO_empty,
	LIFO_notEmpty,
	LIFO_null
}LIFO_Status;

LIFO_Status LIFO_init(LIFO_Buffer* LIFO_Bf);
LIFO_Status pushItem(LIFO_Buffer* LIFO_Bf , u32 item );
LIFO_Status popItem(LIFO_Buffer* LIFO_Bf , u32* item );
LIFO_Status isFull(LIFO_Buffer* LIFO_Bf );



#endif /* LIFO_BUFFER_H_ */
