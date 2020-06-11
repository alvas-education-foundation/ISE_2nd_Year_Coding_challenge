/* 1...	write c/c++ Program to print following stars sequence:
	*
	**
	***
	****
	*****
*/


#include <stdio.h>
int main()
{
  int row, c, n;

  printf("Enter the number of rows in pyramid of stars to print\n");
  scanf("%d", &n);

  for (row = 1; row <= n; row++)  
  {
    for (c = 1; c <= n-row; c++)  
      printf(" ");

    for (c = 1; c <= 2*row - 1; c++) 
      printf("*");

    printf("\n");
  }

  return 0;
}


 

	/* 2.....write c/c++ Program to show multiplication table (till 10) of a number using functions.   */


#include <stdio.h>
void multiplication(){
    int n, i;
    printf("Enter an integer: ");
    scanf("%d", &n);
    for (i = 1; i <= 10; ++i) {
        printf("%d * %d = %d \n", n, i, n * i);
    }
    return 0;
}
int main()
{
     multiplication();
     return 0;
}


      /*    3.....write c/c++ program for removing the duplicate element in an array.
	Sample Output:
	Enter the number of elements in the array:5 Enter a number: 3
	Enter a number: 3 Enter a number: 4 Enter a number: 6 Enter a number: 4
	Elements
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