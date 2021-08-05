/*
 * 6.c
 *
 *  Created on: Aug 5, 2021
 *      Author: Yasmine Abdelaziz
 */

#include <stdio.h>

int main()
{
	float a,b,temp;
	printf("Enter value of a: ");
	fflush(stdout);
	scanf("%f",&a);
	printf("Enter value of b: ");
	fflush(stdout);
	scanf("%f",&b);
	temp = a;
	a = b;
	b = temp;
	printf("After swapping, value of a = %.2f\n",a);
	printf("After swapping, value of b = %.2f\n",b);
}
