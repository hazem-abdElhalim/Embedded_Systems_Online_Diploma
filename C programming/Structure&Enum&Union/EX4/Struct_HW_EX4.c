/*
 ============================================================================
 Name        : Struct_HW_EX4.c
 Author      : Hazem Muhammed Abd El-Halim
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//Structure contains name and mark for each student
struct data{
	char name[20];
	float mark;
}student[10];


int main(void) {
	int i;
	// Get the name and mark for each student
	printf("Enter information of students: \n");
	for(i=0;i<10;i++){
		printf("For roll number %d: \n",i+1);
		printf("Enter name: ");
		fflush(stdin);        fflush(stdout);
		scanf("%s",&student[i].name);
		printf("Enter marks: ");
		fflush(stdin);        fflush(stdout);
		scanf("%f",&student[i].mark);
	}


	// Print information for each student
	printf("Displaying information\n");
	for(i=0;i<10;i++){
		printf("\nInformation For roll number %d: \n",i+1);
		printf("name: %s \n",student[i].name);
		printf("Marks: %.2f ",student[i].mark);

	}
	return EXIT_SUCCESS;
}
