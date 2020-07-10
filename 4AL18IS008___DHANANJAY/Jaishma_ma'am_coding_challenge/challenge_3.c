/* Write a program in C to find the maximum number between two numbers using a pointer
Test Data :
Input the first number : 5
Input the second number : 6
Expected Output :
6 is the maximum number.
*/


#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);
     if(num1 > num2)
       {
        printf("%d is maximum", num1);        
       }
     else
       {
        printf("%d is maximum", num2);
       }
    return 0;
}


/* Write a program in C to print all permutations of a given string using pointers
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
   printf("\n\n Pointer : Generate permutations of a given string :\n"); 
   printf("--------------------------------------------------------\n"); 
    int n = strlen(str);
   printf(" The permutations of the string are : \n");
    charPermu(str, 0, n-1);
   printf("\n\n");
    return 0;
}


/* Write a program in C to store n elements in an array and print the elements using pointer
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
   printf("\n\n Pointer : Store and retrieve elements from an array :\n"); 
   printf("------------------------------------------------------------\n");    
   printf(" Input the number of elements to store in the array :");
   scanf("%d",&n);
   
   printf(" Input %d number of elements in the array :\n",n);
   for(i=0;i<n;i++)
     {
	printf(" element - %d : ",i);
	scanf("%d",arr1+i);
     }
   printf(" The elements you entered are : \n");
    for(i=0;i<n;i++)
     {
	printf(" element - %d : %d \n",i,*(arr1+i));
     }
	return 0;
}
