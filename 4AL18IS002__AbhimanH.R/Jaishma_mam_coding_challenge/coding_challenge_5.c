TASK 1:
Write a c program for sorting array elements in descending order  





#include <stdio.h>

int main()
{
	int Array[50], i, j, temp, Size;
	
	printf("\nPlease Enter the Number of elements in an array  :  ");
	scanf("%d", &Size);
	
	printf("\nPlease Enter %d elements of an Array \n", Size);
	for (i = 0; i < Size; i++)
	{
		scanf("%d", &Array[i]);
    }     
	for (i = 0; i < Size; i++)
	{
		for (j = i + 1; j < Size; j++)
		{
			if(Array[i] < Array[j])
			{
				temp = Array[i];
				Array[i] = Array[j];
				Array[j] = temp;
			}
			
		}
	}
	printf("\n **** Array of Elemenst in Descending Order are : ****\n");
	for (i = 0; i < Size; i++)
	{
		printf("%d\t", Array[i]);
	}
	
	return 0;
}





######################################################################################################################################################




TASK 2:
Write a c program to print the binomial coefficient table




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





#######################################################################################################################################################




Task 3:
Write a c program to draw a histogram 




#include<stdio.h>
#define    N  5                                           
   main()
   {                                                               
       intvalue[N];                                           
       int i, j, n, x;                                            
                                                               
       for (n=0; n < N; ++n)                                      
       {                                                           
          printf("Enter employees in Group - %d : ",n+1);      
          scanf("%d", &x);                                     
          value[n] = x;                                        
          printf("%d\n", value[n]);                                 
       }                                                           
       printf("\n");                                           
                                                               
       printf("          |\n");                                
       for (n = 0 ; n < N ; ++n)                                  
       {                                                           
          for (i = 1 ; i <= 3 ; i++)                              
          {                                                        
              if ( i == 2)                                           
                 printf("Group-%1d   |",n+1);                        
              else                                                 
                 printf("          |");




                            
              for (j = 1 ; j <= value[n]; ++j)                     
                 printf("*"); 
              if (i == 2)                                          
                 printf("(%d)\n", value[n]);                       
              else                                                 
                 printf("\n");                                     
          }                                                        
          printf("          |\n");                                 
       }                                                           
   }                   


