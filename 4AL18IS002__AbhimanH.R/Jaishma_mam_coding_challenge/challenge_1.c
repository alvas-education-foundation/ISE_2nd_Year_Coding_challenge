/* 1.Complete the function solveMeFirst to compute the sum of two integers.
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

#include <stdio.h>
#include <stdlib.h>
int solveMeFirst(int a, int b) 
{
return a+b;
}
int main() 
{
int num1,num2;
int sum; 
scanf("%d %d",&num1,&num2);
sum = solveMeFirst(num1,num2);
printf("%d",sum);
return 0;
}


//********************************************************************************************************************************************************
/*
2.You have to write a function int max_of_four(int a, int b, int c, int d) which reads four arguments and returns the greatest of them.
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
int max_of_four(int a, int b, int c, int d)
{
int ans;
if(a>b && a>c && a>d)
{
ans=a;
printf("%d",ans);
}
else if(b>a && b>c && b>d)
{
ans=b;
printf("%d",ans);
}
else if(d>c && d>a && b<d)
{
ans=d;
printf("%d",ans);
}
else
{
ans=c;
printf("%d",ans);
}
return ans;
}
int main() {
int a, b, c, d;
scanf("%d %d %d %d", &a, &b, &c, &d);
int ans = max_of_four(a, b, c, d);
return 0;
}


//******************************************************************************************************************************************
/*
3.Given a positive integer denoting  n, do the following:
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
#include <math.h>

int main()
{
int n;
cin >> n;
if(n == 1)
{
cout << "one";
}
else if(n == 2) 
{
cout << "two";
}
else if(n == 3) 
{
cout << "three";
}
else if(n == 4) 
{
cout << "four";
}
else if(n == 5) 
{
cout << "five";
}
else if(n == 6)
{
cout << "six";
}
else if(n == 7) 
{
cout << "seven";
}
else if(n == 8) 
{
cout << "eight";
}
else if(n == 9) 
{
cout << "nine";
}
else 
{
cout << "Greater than 9";
}
return 0;
}
//**************************************************************************$$$$$$********************************************************