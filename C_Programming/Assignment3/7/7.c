/*
 * 7.c
 *
 *  Created on: Sep 1, 2021
 *      Author: Yasmine Abdelaziz
 */

#include<stdio.h>
#include <string.h>

int main()
{
	int length = 0;
	char str[100];
	int i = 0;
	printf("Enter a string:");
	fflush(stdout);
	gets(str);
	while(str[i] != 0)
	{
		length++;
		i++;
	}
	printf("The length of the string is: %d", length);
}
