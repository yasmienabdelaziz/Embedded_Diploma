/*
 * 5.c
 *
 *  Created on: Aug 6, 2021
 *      Author: Yasmine Abdelaziz
 */

#include <stdio.h>

int main()
{
	char x;
	printf("Enter a Character: ");
	fflush(stdout);
	scanf("%c",&x);
	if((x >= 'a' && x <= 'z' ) || (x >= 'a' && x <= 'z' ))
	{
		printf("%c is an alphabet",x);
	}
	else
	{
		printf("%c is not an alphabet",x);
	}
}
