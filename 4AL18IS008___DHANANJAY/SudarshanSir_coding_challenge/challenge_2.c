/* Given a square matrix, calculate the absolute difference between the sums of its diagonals. The function must return an integer representing the absolute diagonal difference.
The diagonalDifference takes the following parameter:

arr: an array of integers. 
Input Format

1.The first line contains a single integer,n , the number of rows and columns in the matrix arr. 
2.Each of the next  n lines describes a row,arr[i] , and consists of n space-separated integers arr[i][j].

Output Format

Print the absolute difference between the sums of the matrix's two diagonals as a single integer.
Constraint:
arr[i][j]={-100 to 100}
*/

#include <iostream>
using namespace std;
int main() 
{
  int N, LeftDiagonalSum = 0, RightDiagonal = 0;
  cin >> N;
  int a[N][N];
  for (int i = 0; i < N; i++) 
  {
    for (int j = 0; j < N; j++) 
    {
      cin >> a[i][j];
      if (i == j) 
     {
        LeftDiagonalSum = LeftDiagonalSum + a[i][j];
     }
    }
  }
   for (int i = 0; i < N; i++) 
  {
    for (int j = N - 1 - i; j >= 0;) 
    {
      RightDiagonal = RightDiagonal + a[i][j];
      break;
    }
  }
  cout << abs(LeftDiagonalSum - RightDiagonal) << endl;
  return 0;
}


/* You are given a number of sticks of varying lengths. You will iteratively cut the sticks into smaller sticks, discarding the shortest pieces until there are none left. At each iteration you will determine the length of the shortest stick remaining, cut that length from each of the longer sticks and then discard all the pieces of that shortest length. When all the remaining sticks are the same length, they cannot be shortened so discard them.
Given the lengths of n sticks, print the number of sticks that are left before each iteration until there are none left.
Input format:
The first line contains a single integer n, the size of arr. 
The next line contains  n space- separated integers, each an  arr[i], where each value represents the length of the ith stick.
Output format:
For each operation, print the number of sticks that are present before the operation on separate lines.
Constraints:
n=[1 to 1000]
arr[i]=[1 to 1000]
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++)
    {
       cin >> arr[arr_i];
    }
    int na=n;
    int no=0;
    cout<<n<<endl;
    sort(arr.begin(),arr.end());
    int c_ele=arr[0];
    while(na>1)
    {
     for(int a=0;a<n;a++)
      {
        while(arr[a]==c_ele)
        {
            no++;
            a++;
        }
        na=na-no;
        if(na>=1)
        cout<<na<<endl;
        no=1;
        c_ele=arr[a];
      }
    }
    return 0;
}


/* Given an array of integers, find and print the maximum number of integers you can select from the array such that the absolute difference between any two of the chosen integers is less than or equal to 1.
Input Format
The first line contains a single integer n, the size of the array arr. 
The second line contains n space-separated integers.
Output Format
A single integer denoting the maximum number of integers you can choose from the array such that the absolute difference between any two of the chosen integers is <2.
*/

#include <iostream>
using namespace std;
int n,a[100],b[200];
int main() {
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
        {
            int k= 2*i;
            if(a[i]==a[j]||a[i]==a[j]+1)
                b[k]++;
            if(a[i]==a[j]||a[i]==a[j]-1)
                b[k+1]++;
        }
    }
    for(int i=0;i<200;i++)
        if(b[i]>b[0])
            b[0]=b[i];
    cout<<b[0];
    return 0;
}


/* You are given an array of  integers,a ,a[]= {1,2,3,4,,5,6….k} and a positive integer, k. Find and print the number of  pairs(i,j) where i<j  and  a[i]+ a[j] is divisible by k.

Function Description

Complete the divisibleSumPairs function in the editor below. It should return the integer count of pairs meeting the criteria.

divisibleSumPairs has the following parameter(s):

n: the integer length of array a
a: an array of integers
k: the integer to divide the pair sum by

Input format

The first line contains  2 space-separated integers, n  and k . 
The second line contains  n space-separated integers describing the values of array a.

Output Format

Print the number of  pairs (i,j) where I<j and a[i]+a[j] is evenly divisible by k .

Constraint:
n=[2 to 100]
k=[1 to 100]
a[i]=[ 1 to 100]
*/


#include<iostream>
using namespace std;
int main()
{
   int n;
   int k;
   cin>>n>> k;
   int a[n];
   int m[k];
   for(int i=0; i<k; i++)
       m[i]=0;
    for(int i = 0; i < n; i++)
     {
       cin >> a[i];
        m[a[i]%k]++;
     }
    int sum=0;
    sum+=(m[0]*(m[0]-1))/2;
     for(int i=1; i<=k/2 && i!=k-i; i++)
      {
         sum+=m[i]*m[k-i];
      }
    if(k%2==0)
        sum+=(m[k/2]*(m[k/2]-1))/2;
    cout<<sum;
    return 0;
}

/*Given an array,X of N integers, calculate and print the standard deviation. Your answer should be in decimal form, rounded to a scale of 1 decimal place. An error margin of  +0.1 or -0.1 will be tolerated for the standard deviation.
Input format:
1.	The first line contains an integer,N , denoting the number of elements in the array. 
2.	The second line contains  N space-separated integers describing the respective elements of the array.
Output format:
Print the standard deviation on a new line, rounded to a scale of  1 decimal place.

Constraints:
N=[5 to 100]
x=[0 to 10000], is the index of array X
*/


import math

N = int(input())
X = list(map(int, input().split()))

mean = sum(X)/N
variance = sum([((x - mean) ** 2) for x in X]) / N
print("{0:.1f}".format(math.sqrt(variance)))
