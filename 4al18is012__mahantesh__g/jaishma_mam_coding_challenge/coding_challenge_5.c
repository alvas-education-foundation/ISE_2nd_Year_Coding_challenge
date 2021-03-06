/*
task: 1)   Write a c program for sorting array elements in descending order  
*/
#include <stdio.h>

void main()
{
    int arr1[100];
    int n, i, j, tmp;
	
	
       printf("\n\nsort elements of array in descending order :\n");
       printf("----------------------------------------------\n");	

    printf("Input the size of array : ");
    scanf("%d", &n);

       printf("Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
            {
	      printf("element - %d : ",i);
	      scanf("%d",&arr1[i]);
	    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr1[i] < arr1[j])
            {
                tmp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = tmp;
            }
        }
    }

     printf("\nElements of array is sorted in descending order:\n");
    for(i=0; i<n; i++)
    {
        printf("%d  ", arr1[i]);
    }
	        printf("\n\n");
}
-------------------------------------------------------------------------------------------------------------------------------------------
/*

task: 2)  Write a c program to print the binomial coefficient table
*/


#include<stdio.h>
#define MAX 10
int main()
	{
	int n, a, bi_nom;
	printf("Mx   ");
	for (n=0; n<=10; ++n)
	printf("%d   ", n);
	printf("\n----------------------------------------------------------\n");
	n=0;
	do
	{
	a = 0, bi_nom = 1;    
	printf("%2d", n);
	while(a<=n)
	{
	if(n==0 || a==0)
	printf("%4d", bi_nom);
	else
	{
	bi_nom=bi_nom* (n-a+1)/a;
	printf("%4d", bi_nom);
	}
	a=a+1;
	}
	printf("\n");
	n=n+1;
	}
	while(n<=MAX);
	printf("----------------------------------------------------------");
}


------------------------------------------------------------------------------------------------------------------
/*
	task: 3)   Write a c program to draw a histogram 

*/

#include <stdio.h>
#define  SIZE   10
 
int main()
{
       
       int n[SIZE] = {19, 3, 15, 7, 11, 9, 13, 5, 17, 1};
       int i, j;
     
       printf("%s%13s%17s\n","Element/index", "Value", "Histogram");
      
       for(i=0; i <= (SIZE-1); i++)
       {
              printf("%9d%15d       ", i, n[i]);
           
              for(j = 1; j<= n[i]; j++)
              
              printf("*");
             
              printf("\n");
       }
       return   0;
}