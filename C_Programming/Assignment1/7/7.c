/*
 * 7.c
 *
 *  Created on: Aug 5, 2021
 *      Author: Yasmine Abdelaziz
 */

#include <stdio.h>

int main()
{
	float a,b;
	printf("Enter value of a: ");
	fflush(stdout);
	scanf("%f",&a);
	printf("Enter value of b: ");
	fflush(stdout);
	scanf("%f",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swapping, value of a = %.2f\n",a);
	printf("After swapping, value of b = %.2f\n",b);
}
