/*
 * 3.c
 *
 *  Created on: Aug 5, 2021
 *      Author: Yasmine Abdelaziz
 */

#include <stdio.h>

int main()
{
	float x , y , z;
	float max;
	printf("Enter three numbers :");
	fflush(stdout);
	scanf("%f%f%f",&x,&y,&z);
	max = x;
	if(max < y)
	{
		max = y;
	}
	if(max < z)
	{
		max = z;
	}
	printf("Largest number is %f",max);
}
