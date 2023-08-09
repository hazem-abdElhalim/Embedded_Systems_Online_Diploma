/*
 ============================================================================
 Name        : String_HW_EX3.c
 Author      : Hazem Muhammed Abd El-Halim
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "string.h"

int main(void) {

	char str[100],temp,i;

	// Get a string from user
	printf("Enter a string: ");
	fflush(stdin);    fflush(stdout);
	gets(str);

	//Reverse string
	for( i=0; i<strlen(str);i++){
		for(int j=strlen(str)-1 ; j>i ;j--){
			temp=str[j-1];
			str[j-1]=str[j];
			str[j]=temp;
		}
	}

	//Print the reversed string
	printf("Reverse string: %s",str);



	return EXIT_SUCCESS;
}
