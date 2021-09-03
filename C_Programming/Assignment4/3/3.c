/*
 * 3.c
 *
 *  Created on: Sep 2, 2021
 *      Author: Yasmine Abdelaziz
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char x[100];
char reversed[100];
int length;

int reverse(int n)
{
	if (n != 0)
	{
		n--;
		reverse(n);
	}
	else if ( n == 0)
	{
		reversed[n] = x[length - 1];
		return 0;
	}
	reversed[n] = x[length - n - 1];
	return 1;
}

int main(void)
{
	int n;
	printf("Enter a sentence : ");
	fflush(stdout);
	gets(x);
	length = strlen(x);
	n = length;
	reverse(n);
	reversed[length] = '\0';
	printf("%s",reversed);
}
