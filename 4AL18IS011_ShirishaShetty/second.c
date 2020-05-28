// 1. In this challenge, you will learn simple usage of functions in C. Functions are a bunch of statements glued together. A function is provided //with zero or more arguments, and it executes the statements on it. Based on the return type, it either returns nothing (void) or something.



#include <stdio.h>

#define MAX(x,y) (((x)>(y))?(x):(y))
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int max_of_four(int a,int b,int c,int d)
{
    int max = MAX(a,b);
    max = MAX(max,c);
    max = MAX(max,d);
    return max;
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
   
}

/* 2.Declare  variables: two of type int and two of type float.
Read  lines of input from stdin (according to the sequence given in the 'Input Format' section below) and initialize your  variables.
Use the  and  operator to perform the following operations:
Print the sum and difference of two int variable on a new line.
Print the sum and difference of two float variable rounded to one decimal place on a new line.*/


#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int a,b;
    float e,f;
    scanf("%d %d",&a, &b);
    printf("%d %d\n",a+b,a-b);
    scanf("%f %f",&e, &f);
    printf("%.1f %.1f",e+f,e-f);
    return 0;
}

/* 3.In this challenge, you have to input a five digit number and print the sum of digits of the number.*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   
    int n;
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


/* 4.You have to complete the function void update(int *a,int *b), which reads two integers as argument, and sets  with the sum of them, and  with the absolute difference of them.*/



#include <stdio.h>

void update(int *a,int *b) {
    *a=*a+*b;
    *b=abs(*a-(2**b));
    // Complete this function    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}









