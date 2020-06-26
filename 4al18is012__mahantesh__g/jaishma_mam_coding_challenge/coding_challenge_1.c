/*
1....Complete the function solveMeFirst to compute the sum of two integers.
Function prototype:
int solveMeFirst(int a, int b);
where,
a is the first integer input.
b is the second integer input
Return values
sum of the above two integers
Sample Input
a = 2
b = 3
Sample Output
5
	*/



#include<stdio.h>
#include<stdlib.h>
 
int solvemefirst(int a, int b) {
	return a+b;
	}
int main(){

   int a, b, sum;
 
   printf("\nEnter two no: ");
   scanf("%d %d", &a, &b);
 
   sum = solvemefirst(a,b);
 
   printf("Sum : %d", sum);
 
   return(0);
}




/*
2.....You have to write a function int max_of_four(int a, int b, int c, int d) which reads four arguments and returns the greatest of them.
+= : Add and assignment operator. It adds the right operand to the left operand and assigns the result to the left operand.
 
a += b is equivalent to a = a + b;
Input Format
Input will contain four integers -  , one in each line.
Output Format
Print the greatest of the four integers.
Note: I/O will be automatically handled.
Sample Input
3
4
6
5
Sample Output
6
	*/


#include <stdio.h>
#include<stdlib.h>

int max_of_four(int a,int b,int c,int d)
{
    int big;
    if(a>b && a >c && a >d)
        big = a;
    else if(b>a && b>c && b>d)
        big = b;
    else if(c>a && c>b && c>d)
        big = c;
    else if(d>a && d>b && d>c)
        big= d;
    else if(a=b=c=d)
       big = a;
return big;
}

int main() {
    int a, b, c, d;
    printf("enter the for numbers:");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("the greatest num is:%d", ans);
    
    return 0;
}




/*
3......Given a positive integer denoting  n, do the following:
If  1<=n<=9, then print the lowercase English word corresponding to the number (e.g., one for 1 , two for 2 , etc.).
If  n>9, print Greater than 9.
Input Format
The first line contains a single integer denoting  n.
Constraints
1<=n<=109
Output Format
If  1<=n<=9, then print the lowercase English word corresponding to the number (e.g., one for 1, two for 2 , etc.); otherwise, print Greater than 9 instead.
	*/







#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    char* represent[10] = {"Greater than 9", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    printf("enter the num:");
    scanf("%d", &n);

    if(n > 9) {
        printf("%s", represent[0]);
    }
    else {
        printf("%s", represent[n]);
    }

    return 0;
}


