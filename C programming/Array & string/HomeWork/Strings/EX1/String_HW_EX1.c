/*
 ============================================================================
 Name        : String_HW_EX1.c
 Author      : Hazem Muhammed Abd El-Halim
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int main(void) {

	char str[100],character;
	int counter=0;

	// Get string from user
	printf("Enter a string: ");
	fflush(stdin);      fflush(stdout);
	gets(str);

	// Get character from user
	printf("Enter a character to find frequency: ");
	fflush(stdin);      fflush(stdout);
	scanf("%c",&character);


	// Count how times character is repeated in string
	for(int i=0; str[i]!=0 ; i++){
		if(str[i] == character){
			counter++;
		}
	}

	// print how times character is repeated in string
	printf("Frequency of %c = %d",character,counter);



	return EXIT_SUCCESS;
}
