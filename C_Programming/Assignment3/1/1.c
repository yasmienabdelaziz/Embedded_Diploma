/*
 * 1.c
 *
 *  Created on: Sep 1, 2021
 *      Author: Yasmine Abdelaziz
 */


#include<stdio.h>
#include <string.h>

int main()
{
	int a[2][2], b[2][2], sum[2][2];
	printf("Enter the elements of the 1st matrix\n");
	fflush(stdout);
	for(int i = 0; i < 2; i++)
	{
		for(int j = 0; j < 2; j++)
		{
			printf("Enter a%d%d:",i,j);
			fflush(stdout);
			scanf("%d", *(a+i)+j);
		}
	}
	printf("Enter the elements of the 2nd matrix\n");
	fflush(stdout);
	for(int i = 0; i < 2; i++)
	{
		for(int j = 0; j < 2; j++)
		{
			printf("Enter b%d%d:",i,j);
			fflush(stdout);
			scanf("%d", *(b+i)+j);
		}
	}
	for(int i = 0; i < 2; i++)
	{
		for(int j = 0; j < 2; j++)
		{
			sum[i][j] = a[i][j] + b[i][j];
		}
	}
	printf("Sum of matrix\n");
	fflush(stdout);
	for(int i = 0; i < 2; i++)
	{
		for(int j = 0; j < 2; j++)
		{
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}
}
