/*
Task 1:
program in C to find the maximum number between two numbers using a pointer
Test Data :
Input the first number : 5
Input the second number : 6
Expected Output :
6 is the maximum number.

*/


#include <stdio.h>
#include <stdlib.h>
void main()
{
 int fno,sno,*ptr1=&fno,*ptr2=&sno;
 
    
 
   printf(" Input the first number : ");
   scanf("%d", ptr1);
   printf(" Input the second  number : ");
   scanf("%d", ptr2); 


 if(*ptr1>*ptr2)
 {
  printf("\n\n %d is the maximum number.\n\n",*ptr1);
 }
 else
 {
  printf("\n\n %d is the maximum number.\n\n",*ptr2);
 }

}


--------------------------------------------------------------------------------------------------------------------------------------------
/*
Task: 2
Write a program in C to store n elements in an array and print the elements using pointer
Expected Output :
 The elements you entered are :                                                                               
 element - 0 : 5                                                                                              
 element - 1 : 7                                                                                              
 element - 2 : 2                                                                                              
 element - 3 : 9                                                                                              
 element - 4 : 8   

*/


#include <stdio.h>
int main()
{
   int arr1[25], i,n;
 
    
   printf(" enter the number of elements  into the array :");
   scanf("%d/n",&n);
   
   printf("  enter the elements into the array :\n",n);
   for(i=0;i<n;i++)
      {
	  
	  scanf("%d",arr1+i);
	  }
   printf(" The elements you entered are : \n");
   for(i=0;i<n;i++)
      {
	  printf(" element - %d : %d \n",i,*(arr1+i));
	  }
	   return 0;
}

-------------------------------------------------------------------------------------------------------------
/*
Task: 3
Write a program in C to print all permutations of a given string using pointers
Expected Output :
The permutations of the string are :                                                                         
abcd  abdc  acbd  acdb  adcb  adbc  bacd  badc  bcad  bcda  bdca  bdac  cbad  cbda  cabd  cadb  cdab  cdba  db
ca  dbac  dcba  dcab  dacb  dabc

*/

#include <stdio.h>
#include <string.h>

void changePosition(char *ch1, char *ch2)
{
    char tmp;
    tmp = *ch1;
    *ch1 = *ch2;
    *ch2 = tmp;
}
void charPermu(char *cht, int stno, int endno)
{
   int i;
   if (stno == endno)
     printf("%s  ", cht);
   else
   {
       for (i = stno; i <= endno; i++)
       {
          changePosition((cht+stno), (cht+i));
          charPermu(cht, stno+1, endno);
          changePosition((cht+stno), (cht+i)); 
       }
   }
}
 
int main()
{
    char str[] = "abcd";
    int n = strlen(str);
    printf(" The permutations of the string are : \n");
    charPermu(str, 0, n-1);
     printf("\n\n");
    return 0;
}