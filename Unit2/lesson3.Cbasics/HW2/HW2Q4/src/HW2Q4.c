/*
 ============================================================================
 Name        : HW2Q4.c
 Author      : Yassin Sabbah
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x;
	printf("Enter a number: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &x);
	if(x>0){
		printf("%d is positive.", x);

	}
	else if(x<0){
		printf("%d is negative", x);
	}
	else
		printf("You entered zero");
}
