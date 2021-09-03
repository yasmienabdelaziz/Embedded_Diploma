/*
 * 7.c
 *
 *  Created on: Aug 6, 2021
 *      Author: admin
 */



#include <stdio.h>

int main()
{
	int number;
	double factorial = 1;
	printf("Enter an integer : ");
	fflush(stdout);
	scanf("%d",&number);
	if(number > 0)
	{
		for(int i = number; i > 0 ; i-- )
		{
			factorial *= i;
		}
		printf("Factorial = %lf",factorial);
	}
	else
	{
		printf("Error!!! Factorial of negative number doesn't exist.");
	}
}
