/*
 ============================================================================
 Name        : Array_HW_EX4.c
 Author      : Hazem Muhammed Abd El-Halim
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int arr[50],numOfElemnts,newElement,pos;

	//Get the no. of elements from user
	printf("Enter the no. of elements: ");
	fflush(stdin);        fflush(stdout);
	scanf("%d",&numOfElemnts);

	// Ensure That the entered no. of elements meets the acceptable range
	if(numOfElemnts>50||numOfElemnts<0)
		printf("Enter a number between 0 and 50");
	else{

		// Get the elements from user
		for(int i=0; i<numOfElemnts;i++){
			scanf("%d",&arr[i]);
		}
	}

	// Get the element to be inserted
	printf("Enter the element to be inserted: ");
	fflush(stdin);        fflush(stdout);
	scanf("%d",&newElement);

	// Get the position of the new element
	printf("Enter its position: ");
	fflush(stdin);        fflush(stdout);
	scanf("%d",&pos);

	// Create a space for the new element
	for(int i=numOfElemnts;i>=pos;i--){
		arr[i]=arr[i-1];
	}
	numOfElemnts++;

	// Add the new element
	arr[pos-1]=newElement;

	// Print the new array includes the new element
	for(int i=0;i<numOfElemnts;i++){
		printf("%d\t",arr[i]);
	}







	return EXIT_SUCCESS;
}
