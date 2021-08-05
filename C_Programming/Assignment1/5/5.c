/*
 * 5.c
 *
 *  Created on: Aug 5, 2021
 *      Author: Yasmine Abdelaziz
 */

#include <stdio.h>

int main()
{
	char x;
	printf("Enter a character: ");
	fflush(stdout);
	scanf("%c",&x);
	printf("ASCII value of %c = %d",x,x);
}
