/*
 ============================================================================
 Name        : HW2Q7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n, i, fact=1;
	printf("Enter an integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &n);
	if(n>0){
		for(i=1;i<=n;i++){
			fact*=i;
		}
		printf("Factorial = %d", fact);
	}
	else if(n<0)
		printf("Error factorial doesn't exist");
	else
		printf("factorial of 0 is 1");
}
