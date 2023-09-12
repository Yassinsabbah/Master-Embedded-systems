/*
 ============================================================================
 Name        : HW3ArraysQ2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float x [100];
	int i, n;
	float Average, Sum=0.0;
	printf("Enter the number of elements: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &n);
	while(n>100 || n<=0 )
	{
		printf("Error! Range should be from (1 to 100)");
		printf("Enter your number again: ");
		scanf("%d", &n);
	}

	for(i=0;i<n;i++){
		printf("%d. Enter number: \n", i+1);
		fflush(stdin); fflush(stdout);
		scanf("%f", &x[i]);
		Sum+=x[i];
	}
	Average=Sum/n;
	printf("The average is %f", Average);

}
