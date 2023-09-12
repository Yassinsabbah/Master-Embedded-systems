/*
 ============================================================================
 Name        : HW3StringsQ3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char name [50], temp;
	int i, j;
	printf("Enter the string: ");
	fflush(stdin); fflush(stdout);
	gets(name);
	i=0;
	j=strlen(name)-1;
	while(i<j) {
		temp=name[i];
		name[i]=name[j];
		name[j]=temp;
		i++;
		j--;
	}
	printf("The reverse string is : %s", name);
}

