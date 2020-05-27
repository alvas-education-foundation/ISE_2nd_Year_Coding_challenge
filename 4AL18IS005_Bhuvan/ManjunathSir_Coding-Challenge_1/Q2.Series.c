#include <stdio.h>

int fun_1(int x,int y);
int fun_2(int x,int y);

int main()
{
  int n , t;
  printf("\n Enter the term in the series to be found : ");
  scanf("%d",&n);
  t = n;
  if(n%2==0)
  fun_1(n/2,t);
  else
    fun_2(n/2+1,t);
}

int fun_1(int x , int y)
{
int s=0;
for(int i=0;i<x-1;i++)
{
s=s+6;
}
printf("The Term %dth in the Series is %d",y,s);
}

int fun_2(int x,int y)
{
int s=0;
for(int i=0;i<x-1;i++)
{
s=s+7;
}
printf("The Term %dth in the series is %d",y,s);
}
