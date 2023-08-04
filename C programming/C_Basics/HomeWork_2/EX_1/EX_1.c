/*
 ============================================================================
 Name        : EX_1.c
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
	printf("Enter an integar you want to check: ");
	fflush(stdin);      fflush(stdout);
	scanf("%d",&number);

	if(number%2==0)   printf("%d is even",number);
	else              printf("%d is odd",number);

	return EXIT_SUCCESS;
}
