/*
 * 6.c
 *
 *  Created on: Sep 1, 2021
 *      Author: Yasmine Abdelaziz
 */

#include<stdio.h>
#include <string.h>

int main()
{
	int frequency[256] = {0};
	char str[100];
	char x;
	printf("Enter a string:");
	fflush(stdout);
	gets(str);
	for(int i = 0; i < strlen(str); i++)
	{
		frequency[(str[i])]++;
	}
	printf("Enter a character to find it's frequency:");
	fflush(stdout);
	scanf("%c",&x);
	printf("Frequency of %c = %d",x,frequency[x]);
}
