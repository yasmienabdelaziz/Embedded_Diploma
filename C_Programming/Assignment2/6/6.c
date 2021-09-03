/*
 * 6.c
 *
 *  Created on: Aug 6, 2021
 *      Author: Yasmine Abdelaziz
 */

#include <stdio.h>

int main()
{
	int x;
	int sum = 0;
	printf("Enter an integer:");
	fflush(stdout);
	scanf("%d",&x);
	for(int i = x; i > 0; i--)
	{
		sum += i;
	}
	printf("Sum = %d", sum);
}
