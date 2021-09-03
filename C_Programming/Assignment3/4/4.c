/*
 * 4.c
 *
 *  Created on: Sep 1, 2021
 *      Author: Yasmine Abdelaziz
 */


#include<stdio.h>
#include <string.h>

int main()
{
	int num[100] = {0};
	int insert;
	int location;
	int n;
	printf("Enter number of the elements");
	fflush(stdout);
	scanf("%d",&n);
	for(int i = 0 ; i < n ; i++)
	{
		scanf("%d", num+i);
	}
	printf("Enter the element to be inserted:");
	fflush(stdout);
	scanf("%d",&insert);
	printf("Enter the Location: ");
	fflush(stdout);
	scanf("%d",&location);
	for(int i = n; i != location - 1; i-- )
	{
		num[i] = num[i-1];
	}
	num[location - 1] = insert;
	printf("The new array: \n");
	for(int i = 0 ; i < n+1 ; i++ )
	{
		printf("%d\t",num[i]);
	}
}
