In this challenge, you will learn simple usage of functions in C. Functions are a bunch of statements glued together. A function is provided //with zero or more arguments, and it executes the statements on it. Based on the return type, it either returns nothing (void) or something.



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
