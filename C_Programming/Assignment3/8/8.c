/*
 * 8.c
 *
 *  Created on: Sep 1, 2021
 *      Author: Yasmine Abdelaziz
 */

#include<stdio.h>
#include <string.h>

int main()
{
	char str[100];
	char str_r[100];
	int i = 0;
	printf("Enter a string:");
	fflush(stdout);
	gets(str);
	int j = strlen(str) - 1;
	while(str[i] != 0)
	{
		str_r[j] = str[i];
		i++;
		j--;
	}
	str_r[i] = 0;
	printf("Reversed string : %s", str_r);
}
