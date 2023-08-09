/*
 ============================================================================
 Name        : String_HW_EX2.c
 Author      : Hazem Muhammed Abd El-Halim
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char str[100];
	int counter=0, i=0;

	// Get a string from user
	printf("Enter a string: ");
	fflush(stdin);    fflush(stdout);
	gets(str);

	// Count the length of string
	while(str[i]!=0){
		counter++;
		i++;
	}

	// print the length of string
	printf("Length of string: %d ",counter);


	return EXIT_SUCCESS;
}
