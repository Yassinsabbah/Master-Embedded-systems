/*
 ============================================================================
 Name        : HW3StringsQ2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char string [10];
	int i, count=0;
	printf("Enter a string: ");
	fflush(stdin); fflush(stdout);
	gets(string);
	for(i=0; string[i]!=0;i++){
		count++;
	}
	printf("Length of string : %d", count);
}
