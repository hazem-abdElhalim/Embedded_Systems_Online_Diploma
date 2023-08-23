/*
 ============================================================================
 Name        : Pointers_HW_EX4.c
 Author      : Hazem Muhammed Abd El-Halim
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,i,arr[15];
	int *ptr=arr;
	printf("Input the number of elements to store in the array (max 15) : ");
	fflush(stdin);   fflush(stdout);
	scanf("%d",&n);

	printf("Input %d number of elements in the array : \n",n);
	for(i=0;i<n;i++){
		printf("element - %d :",i+1);
		fflush(stdin);   fflush(stdout);
		scanf("%d",&arr[i]);
	}

	printf("\r\n");
	printf("The elements of array in reverse order are : \n");
	for(i=n-1;i>=0;i--){
		printf("element - %d : %d\n",i+1,*(ptr+i));
	}

	return EXIT_SUCCESS;
}
