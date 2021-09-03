/*
 * 2.c
 *
 *  Created on: Sep 2, 2021
 *      Author: Yasmine Abdelaziz
 */

#include <stdio.h>
#include <stdlib.h>

double factorial(int number);
int main(void)
{
	int n;
	printf("Enter a positive integer: ");
	fflush(stdout);
	scanf("%d",&n);
	double fact = factorial(n);
	printf("Factorial of %d is : %lf",n,fact);
}

double factorial(int number)
{
	double fact = 1;
	for(int i = 1; i <= number ; i++)
	{
		fact = i*fact;
	}
	return fact;
}
