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
	printf("Enter a character: ");
	fflush(stdin);        fflush(stdout);
	scanf("%c",&character);
	printf("ASCII value of %c = %d",character,character);

	return EXIT_SUCCESS;
}
