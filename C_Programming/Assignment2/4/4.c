/*
 * 4.c
 *
 *  Created on: Aug 6, 2021
 *      Author: Yasmine Abdelaziz
 */

#include <stdio.h>

int main()
{
	float x;
	printf("Enter a Number: ");
	fflush(stdout);
	scanf("%f",&x);
	if(x > 0)
	{
		printf("%.2f is positive",x);
	}
	else if(x < 0)
	{
		printf("%.2f is negative",x);
	}
	else if(x == 0)
	{
		printf("%f equals zero",x);
	}
}
