//1.write c/c++ program to find sum of two integers without using ‘+’ operator.

#include<stdio.h> 
  
int Add(int x, int y) 
{  
while (y != 0) 
{
int carry = x & y;   
x = x ^ y; 
y = carry << 1; 
} 
return x; 
} 
int main() 
{ 
printf("%d", Add(A,B)); //A&b are numbers which has to be added
return 0; 
} 

/*--------------------------------------------------------------------------------%---------------------------------------------------------------*/
//2.write c/c++ program to find Maximum and minimum of two numbers without using any loop or condition.

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

/*--------------------------------------------------------------------------------%--------------------------------------------------------------------*/
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


*********************************************************************************************************************************************************************
