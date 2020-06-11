/*1. You have to complete the function void update(int *a,int *b), which reads two integers as argument, and sets  a with the sum of them, and  b with the absolute difference of them.*/

#include <stdio.h>
#include <stdlib.h>

void update(int *a,int *b) {
    int temp = *a;
    *a = *a + *b;
    *b = abs(temp - *b);

}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

// 2. In this challenge, you have to input a five digit number and print the sum of digits of the number.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   
    int n;
    printf("enter the number");
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    int sum = 0;
    do {
        sum += (n % 10);
        n /= 10;
    }
    while(n != 0);
    printf("%d", sum);
    return 0;
}

// 3. Develop  a c program to find a standard deviation of  given number

#include<math.h>                                                               
#include<stdio.h>                                                               
#define MAX 10                                                                  
void main()                                                                     
{                                                                               
 int i, n;                                                                      
 float num[MAX], deviation, sum, sumsqr, variance, stddev,mean;        
 sum = 0;                                                                       
 sumsqr =0;                                                                     
 n = 0;                                                                         
 printf("Enter number of elements:\n");                                         
 scanf("%d", &n);                                                                                                            
 printf("Input %d values \n", n);                                               
 for(i=0; i<n; i++)                                                             
 {                                                                              
  scanf("%f", &num[i]);                                                         
  sum += num[i];                                                                
 }                                                                              
 mean = sum/(float)n;                                                           
                                              
 for(i=0;i<n;i++)                                                               
 {                                                                              
  deviation = num[i] - mean;                                                    
  sumsqr += deviation * deviation;                                              
 }                                                                       
 variance = sumsqr/(float)n;                                                    
 stddev = sqrt(variance);                                                       
 printf("Standard Deviation is %f\n", stddev);                                  
                                                                                
}           
