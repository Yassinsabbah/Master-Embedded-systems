/*
 ============================================================================
 Name        : HW3ArraysQ3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
int x[10][10], transpose[10][10];
int r, c, i, j;
printf("Enter number of rows and coloumns: ");
fflush(stdin); fflush(stdout);
scanf("%d %d", &r, &c);
printf("\nEnter elements of matrix: ");
for(i=0;i<r;i++)
	for(j=0;j<c;j++){
		printf("Enter element x[%d][%d]: ",i+1, j+1);
		fflush(stdin); fflush(stdout);
		scanf("%d", &x[i][j]);
	}
for(i=0;i<r;i++)
	for(j=0;j<c;j++){
		transpose[i][j]=x[j][i];
	}
printf("Transpose of matrix x is: \n");
for(i=0;i<r;i++)
	for(j=0;j<c;j++){
		printf(" %d\t", transpose[i][j]);
		if(j==c-1)
			printf("\n");
	}

}
