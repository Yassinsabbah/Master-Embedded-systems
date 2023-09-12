/*
 ============================================================================
 Name        : HWArraysQ4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float x [30];
	int i, loc, num, element;
	printf("Enter no of elements: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &num);
	printf("Enter elements of array: ");
for(i=0;i<num;i++){

	fflush(stdin); fflush(stdout);
		 scanf("%f", &x[i]);
	 }
printf("\nEnter element to be inserted: ");
fflush(stdin); fflush(stdout);
	 scanf("%d", &element);
	 	printf("\nEnter location to be inserted: ");
	 	fflush(stdin); fflush(stdout);
	 	scanf("%d", &loc);
	 	for(i=num;i>=loc;i--){
	 		x[i]=x[i-1];
	 	}
	 	num++;
	 	x[loc-1]=element;
	 	for(i=0;i<num;i++){
	 		printf("%f\n", x[i]);
	 	}

}
