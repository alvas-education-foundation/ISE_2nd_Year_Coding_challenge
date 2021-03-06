/*1.You have to complete the function void update(int *a,int *b), which reads two integers as argument, and sets  a with the sum of them, and  b with the absolute difference of them.
a| = a+ b
b| = |a-b|
Input Format
The input will contain two integers, a  and  b, separated by a newline.
Output Format
You have to print the updated value of  a  and  b, on two different lines.
Note: Input/ouput will be automatically handled. You only have to complete the function described in the 'task' section.
Sample Input
4
5

*/




#include <stdio.h>

void update(int *a,int *b) 
{    
int *c, *d; int z, y;
*c=*a + *b;
*d= *a - *b;
z=*b;
y=*a;  
if(z>y)
z=z-y;
else
z=y-z;
d=&z;
*a=*c;
*b=*d;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}


#################################################################################################################################



/*2.In this challenge, you have to input a five digit number and print the sum of digits of the number.
Input Format
The input contains a single five digit number, n.
Constraints
10000<= n <= 99999
Output Format
Print the sum of the digits of the five digit number.
Sample Input 0
 
10564
Sample Output 0
16
*/



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	
    int n;
    int y[5];
    int sum=0;
    
    scanf("%d", &n);
 y[0]=n;
   for(int i=0;i<5;i++)
{     
    int t =y[i]%10;
     sum+=t;
     y[i+1]=y[i]/10;
    
   }
   printf("%d",sum);
eturn 0;
}


##############################################################################################################################


//3.Develop  a c program to find a standard deviation of  given number




#include <stdio.h>
#include <math.h>

void main()
{
  float Price[50];
  int  i, Number;
  float Mean, Variance, SD, Sum=0, Differ, Varsum=0;

  printf("\nPlease Enter the N Value\n");
  scanf("%d", &Number);

  printf("\nPlease Enter %d real numbers\n",Number);
  for(i=0; i<Number; i++)
   {
     scanf("%f", &Price[i]);
   }

  for(i=0; i<Number; i++)
   {
     Sum = Sum + Price[i];
   }
  
  Mean = Sum /(float)Number;

  for(i=0; i<Number; i++)
   {
     Differ = Price[i] - Mean;
     Varsum = Varsum + pow(Differ,2);
   }
  
  Variance = Varsum / (float)Number;
  SD = sqrt(Variance);
  
  printf("Mean               = %.2f\n", Mean);
  printf("Varience           = %.2f\n", Variance);
  printf("Standard deviation = %.2f\n", SD);
}

