/*
 ============================================================================
 Name        : HW3ArraysQ1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float x [2][2];
	float y [2][2];
	float sum [2][2];
	int i, j;
	printf("Enter Elements of 1st matrix\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("Enter x [%d][%d] : \n", i+1, j+1);
			fflush(stdin); fflush(stdout);
			scanf("%f", &x[i][j]);
		}
	}
	printf("Enter Elements of 2nd matrix\n");
		for(i=0;i<2;i++){
			for(j=0;j<2;j++){
				printf("Enter y [%d][%d] : \n", i+1, j+1);
				fflush(stdin); fflush(stdout);
				scanf("%f", &y[i][j]);
			}
		}

		for(i=0;i<2;i++){
					for(j=0;j<2;j++){
						sum[i][j]= x[i][j]+y[i][j];
					}
				}
		printf("sum of two matrices:\n");
		for(i=0;i<2;i++){
					for(j=0;j<2;j++){

						printf("%f \t" , sum[i][j]);


					}
					printf("\n");
				}
}
