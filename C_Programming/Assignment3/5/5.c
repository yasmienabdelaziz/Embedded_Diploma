/*
 * 5.c
 *
 *  Created on: Sep 1, 2021
 *      Author: Yasmine Abdelaziz
 */

#include<stdio.h>
#include <string.h>

int main()
{
	int numbers[100] = {0};
	int n;
	int search;
	printf("Enter number of elements:");
	fflush(stdout);
	scanf("%d",&n);
	for(int i = 0; i < n ; i++)
	{
		scanf("%d",numbers+i);
	}
	printf("Enter element to be searched:");
	fflush(stdout);
	scanf("%d",&search);
	for(int i = 0; i < n; i++)
	{
		if(numbers[i] != search)
		{
			continue;
		}
		printf("Number found at the location %d",i+1);
	}
}
