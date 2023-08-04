/*
 ============================================================================
 Name        : EX_2.c
 Author      : Hazem Muhammed Abd El-Halim
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char alphabet;
	printf("Enter an alphabet: ");
	fflush(stdin);   fflush(stdout);
	scanf("%c",&alphabet);

	switch(alphabet){
	case('a'):
	case('A'):
	case('e'):
	case('E'):
	case('o'):
	case('O'):
	case('i'):
	case('I'):
	case('u'):
	case('U'):
		printf("%c is a vowel ",alphabet);
		break;
	default:
		printf("%c is a consonant",alphabet);
	}

	return EXIT_SUCCESS;
}
