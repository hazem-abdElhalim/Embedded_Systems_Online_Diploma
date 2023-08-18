/*
 ============================================================================
 Name        : Struct_HW_EX5.c
 Author      : Hazem Muhammed Abd El-Halim
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define PI   3.1415
#define Area(x)  PI*x*x

int main(void) {

	float radius;
	printf("Enter the radius: ");
	fflush(stdin);    fflush(stdout);
	scanf("%f",&radius);


	printf("Area= %.2f",Area(radius));


	return EXIT_SUCCESS;
}
