/*
 ============================================================================
 Name        : EX_2.c
 Author      : Hazem Muhammed Abd El-Halim
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int number;
	printf("Enter a integer: ");
	fflush(stdin);   fflush(stdout);
	scanf("%d",&number);
	printf("You entered: %d\n",number);

	return EXIT_SUCCESS;
}
