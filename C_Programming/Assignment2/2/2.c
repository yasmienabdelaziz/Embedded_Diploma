/*
 * 2.c
 *
 *  Created on: Aug 5, 2021
 *      Author: Yasmine Abdelaziz
 */

#include <stdio.h>

int main()
{
	char x;
	printf("Enter an alphabet: ");
	fflush(stdout);
	scanf("%c",&x);
	if(x=='a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' )
	{
		printf("%c is a vowel.",x);
	}
	else
	{
		printf("%c is a consonant.",x);
	}
}
