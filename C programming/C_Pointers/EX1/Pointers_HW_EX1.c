/*
 ============================================================================
 Name        : Pointers_HW_EX1.c
 Author      : Hazem Muhammed Abd El-Halim
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int m=29;
	int*ab=&m;

	printf("Address of m : %x\n",&m);
	printf("Value of m : %d\n",m);

	printf("\r\n");

	printf("Now ab is assigned with the address of m.\n");
	printf("Address of pointer ab : %x\n",ab);
	printf("Value of pointer ab : %d\n",*ab);

	printf("\r\n");

	m=34;
	printf("The value of m assigned to %d now.\n",m);
	printf("Address of pointer ab : %x\n",ab);
	printf("Value of pointer ab : %d\n",*ab);

	printf("\r\n");

	*ab=7;
	printf("The pointer variable ab is assigned with the value %d now.\n",*ab);
	printf("Address of m : %x\n",&m);
	printf("Value of m : %d\n",m);



	return EXIT_SUCCESS;
}
