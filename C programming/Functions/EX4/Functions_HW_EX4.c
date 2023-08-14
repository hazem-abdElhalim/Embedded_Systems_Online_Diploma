/*
 ============================================================================
 Name        : Functions_HW_EX4.c
 Author      : Hazem Muhammed Abd El-Halim
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================

*/
#include <stdio.h>
#include <stdlib.h>


int powerfun(int,int);

int main(void) {

	int base, power;
	// Get the base number form user
	printf("Enter the base number: ");
	fflush(stdin);       fflush(stdout);
	scanf("%d",&base);

	// Get the exponent number from user
	printf("Enter the power number(positive integer): ");
	fflush(stdin);       fflush(stdout);
	scanf("%d",&power);

	// print the result
	printf("%d^%d=%d",base,power,powerfun(base,power));



	return EXIT_SUCCESS;
}

// Function to calculate the power
int powerfun(int x,int y){

	if(y==0)
		return 1;
	else
		return (x*powerfun(x,y-1));

}

