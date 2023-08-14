/*
 ============================================================================
 Name        : Functions_HW_EX1.c
 Author      : Hazem Muhammed Abd El-Halim
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int primeNmubers(int);
void intervals(int,int);


int main(void) {

	int x,y;
	// Get interval from user
	printf("Enter two numbers(intervals): ");
	fflush(stdin);       fflush(stdout);
	scanf("%d %d", &x, &y);

	// Print the prime numbers between range given by user
	printf("Prime numbers between %d and %d are: ",x,y);
	intervals(x ,y);

	return EXIT_SUCCESS;
}

// Function takes number and check it is prime or not
int primeNmubers(int x){
	 if (x <= 1)
	        return 0;

	    for (int i = 2; i <= x/2; i++) {
	        if (x % i == 0)
	            return 0;
	    }

	    return 1;
}

// Function takes the interval by user and pass it to "primeNumbers" function
void intervals(int x , int y){
	int i;
	for(i=x;i<=y;i++){
		if(primeNmubers(i))
			printf("%d\t",i);
	}
}






