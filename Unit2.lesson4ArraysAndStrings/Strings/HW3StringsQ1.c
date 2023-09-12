/*
 ============================================================================
 Name        : HW3StringsQ1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char string [20];
	int i, count=0;
	char charact;
	printf("Enter a string: ");
	fflush(stdin); fflush(stdout);
	gets(string);
	printf("\nEnter a character to find frequency: ");
	fflush(stdin); fflush(stdout);
	scanf("%c", &charact);
	for(i=0;string[i]!=0;i++){
		if(string[i]==charact){
			count=count+1;
		}

	}
	printf("Frequency of %c = %d", charact, count);
}
