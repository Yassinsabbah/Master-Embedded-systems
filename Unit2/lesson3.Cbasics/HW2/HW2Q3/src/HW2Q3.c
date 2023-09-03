/*
 ============================================================================
 Name        : HW2Q3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x, y, z;
	printf("Enter three numbers: ");
	fflush(stdin); fflush(stdout);
	scanf("%d %d %d", &x, &y, &z);
	if(x>y){
		if(x>z)
			printf("Largest number = %d", x);
		else
			printf("largest number = %d", z);
	}
	else if(y>z)
		printf("Largest number = %d", y);
	else
		printf("Largest number = %d", z);

}
