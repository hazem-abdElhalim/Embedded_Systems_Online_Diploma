/*
 ============================================================================
 Name        : Struct_HW_EX2.c
 Author      : Hazem Muhammed Abd El-Halim
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct distance{
	int feet;
	float inch;
}distance_1,distance_2,sum;

int main(void) {

	printf("Enter information of 1st distance: \n");
	printf("Enter feet:");
	fflush(stdin);      fflush(stdout);
	scanf("%d",&distance_1.feet);
	printf("Enter inches:");
	fflush(stdin);      fflush(stdout);
	scanf("%f",&distance_1.inch);

	printf("Enter information of 2nd distance: \n");
	printf("Enter feet:");
	fflush(stdin);      fflush(stdout);
	scanf("%d",&distance_2.feet);
	printf("Enter inches:");
	fflush(stdin);      fflush(stdout);
	scanf("%f",&distance_2.inch);

	sum.feet=distance_1.feet+distance_2.feet;
	sum.inch=distance_1.inch+distance_2.inch;

	if(sum.inch>12)
		sum.inch-=12;


	printf("Sum of distances= %d'-%.1f",sum.feet,sum.inch);


	return EXIT_SUCCESS;
}
