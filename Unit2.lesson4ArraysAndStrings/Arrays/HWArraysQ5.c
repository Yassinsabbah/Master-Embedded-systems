/*
 ============================================================================
 Name        : HWArraysQ5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int array[30];
	int i, element, num;
	printf("Enter no of elements: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &num);
	printf("Enter elements of array: ");
	for(i=0;i<num;i++){
		fflush(stdin); fflush(stdout);
		scanf("%d", &array[i]);
	}
	printf("Enter the element to be searched: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &element);
	for(i=0;i<num;i++){
		if(array[i]==element){
			printf("Number found at location = %d", i+1);
			break;
		}
	}
}
