/*
 * 8.c
 *
 *  Created on: Aug 11, 2021
 *      Author: Yasmine Abdelaziz
 */

#include <stdio.h>

int main()
{
	char operator;
	float x,y;
	printf("Enter an operator either + or - or * of / : ");
	fflush(stdout);
	scanf("%c",&operator);
	printf("\nEnter two operands : ");
	fflush(stdout);
	scanf("%f%f",&x,&y);
	switch(operator)
	{
	case '+':
		printf("%f %c %f = %f",x,operator,y,x+y);
		break;
	case '-':
		printf("%f %c %f = %f",x,operator,y,x-y);
		break;
	case '*':
		printf("%f %c %f = %f",x,operator,y,x*y);
		break;
	case '/':
		printf("%f %c %f = %f",x,operator,y,x/y);
		break;
	default :
		printf("You entered an unknown operator");
	}
}
