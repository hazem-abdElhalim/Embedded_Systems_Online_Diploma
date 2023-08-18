/*
 ============================================================================
 Name        : Struct_HW_EX3.c
 Author      : Hazem Muhammed Abd El-Halim
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct complexAdd{
	float real;
	float imaginary;
}num_1,sum,num_2;

int main(void) {

	printf("For 1st complex number\n");
	printf("Enter real and imaginary respectively: ");
	fflush(stdin);   fflush(stdout);
	scanf("%f\n%f",&num_1.real,&num_1.imaginary );

	printf("For 2nd complex number\n");
	printf("Enter real and imaginary respectively: ");
	fflush(stdin);   fflush(stdout);
	scanf("%f\n%f",&num_2.real,&num_2.imaginary );

	sum.real=num_1.real+num_2.real;
	sum.imaginary=num_1.imaginary+num_2.imaginary;

	printf("sum=%.1f+%.1fi",sum.real,sum.imaginary);

	return EXIT_SUCCESS;
}
