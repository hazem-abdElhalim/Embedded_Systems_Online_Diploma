/*
 ============================================================================
 Name        : EX_5.c
 Author      : Hazem Muhammed Abd El-Halim
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char character;
	printf ("Enter a character: ");
	fflush(stdin);      fflush(stdout);
	scanf("%c",&character);

	if(character >='a' && character <= 'z' || character >='A' && character <= 'Z')
		printf("%c is an alphabet",character);
	else
		printf("%c is not an alphabet",character);


	return EXIT_SUCCESS;
}
