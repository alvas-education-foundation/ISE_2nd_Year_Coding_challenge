// 1. Write a program in C to find the maximum number between two numbers using a pointer


#include<stdio.h>
#include<conio.h>
void main()
{
 int x,y, *large, *xptr,*yptr;
clrscr();
printf("Enter the value of x and y :");
scanf("%d%d",&x,&y);
xptr=&x;
yptr=&y;
if(*xptr>*yptr)
large=xptr;
else
large=yptr;
printf("The largest nmuber is : %d",*large);
getch();
}


// 2. Write a program in C to store n elements in an array and print the elements using pointer

#include <stdio.h>
#define MAX_SIZE 100 
int main()
{
    int arr[MAX_SIZE];
    int N, i;
    int * ptr = arr;    
    printf("Enter size of array: ");
    scanf("%d", &N);
    printf("Enter elements in array:\n");
    for (i = 0; i < N; i++)
    {
        scanf("%d", ptr);
        ptr++;   
    }

    ptr = arr;
    printf("Array elements: ");
    for (i = 0; i < N; i++)
    {
        printf("%d, ", *ptr);
        ptr++;
    }

    return 0;
}



// 3. Write a program in C to print all permutations of a given string using pointers


#include <stdio.h> 
#include <string.h> 
void swap(char *x, char *y) 
{ 
    char temp; 
    temp = *x; 
    *x = *y; 
    *y = temp; 
} 
void permute(char *a, int l, int r) 
{ 
   int i; 
   if (l == r) 
     printf("%s", a); 
   else
   { 
       for (i = l; i <= r; i++) 
       { 
          swap((a+l), (a+i)); 
          permute(a, l+1, r); 
          swap((a+l), (a+i)); 
       } 
   } 
} 

int main() 
{ 
    char str[] = "ABC"; 
    int n = strlen(str); 
    permute(str, 0, n-1); 
    return 0; 
} 
