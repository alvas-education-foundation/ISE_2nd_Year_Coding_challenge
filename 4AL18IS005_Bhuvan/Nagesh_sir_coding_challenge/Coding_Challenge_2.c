/*1.write c/c++ Program to print following stars sequence:
*
**
***
****
*****

*/





#include <stdio.h>
int main() 
{
   int i, j, rows;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i) {
      for (j = 1; j <= i; ++j) {
         printf("* ");
      }
      printf("\n");
   }
   return 0;
}


############################################################################################################################



/*2.write c/c++ Program to show multiplication table (till 10) of a number using functions.*/





#include<stdio.h>  
  
void tables(int);  
  
int main()  
{  
    int num;  
  
    printf("Enter a positive number\n");  
    scanf("%d", &num);  
  
    printf("\nMultiplication Table for %d is:\n", num);  
  
    tables(num);  
  
    return 0;  
}  
  
void tables(int num)  
{  
    int count;  
  
    for(count = 1; count <= 10; count++)  
    {  
        printf("%d x %d = %d\n", num, count, num*count);  
    }  
}  



#########################################################################################################################################################3


/*3.write c/c++ program for removing the duplicate element in an array.
Sample Output:
Enter the number of elements in the array:5 Enter a number: 3
Enter a number: 3 Enter a number: 4 Enter a number: 6 Enter a number: 4
Elements of array after sorting:
3
3
4
4
6
Elements of array after removing duplicate elements:
 3
4
6
*/







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

