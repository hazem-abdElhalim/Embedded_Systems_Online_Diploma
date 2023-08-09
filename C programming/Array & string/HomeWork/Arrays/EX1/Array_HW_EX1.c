/*
 ============================================================================
 Name        : Array_HW_EX1.c
 Author      : Hazem Muhammed Abd El-Halim
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float firstMAtrix[2][2], secondMatrix[2][2], sumOfMatrices[2][2];
	printf("Enter the elements of 1st matrix");
	for(int i=0;i<2;i++){
		for(int j=0 ;j<2;j++){
			printf("Enter a%d%d: ",i,j);
			fflush(stdin);     fflush(stdout);
			scanf("%f",&firstMAtrix[i][j]);
		}
		printf("\n");
	}
	printf("Enter the elements of 2nd matrix");
		for(int i=0;i<2;i++){
			for(int j=0 ;j<2;j++){
				printf("Enter b%d%d: ",i,j);
				fflush(stdin);     fflush(stdout);
				scanf("%f",&secondMatrix[i][j]);
			}
			printf("\n");
		}
		printf("Sum Of Matrix: ");
		for(int i=0;i<2;i++){
			for(int j=0 ;j<2;j++){
				sumOfMatrices[i][j]=firstMAtrix[i][j]+secondMatrix[i][j];
			}
			printf("\n");
		}

		for(int i=0;i<2;i++){
			for(int j=0 ;j<2;j++){
				printf("%.1f\t",sumOfMatrices[i][j]);
			}
			printf("\n");
		}





	return EXIT_SUCCESS;
}
