 /* 1.... c program to find sum of two integers without using ‘+’ operator  */




#include<stdio.h> 
  
int Add(int x, int y) 
{ 
    // Iterate till there is no carry   
    while (y != 0) 
    { 
        // carry now contains common  
        //set bits of x and y 
        int carry = x & y;   
  
        // Sum of bits of x and y where at  
        //least one of the bits is not set 
        x = x ^ y;  
  
        // Carry is shifted by one so that adding 
        // it to x gives the required sum 
        y = carry << 1; 
    } 
    return x; 
} 
  
int main() 
{ 
    printf("%d", Add(15, 32)); 
    return 0; 
} 






/*2....c program to find Maximum and minimum of two numbers without using any loop or condition.*/


#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	printf("enter the two nums:");
	scanf("%d %d",&a,&b);

	int c=(a+b+abs(a-b))/2;
	printf("max is %d",c);
}







/*3.....c program to divide a number by 4 without using / operator..*/

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