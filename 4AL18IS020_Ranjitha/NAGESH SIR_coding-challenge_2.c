/* 1. write c Program to print following stars sequence:

        *
      **
    ***
  ****
*****

*/


#include <stdio.h>  
  int main()  
{  
    int n,m=1;  
    printf("Enter the number of rows");  
    scanf("%d",&n);  
    for(int i=n;i>=1;i--)  
    {  
        for(int j=1;j<=i-1;j++)  
        {  
          printf(" ");  
        }  
        for(int k=1;k<=m;k++)  
        {  
            printf("*");  
        }  
        printf("\n");  
        m++;  
    }  
    return 0;  
} 

//2. write c Program to show multiplication table (till 10) of a number using functions.

#include <stdio.h>
 int main()
{
    int number, i = 1;
 
    printf(" Enter the Number:");
    scanf("%d", &number);
    printf("Multiplication table of %d:\n ", number);
    printf("--------------------------\n");
    while (i <= 10)
    {
        printf(" %d x %d = %d \n ", number, i, number * i);
        i++;
    }
    return 0;
}

// 3. write c program for removing the duplicate element in an array.

#include <stdio.h>
int main()
{
  int n, a[100], b[100], count = 0, c, d;

  printf("Enter number of elements in array\n");
  scanf("%d", &n);

  printf("Enter %d integers\n", n);

  for (c = 0; c < n; c++)
    scanf("%d", &a[c]);

  for (c = 0; c < n; c++)
  {
    for (d = 0; d < count; d++)
    {
      if(a[c] == b[d])
        break;
    }
    if (d == count)
    {
      b[count] = a[c];
      count++;
    }
  }

  printf("Array obtained after removing duplicate elements:\n");
   for (c = 0; c < count; c++)
    printf("%d\n", b[c]);
    return 0;
}
 