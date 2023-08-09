/*
 ============================================================================
 Name        : Array_HW_EX3.c
 Author      : Hazem Muhammed Abd El-Halim
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int matrix[10][10],transpose[10][10];
	int r,c;

	// Get the number of rows and columns from user
	printf("Enter the number of rows and columns: ");
	fflush(stdin);      fflush(stdout);
	scanf("%d\t",&r);
	scanf("%d",&c);

	// Ensure That the entered no. of rows and columns meets the acceptable range
	if (r>10||r<0||c>10||c<0)
		printf("You have to enter a number between 0 and 10");
	else{
		// Get the element of matrix from user
		printf("Enter elements of matrix: \n");
		for(int i=0; i<r; i++){
			for(int j=0; j<c ; j++){
				printf("Enter element a%d%d: ",i,j);
				fflush(stdin);      fflush(stdout);
				scanf("%d",&matrix[i][j]);
			}
			printf("\n");
		}
		// print the entered matrix
		printf("Entered matrix : \n");
		for(int i=0; i<r; i++){
			for(int j=0; j<c ; j++){
				printf("%d\t",matrix[i][j]);

			}
			printf("\n");
		}
		// Calculate the transpose of entered matrix
		for(int i=0; i<r; i++){
			for(int j=0; j<c ; j++){
				transpose[j][i]=matrix[i][j];
			}
			printf("\n");
		}
		// print the transpose of entered matrix
		printf("Transpose of matrix : \n");
		for(int i=0; i<c; i++){
			for(int j=0; j<r ; j++){
				printf("%d\t",transpose[i][j]);

			}
			printf("\n");
		}
	}

	return EXIT_SUCCESS;
}
