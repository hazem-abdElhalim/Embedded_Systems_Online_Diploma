/*
 ============================================================================
 Name        : Array_HW_EX2.c
 Author      : Hazem Muhammed Abd El-Halim
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n;
	float a[100];
	float average=0;
	float sum=0;

	// get the number of data from user
	printf("Enter the number of data: ");
	fflush(stdin);     fflush(stdout);
	scanf("%d",&n);

	// Ensure the entered number meets the acceptable range
	if(n>100 || n<=0)
		printf("You must enter a number more than zero and less than 100");
	else{
		// Get the data form user
		for(int i=1;i<=n;i++){
			printf("Enter number: ");
			fflush(stdin);     fflush(stdout);
			scanf("%f",&a[i]);
		}

		// Calculate the sum of data
		for(int i=1;i<=n;i++){
			sum+=a[i];
		}

		// Calculate the average of data
		average =sum/n;

		// Print the average of data
		printf("Average= %.2f",average);
	}




	return EXIT_SUCCESS;
}
