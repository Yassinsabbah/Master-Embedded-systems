/*
 ============================================================================
 Name        : HW2Q6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i, n, sum=0;
	printf("Enter an integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &n);
	for(i=1;i<=n;i++){

		sum+=i;
	}
	printf("sum = %d", sum);
}
