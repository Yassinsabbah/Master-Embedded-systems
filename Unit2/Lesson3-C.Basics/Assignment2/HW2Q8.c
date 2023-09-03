/*
 ============================================================================
 Name        : HW2Q8.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float x, y;
	char operator;
	printf("Enter operator either + or - or * or / : ");
	fflush(stdin); fflush(stdout);
	scanf("%c", &operator);
	printf("\nEnter two operands: ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f", &x, &y);
	switch(operator){
	case '+':
	{

		printf("%f + %f = %f", x, y, x+y);

	}
	break;
	case '-':
	{

		printf("%f - %f = %f", x, y, x-y);
	}
	break;
	case '*':
	{

		printf("%f * %f = %f", x, y, x*y);
	}
	break;
	case '/':
	{

		printf("%f / %f = %f", x, y, x/y);
	}
	break;
	}
}
