   /*c Program to divide an integer by 4 without using ‘/’ operator */


#include<stdio.h>
#include<string.h>
void main()

{

	int dividend,divisor=4,count=0;
	printf("enter the divident:");
	scanf("%d ",&dividend);

	while(dividend>=divisor)

	{

	dividend=dividend-divisor;
	
	count++;

	}

	printf("the result is:%d",count);

	return 0;

}