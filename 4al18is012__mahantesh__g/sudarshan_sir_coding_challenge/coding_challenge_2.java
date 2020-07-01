/*


Activity 1:
Find the number of ways that a given integer,X, can be expressed as the sum of the n th powers of unique, natural numbers.
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

int totnum(int X,int N,int num){
    if(pow(num,N)<X)
        return totnum(X,N,num+1)+totnum(X-pow(num,N),N,num+1);
    else if(pow(num,N)==X)
        return 1;
    else
        return 0;
}

int main() {
    int X,N;
    cin>>X>>N;
    cout<<totnum(X,N,1);
    return 0;
}

-------------------------------------------------------------------------------------------------------------

/*

Activity 2:
Given an integer, and find the super digit of the integer.
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

// Complete the superDigit function below.
int superDigit(string n, int k) {
long long int sum=0;
long long int m;
   for(int i=0; i<n.size(); i++){
        sum += n[i] - '0';
    }

    return num1(sum*k);
}


-------------------------------------------------------------------------------------------------------------

Activity 3:
Given a time in 12 -hour AM/PM format, convert it to Railway's (24-hour) time.
Input Format
A single string s containing a time in -12 hour clock format(HH:mm:ss:am/pm)
Constraints
All input times are valid
Output Format
Convert and print the given time in -24 hour format.
#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    int hh, mm, ss ;
    char t12[3];
    scanf("%d:%d:%d%s", &hh, &mm, &ss, t12) ;
        
    if (strcmp(t12,"PM")==0 && hh!=12) hh += 12 ;
    if (strcmp(t12,"AM")==0 && hh==12) hh = 0 ;
        
    printf("%02d:%02d:%02d", hh, mm, ss) ;
    return 0;
}
