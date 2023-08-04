/*
 ============================================================================
 Name        : EX_4.c
 Author      : Hazem Muhammed Abd El-Halim
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {


	float number;
	printf("Enter a numbers: ");
	fflush(stdin);    fflush(stdout);
	scanf("%f",&number);

	if(number > 0)
		printf("%.2f is positive",number);
	else if(number < 0)
		printf("%.2f is negative",number);
	else
		printf("you entered zero");


	return EXIT_SUCCESS;
}
