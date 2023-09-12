/*
 ============================================================================
 Name        : HW3breakstatement.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float num, average, sum=0;
	int i, inputs;
	printf("Enter max no. of inputs: \n");
	fflush(stdin); fflush(stdout);
	scanf("%d", &inputs);
	for(i=0;i<inputs;i++){
		printf("Enter a number: \n");
		fflush(stdin); fflush(stdout);
		scanf("%f", &num);
		if(num<0.0)
			break;
		sum=sum+num;
	}
	average=sum/inputs;
	printf("the average is:%f \n", average);
}
