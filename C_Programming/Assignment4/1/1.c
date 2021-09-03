 /*
 * 1.c
 *
 *  Created on: Sep 2, 2021
 *      Author: Yasmine Abdelaziz
 */

#include <stdio.h>
#include <stdlib.h>

void Primenum(int start, int end);
int main(void)
{
	int start, end;
	printf("Enter two numbers(Intervals) : ");
    fflush(stdout);
	scanf("%d%d",&start,&end);
	Primenum(start,end);
}

void Primenum(int start, int end)
{
	int flag = 0;
	printf("Prime numbers between %d and %d are: \n",start,end);
		for(int i = start; i <= end; i++)
		{
			for(int j = 2 ; j < 10 ;j++)
			{
				if(i%j == 0)
				{
					flag = 1;
				}
			}
			if(flag == 0)
			{
				printf("%d\t",i);
			}
			else if(flag == 1)
			{
				flag = 0;
			}
		}
}
