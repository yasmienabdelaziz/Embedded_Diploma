/*
 * 2.c
 *
 *  Created on: Sep 1, 2021
 *      Author: Yasmine Abdelaziz
 */


#include<stdio.h>
#include <string.h>

int main()
{
	float numbers[100] = {0};
	int n;
	float sum = 0;
	float avg;
	printf("Enter the number of data: ");
	fflush(stdout);
	scanf("%d",&n);
	for(int i = 0; i < n; i++)
	{
		printf("%d. Enter Number:",i+1);
		fflush(stdout);
		scanf("%f", numbers+i);
	}
	for(int i = 0; i < n ; i++)
	{
		sum += numbers[i];
	}
	avg = sum/n;
	printf("Average = %f", avg);
}
