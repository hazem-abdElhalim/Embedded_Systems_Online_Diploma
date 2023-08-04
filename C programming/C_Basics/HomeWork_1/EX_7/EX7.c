/*
 ============================================================================
 Name        : EX7.c
 Author      : Hazem Muhammed Abd El-Halim
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a,b;
	printf("Enter value of a: ");
	fflush(stdin);     fflush(stdout);
	scanf("%f",&a);
	printf("Enter value of b: ");
	fflush(stdin);     fflush(stdout);
	scanf("%f",&b);

	a=a+b;
	b=a-b;
	a=a-b;


	printf("After swapping, value of a = %.2f\n",a);
	printf("After swapping, value of b = %.2f",b);


	return EXIT_SUCCESS;
}
