//1.Complete the function solveMeFirst to compute the sum of two integers.

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int solveMeFirst(int a, int b) {
  return a+b;
}
int main() {
  int n1,n2,sum;
  scanf("%d %d",&n1,&n2);
   sum = solveMeFirst(n1,n2);
  printf("%d",sum);
  return 0;
}
/*2. You have to write a function int max_of_four(int a, int b, int c, int d) which reads four arguments and           returns the greatest of them.*/

#include <stdio.h>
int max_of_four(int,int,int,int);
int max_of_four(int a,int b,int c,int d)
{
   if(a > b){
        if(a > c){
            if(a>d)return a;
            else return d;
        }
        else {
            if(c > d)return c;
            else return d;
        }
    }
    else{
        if(b > c){
            if(b > d)return b;
            else return d;
        }
        else{
            if(c > d)return c;
            else return d;
        }
    }
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
/*3.Given a positive integer denoting  n, do the following:
•If  1<=n<=9, then print the lowercase English word corresponding to the number (e.g., one for                      1 , two for 2 , etc.).
•If  n>9, print Greater than 9.*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n;
    scanf("%d", &n);
    if(n == 1) {
        printf("one");
    }
    else if(n == 2) {
        printf("two");
    }
    else if(n == 3) {
        printf("three");
    }
    else if(n == 4) {
        printf("four");
    }
    else if(n == 5) {
        printf("five");
    }
    else if(n == 6) {
        printf("six");
    }
    else if(n == 7) {
        printf("seven");
    }
    else if(n == 8) {
        printf("eight");
    }
    else if(n == 9) {
        printf("nine");
    }
    else {
        printf("Greater than 9");
    }
    
    return 0;
}
