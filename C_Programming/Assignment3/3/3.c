/*
 * 3.c
 *
 *  Created on: Sep 1, 2021
 *      Author: Yasmine Abdelaziz
 */

#include<stdio.h>
#include <string.h>

int main()
{
	int a[100][100] = {0};
	int rows;
	int columns;
	printf("enter number of rows:");
	fflush(stdout);
	scanf("%d", &rows);
	printf("enter number of columns:");
	fflush(stdout);
	scanf("%d", &columns);
	for(int i = 0 ; i < rows ; i++)
	{
		for(int j = 0 ; j < columns ; j++)
		{
			printf("Enter a%d%d:",i,j);
			fflush(stdout);
			scanf("%d", *(a+i)+j);
		}
	}
	printf("Entered Matrix : \n");
	for(int i = 0 ; i < rows ; i++)
	{
		for(int j = 0 ; j < columns ; j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("Transpose Matrix : \n");
	for(int i = 0 ; i < columns ; i++)
	{
		for(int j = 0 ; j < rows ; j++)
		{
			printf("%d\t",a[j][i]);
		}
		printf("\n");
	}
}
