/*
 ============================================================================
 Name        : Array_HW_EX5.c
 Author      : Hazem Muhammed Abd El-Halim
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int arr[50],numOfElements,ElementsSearched,location;

	// Get the number of elements from user
	printf("Enter the no. of elements: ");
	fflush(stdin);        fflush(stdout);
	scanf("%d",&numOfElements);

	// Ensure That the entered no. of elements meets the acceptable range
	if(numOfElements>50|| numOfElements<0)
		printf("Enter a number between 0 and 50");
	else{
		// Get the elements from user
		for(int i=0; i<numOfElements; i++)
			scanf("%d",&arr[i]);
	}

	// Get the element to be searched from user
	printf("Enter the element to be searched: ");
	fflush(stdin);        fflush(stdout);
	scanf("%d",&ElementsSearched);

	// Find and print the location of the element to be searched
	for(int i=0; i<numOfElements; i++){
		if(arr[i]==ElementsSearched){
			printf("Number found at location: %d",i+1);
			break;
		}
	}


	return EXIT_SUCCESS;
}
