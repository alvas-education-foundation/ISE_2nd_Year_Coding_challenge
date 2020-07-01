/*  1.  Given an array,X of N integers, calculate and print the standard deviation. Your answer should be in decimal form, rounded to a scale of 1 decimal place. An error margin of  +0.1 or -0.1 will be tolerated for the standard deviation. */

#include <math.h>
#include <stdio.h>
float calculateSD(float data[]);
int main() {
    int i;
    float data[10];
    printf("Enter 10 elements: ");
    for (i = 0; i < 10; ++i)
        scanf("%f", &data[i]);
    printf("\nStandard Deviation = %.1f", calculateSD(data));
    return 0;
}

float calculateSD(float data[]) {
    float sum = 0.0, mean, SD = 0.0;
    int i;
    for (i = 0; i < 10; ++i) {
        sum += data[i];
    }
    mean = sum / 10;
    for (i = 0; i < 10; ++i)
        SD += pow(data[i] - mean, 2);
    return sqrt(SD / 10);
}



// 2. You are given an array of  integers,a ,a[]= {1,2,3,4,,5,6….k} and a positive integer, k. Find and print the number of  pairs(i,j) where i<j  and  a[i]+ a[j] is divisible by k.


#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int divisibleSumPairs(int n, int k, int ar_size, int* ar) {
    int i,j;
    int counter=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i<j && (ar[i]+ar[j])%k==0){
                counter++;
            }
        }
    }
    return counter;
}

int main() {
    int n; 
    int k; 
    scanf("%i %i", &n, &k);
    int *ar = malloc(sizeof(int) * n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       scanf("%i",&ar[ar_i]);
    }
    int result = divisibleSumPairs(n, k, n, ar);
    printf("%d\n", result);
    return 0;
}


// 3. Given a square matrix, calculate the absolute difference between the sums of its diagonals. The function must return an integer representing the absolute diagonal difference.


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int a[100][100],n,c=0,d=0,i,j,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<n;i++)
         c=c+a[i][i];        
    for(i=0;i<n;i++)
         d=d+a[i][n-1-i];
    sum=abs(c-d);
    printf("%d",sum);
    return 0;
}


/* 4. You are given a number of sticks of varying lengths. You will iteratively cut the sticks into smaller sticks, discarding the shortest pieces until there are none left. At each iteration you will determine the length of the shortest stick remaining, cut that length from each of the longer sticks and then discard all the pieces of that shortest length. When all the remaining sticks are the same length, they cannot be shortened so discard them.
Given the lengths of n sticks, print the number of sticks that are left before each iteration until there are none left.*/


#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<math.h>
int main()
{

  int n;
 scanf("%d\n",&n);
 int a[n];
 for(int i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
  }
 while(1)
 {
   int min=a[0];
   int r=0;
   for(int i=0;i<n;i++)
 {
    if(a[i]!=0)
      r++;
 }
  if(r==0)
  break;
 printf("%d\n",r);
 r=0;
 for(int i=1;i<n;i++)
 {
      if((a[i]<min) && (a[i]!=0))
        min=a[i];
      if(min==0)
        min=a[i];
 }
for(int i=0;i<n;i++)
 {
       if(a[i]!=0)
        a[i]-=min;
 }
 }
  return 0;
}



/* 5. Given an array of integers, find and print the maximum number of integers you can select from the array such that the absolute difference between any two of the chosen integers is less than or equal to 1. */


#include <stdio.h>
int main()
{
    int a, t, i, j, count, k;
    count = 0;
     printf("Enter the size of the array: ");
    scanf("%d", &a);
    int b[a], d[101];
     printf("Enter array elements: ");
    for (i = 0; i < a; i++) {
        scanf("%d", &b[i]);
    }

    for (i = 0; i <= 100; i++) {
        for (j = 0; j < a; j++) {
            if (i == b[j]) {
                count = count + 1;
            }
        }
        d[i] = count;
        count = 0;
    }

    t = d[0] + d[1];

    for (i = 0; i < 100; i++) {
        k = d[i] + d[i + 1];
        if (k > t) {
            t = k;
        }
    }
    printf("Number of subset: %d", t);

    return 0;
}





