/*
 ============================================================================
 Name        : Pointers_HW_EX2.c
 Author      : Hazem Muhammed Abd El-Halim
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char alphabet[26];
	char*ptr=alphabet;
	int i;

	// store the hex. values of characters in array
	for(i=0;i<26;i++){
		alphabet[i]=65+i;
	}


	// print the characters
	for(i=0;i<26;i++){
		printf("%c\t",*(ptr+i));
	}



	return EXIT_SUCCESS;
}
