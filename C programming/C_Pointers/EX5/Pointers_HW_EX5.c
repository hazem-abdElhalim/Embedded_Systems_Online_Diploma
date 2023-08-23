/*
 ============================================================================
 Name        : Pointers_HW_EX5.c
 Author      : Hazem Muhammed Abd El-Halim
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct employee {
	char name[20];
	int ID;

};

int main(void) {

	struct employee employee_1 ={"Alex",1002};

	struct employee* arr[]={&employee_1};

	struct employee **ptr=arr;

	printf("Exmployee Name : %s\n",(*ptr[0]).name);
	printf("Exmployee ID : %d",(*ptr[0]).ID);






	return EXIT_SUCCESS;
}
