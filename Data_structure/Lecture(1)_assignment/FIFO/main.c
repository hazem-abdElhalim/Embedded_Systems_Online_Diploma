/*
 ============================================================================
 Name        : FIFO_Buffer.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "FIFO_Buffer.h"


elementType bufArray[lengthOfBuffer];
FIFO_buffer bl;
elementType i,temp;
int main(void) {

	if(LIFO_init(&bl , bufArray , lengthOfBuffer)==FIFO_noError){
		printf("init is done !!!\n");
	}

	printf("FIFO enqueue\n");
	for(i=0 ; i<7 ; i++){
		if(enqueueItem(&bl , &i )==FIFO_noError)
			printf ("%d is added !!\n",i);
		else
			printf ("%d is failed to be added !!\n",i);
		}


	print(&bl);

	dequeueItem(&bl , &temp );
	printf("dequeue : %x\n",temp);
	dequeueItem(&bl , &temp );
	printf("dequeue : %x\n" ,temp);


	print(&bl);

	return EXIT_SUCCESS;
}
