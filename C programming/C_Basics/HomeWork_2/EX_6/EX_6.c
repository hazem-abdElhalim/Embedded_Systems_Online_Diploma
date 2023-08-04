/*
 ============================================================================
 Name        : EX_6.c
 Author      : Hazem Muhammed Abd El-Halim
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	unsigned int number,i,sum;
	printf("Enter an integer: ");
	fflush(stdin);      fflush(stdout);
	scanf("%d" , &number);

	for(i=1,sum=0;i<=number;i++){
		sum+=i;
	}
	printf("Sum: %d",sum);

	return EXIT_SUCCESS;
}
