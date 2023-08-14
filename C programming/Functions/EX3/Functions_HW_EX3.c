/*
 ============================================================================
 Name        : Functions_HW_EX3.c
 Author      : Hazem Muhammed Abd El-Halim
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


void reverseTxt();



int main(void) {

	char txt[10];

	// Get the sentence to be reversed from user
	printf("Enter a sentence: ");
	fflush(stdin);     fflush(stdout);
	reverseTxt();


	return EXIT_SUCCESS;
}

// function to reverse sentence given be user
void reverseTxt(){
	 char sentence;
	 scanf("%c",&sentence);
	 if(sentence!='\n'){
		 reverseTxt();
		 printf("%c",sentence);
	 }

}

