//Just try to Write a c Program to divide an integer by 4 without using ‘/’ operator.

#include<stdio.h>
 int main()
{
     int num1, num2, a, b=4, count = 0 ;
     printf("\nEnter First Number:\t");
     scanf("%d", &a);
	num1 = a;
	num2 = b;
     while(num1 >= num2)
	 {
		num1 = num1 - num2;
		count++;
	 }
printf("\nDivision of %d and %d:\nQuotient:\t%d\nRemainder:\t%d\n", a, b, count, num1);
return 0;
}