/*
 ============================================================================
 Name        : Functions_HW_EX2.c
 Author      : Hazem Muhammed Abd El-Halim
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int Factorial(int);

int main(void) {
	int n;
	// Get an integer number from user
	printf("Enter a positive integer: ");
	fflush(stdin);         fflush(stdout);
	scanf("%d",&n);

	// Print the factorial of integer given by user
	printf("Factorial of %d = %d",n,Factorial(n));


	return EXIT_SUCCESS;
}

// Function to get the factorial of an integer given by user
int Factorial(int x){

	if(x==1)
		return 1;
	else
		return x*Factorial(x-1);


}
