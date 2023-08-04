/*
 ============================================================================
 Name        : EX_7.c
 Author      : Hazem Muhammed Abd El-Halim
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int number,factorial,i;
	printf("Enter an integer: ");
	fflush(stdin);      fflush(stdout);
	scanf("%d" , &number);

	if(number<0)
		printf("Error !!! Factorial of negative number doesn't exist");
	else if(number==0)
		printf("Factorial: 1");
	else{

		for(i=1,factorial=1;i<=number;i++){
			factorial*=i;
		}
		printf("Factorial: %d",factorial);

	}




	return EXIT_SUCCESS;
}
