/*
 ============================================================================
 Name        : main.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "LIFO_Buffer.h"
#include <stdio.h>
#include <stdlib.h>


u32 i,temp=0;
LIFO_Buffer Buffer1;



int main(void) {

	LIFO_init(&Buffer1);

	// enter the length
	Buffer1.length = LIFO_BUFFER_SIZE;

	//push elements to LIFO_Buffer
	for(i=0 ; i < LIFO_BUFFER_SIZE ; i++ ){
		printf("(%d)\n",i);
		pushItem(&Buffer1,i);
	}

	//push elements to LIFO_Buffer
	for(i=0 ; i < LIFO_BUFFER_SIZE ; i++ ){
			popItem(&Buffer1,&temp);
			printf("the element no. %d is %d\n",i+1,temp);
		}

	return EXIT_SUCCESS;
}
