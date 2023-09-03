/*
 ============================================================================
 Name        : HW2Q2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char alph;
	printf("Enter an alphabet: ");
	fflush(stdin); fflush(stdout);
	scanf("%c", &alph);
	switch(alph){
	case 'a':
	case 'A':
	{
		printf("%c is a vowel", alph);
	}
	break;
	case 'e':
	case 'E':
	{
		printf("%c is a vowel", alph);
	}
	break;
	case 'i':
	case 'I':
	{
		printf("%c is a vowel", alph);
	}
	break;
	case 'o':
	case 'O':
	{
		printf("%c is a vowel", alph);
	}
	break;
	case 'u':
	case 'U':
	{
		printf("%c is a vowel", alph);
	}
	break;
	default:
		printf("%c is a consonant", alph);
		break;

	}

}
