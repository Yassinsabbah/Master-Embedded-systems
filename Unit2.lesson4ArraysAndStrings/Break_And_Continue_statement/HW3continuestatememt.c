/*
 ============================================================================
 Name        : HW3continuestatememt.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i;
	float product=1, num;
	for(i=0;i<4;i++){
		printf("enter n %d : \n", i+1);
		fflush(stdin); fflush(stdout);
		scanf("%f", &num);
		if(num==0)
			continue;
		product=product*num;
	}
	printf("the product of four numbers is: %f", product);
}
