/* Find the number of ways that a given integer,X, can be expressed as the sum of the n th powers of unique, natural numbers.
Input Format
The first line contains an integer X . 
The second line contains an integer N .
Constraints
X={ 1 to 1000}
N={ 2 to 10}

Output Format
Output a single integer, the number of possible combinations caclulated.
*/


#include<cmath>
#include <iostream>
using namespace std;
int totnum(int X,int N,int num)
{
    if(pow(num,N)<X)
        return totnum(X,N,num+1)+totnum(X-pow(num,N),N,num+1);
    else if(pow(num,N)==X)
        return 1;
    else
        return 0;
}
int main() 
{
    int X,N;
    cin>>X>>N;
    cout<<totnum(X,N,1);
    return 0;
}


/* Brie’s Drawing teacher asks her class to open their books to a page number. Brie can either start turning pages from the front of the book or from the back of the book. She always turns pages one at a time. When she opens the book, page 1 is always on the right side: When she flips page 1, she sees pages 2 and 3. Each page except the last page will always be printed on both sides. The last page may only be printed on the front, given the length of the book. If the book is n pages long, and she wants to turn to page p, what is the minimum number of pages she will turn? She can start at the beginning or the end of the book.
Given n and p, find and print the minimum number of pages Brie must turn in order to arrive at page p.
Input Format
The first line contains an integer n, the number of pages in the book. 
The second line contains an integer, p, the page that Brie's teacher wants her to turn to.
*/



def pageCount(n, p):
    a = (p-n)//2
    b = n//2
    return a if a<b else b

p = int(input())
n = int(input())
print(pageCount(n,p))


/* Given a time in 12 -hour AM/PM format, convert it to Railway's (24-hour) time.
Input Format
A single string s containing a time in -12 hour clock format(HH:mm:ss:am/pm)
Constraints
All input times are valid
Output Format
Convert and print the given time in -24 hour format.
*/

#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() 
{
    int hh, mm, ss ;
    char t12[3];
    scanf("%d:%d:%d%s", &hh, &mm, &ss, t12) ;
        
    if (strcmp(t12,"PM")==0 && hh!=12) hh += 12 ;
    if (strcmp(t12,"AM")==0 && hh==12) hh = 0 ;
        
    printf("%02d:%02d:%02d", hh, mm, ss) ;
    return 0;
}


/* Given an integer, and find the super digit of the integer.
If x has only 1 digit, then its super digit is x.
Otherwise, the super digit of x is equal to the super digit of the sum of the digits of x.
You are given two numbers n  and k. The number p  is created by concatenating the string n*k   times.
The superDigit has the following parameter(s):
n: a string representation of an integer
k: an integer, the times to concatenate n to make p

Input Format:
The first line contains two space separated integers,n  and p.

Output Format:
Return the super digit of p.
*/

int num1(long long int z)
{
    if(z<=9)
    {
        return z;
    }
    long long int sum=0;
    long long int m=0;

    while(z!=0)
    {
        m=z%10;
        sum=sum+m;
        z=z/10;
    }
    return num1(sum);
}
int superDigit(string n, int k) 
{
 long long int sum=0;
 long long int m;
   for(int i=0; i<n.size(); i++)
    {
        sum += n[i] - '0';
    }
    return num1(sum*k);
}
