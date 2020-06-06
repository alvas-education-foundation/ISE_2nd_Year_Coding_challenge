#include<stdio.h>
int solveMeFirst ( int a , int b )
{
		int sum = a + b;
		return sum;
}
int main ()
{
		int a , b , sum;
		printf ("\n Enter 2 numbers :\n");
		scanf("%d%d" , &a , &b);
		sum = solveMeFirst ( a , b );
		printf ("\n Sum of 2 integers : %d" , sum);	
}
