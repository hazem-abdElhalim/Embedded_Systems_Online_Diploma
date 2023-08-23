/*
 ============================================================================
 Name        : Pointers_HW_EX3.c
 Author      : Hazem Muhammed Abd El-Halim
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "string.h"

#define size 20

int main(void) {

	char str[size];
	char *ptr=str;
	int i;

	printf("Input a string: ");
	fflush(stdin);   fflush(stdout);
	gets(str);

	printf("Input a string : %s\n",str);
	printf("Reverse of the string is : ");
	for(i=strlen(str)-1; i>=0 ; i-- ){
		printf("%c",*(ptr+i));
	}



	return EXIT_SUCCESS;
}
