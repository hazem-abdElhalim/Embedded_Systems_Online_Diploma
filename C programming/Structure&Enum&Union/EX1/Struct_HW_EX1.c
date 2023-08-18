/*
 ============================================================================
 Name        : Struct_HW_EX1.c
 Author      : Hazem Muhammed Abd El-Halim
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "string.h"

struct data{
	char name[20];
	int roll;
	float mark;
}student;

int main(void) {
	printf("Enter information of students: \n");
	printf("Enter name: ");
	fflush(stdin);        fflush(stdout);
	scanf("%s",&student.name);
	printf("Enter roll number: ");
	fflush(stdin);        fflush(stdout);
	scanf("%d",&student.roll);
	printf("Enter marks: ");
	fflush(stdin);        fflush(stdout);
	scanf("%f",&student.mark);

	printf("Displaying information\n");

	printf("name: %s \n",student.name);
	printf("Roll: %d \n",student.roll);
	printf("Marks: %.2f ",student.mark);



	return EXIT_SUCCESS;
}
