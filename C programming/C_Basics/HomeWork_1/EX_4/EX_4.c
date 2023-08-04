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

	float number_1,number_2,Product;
		printf("Enter two integers: ");
		fflush(stdin);    fflush(stdout);
		scanf("%f\n%f",&number_1,&number_2);
		printf("Product: %f",number_1*number_2);


	return EXIT_SUCCESS;
}
