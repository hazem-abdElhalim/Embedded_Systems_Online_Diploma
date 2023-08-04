/*
 ============================================================================
 Name        : EX_8.c
 Author      : Hazem Muhammed Abd El-Halim
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char operator;
	float number_1,number_2;
	printf("Enter operator either + or - or * or / : ");
	fflush(stdin);                fflush(stdout);
	scanf("%c",&operator);
	printf("Enter two operands: ");
	fflush(stdin);                fflush(stdout);
	scanf("%f\n%f",&number_1,&number_2);

	switch(operator){
	case'+':
		printf("%.2f + %.2f = %.2f",number_1,number_2,number_1+number_2);
		break;
	case'-':
		printf("%.2f - %.2f = %.2f",number_1,number_2,number_1-number_2);
		break;
	case'*':
		printf("%.2f * %.2f = %.2f",number_1,number_2,number_1*-number_2);
		break;
	case'/':
		printf("%.2f / %.2f = %.2f",number_1,number_2,number_1/-number_2);
		break;
	default:
		printf("Wrong operator");
	}
	return EXIT_SUCCESS;
}
