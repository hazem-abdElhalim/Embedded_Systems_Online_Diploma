/*
 ============================================================================
 Name        : EX_3.c
 Author      : Hazem Muhammed Abd El-Halim
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int number_1,number_2,number_3;
	printf("Enter three numbers: ");
	fflush(stdin);    fflush(stdout);
	scanf("%d\n%d\n%d",&number_1,&number_2,&number_3);

	if(number_1>number_2){
		if(number_1>number_3)
			printf("Largest number: %d\n",number_1);
		else
			printf("Largest number: %d\n",number_3);
	}
	else if(number_2>number_1){
		if(number_2>number_3)
			printf("Largest number: %d\n",number_2);
		else
			printf("Largest number: %d\n",number_3);
	}



	return EXIT_SUCCESS;
}
