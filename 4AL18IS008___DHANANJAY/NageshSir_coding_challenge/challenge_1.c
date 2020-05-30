//1. write c/c++ program to find sum of two integers without using ‘+’ operator.


#include<stdio.h>
int sum(int, int);
int main()
{
	int a, b;
	printf("Enter the two Numbers: ");
	scanf("%d %d", &a, &b);
	printf("Addition of two num. is : %d", add(a, b));
	return(0);
}

	int add(int num1, int num2)
{
 	int i;
 	for (i = 0; i < num2; i++)
 	num1++;
 	return num1;
}



/*2. write c/c++ program to find Maximum and minimum of two numbers without using any loop or condition.*/


#include<stdio.h>   
int min(int x, int y) 
{ 
  return y ^ ((x ^ y) & -(x < y)); 
} 
  int max(int x, int y) 
{ 
  return x ^ ((x ^ y) & -(x < y));  
} 
int main() 
{ 
	int x = 25; 
	int y = 6; 
	printf("minimum of %d and %d is\n ", x, y); 
	printf("%d", min(x, y)); 
	printf("maximum of %d and %d is \n ", x, y); 
	printf("%d", max(x, y)); 
} 



//3.write c/c++ program to divide a number by 4 without using / operator


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
