/*
 ============================================================================
 Name        : EX_3.c
 Author      : Hazem Muhammed Abd El-Halim
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int number_1,number_2,sum;
	printf("Enter two integers: ");
	fflush(stdin);    fflush(stdout);
	scanf("%d\n%d",&number_1,&number_2);
	printf("Sum: %d",number_1+number_2);


	return EXIT_SUCCESS;
}
