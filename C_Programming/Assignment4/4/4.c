/*
 * 4.c
 *
 *  Created on: Sep 2, 2021
 *      Author: Yasmine Abdelaziz
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int base;

int power(int n)
{
	if(n == 1)
	{
		return base;
	}
	else
	{
		return base * power(--n);
	}

}

int main()
{
	int n;
	int result;
	printf("Enter base number : ");
	fflush(stdout);
	scanf("%d",&base);
	printf("Enter power number (positive number) : ");
	fflush(stdout);
	scanf("%d",&n);
	result = power(n);
	printf(" %d^%d : %d", base,n,result);
}
