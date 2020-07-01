//1.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{    
    
    int edd, emm, eyyyy, add, amm, ayyyy;
    int fine =0;
    
    scanf("%d%d%d%d%d%d", &add, &amm, &ayyyy, &edd, &emm, &eyyyy);
    
    if(ayyyy < eyyyy){
        fine = 0;    
    }
    else if(ayyyy > eyyyy){
        fine = 10000;
    }
    else if(ayyyy == eyyyy){
        if(amm < emm){
            fine = 0;
        }
        else if(amm > emm){
            fine = 500 * (amm - emm);
        }
        else if(amm == emm){
            if(add <= edd){
                fine = 0;
            }
            else if(add > edd){
                fine = 15 * (add - edd);
            }
        }
    }
    
    printf("%d", fine);
    
    return 0;
}


//2.(in java)


import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;
public class Solution
{
public static void main(String[] args)
{
Scanner sc = new Scanner(System.in);
int T = sc.nextInt();
for (int i=0; i<T; i++)
{
int N = sc.nextInt();

if (N < 2 || (N > 2 && (N&1) == 0));
System.out.println(“Not prime“);
else
{
boolean isPrime = true;
for (int j = 2; j < (int)Math.sqrt(N); j++)
{
if (N%j == 0)
{
isPrime = false;
break;
}
}
System.out.println(isPrime?“Prime“:“Not prime“);
}
}
}
}



//3.



#include<stdio.h> 
#include<stdlib.h> 
  
struct node  
{ 
    int data; 
    struct node* left; 
    struct node* right; 
}; 
  
int maxDepth(struct node* node)  
{ 
   if (node==NULL)  
       return 0; 
   else 
   { 
      
       int lDepth = maxDepth(node->left); 
       int rDepth = maxDepth(node->right); 
  
     
       if (lDepth > rDepth)  
           return(lDepth+1); 
       else return(rDepth+1); 
   } 
}  
  

struct node* newNode(int data)  
{ 
    struct node* node = (struct node*) 
    malloc(sizeof(struct node)); 
    node->data = data; 
    node->left = NULL; 
    node->right = NULL; 
    
    return(node); 
} 
    
int main() 
{ 
    struct node *root = newNode(1); 
  
    root->left = newNode(2); 
    root->right = newNode(3); 
    root->left->left = newNode(4); 
    root->left->right = newNode(5);  
    
    printf("Height of tree is %d", maxDepth(root)); 
    
    getchar(); 
    return 0; 
} 


//4.

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    scanf("%d",&n);
    int *a = malloc(sizeof(int) * n);
    for(int a_i = 0; a_i < n; a_i++){
       scanf("%d",&a[a_i]);
    }
    int t=0;
    for (int i = 0; i < n; i++)
 {
   
    int numberOfSwaps = 0;
    
    for (int j = 0; j < n - 1; j++)
 {
       
        if (a[j] > a[j + 1]) 
{
            int temp=a[j+1];
            a[j+1]=a[j];
            a[j]=temp;
           t++;
            numberOfSwaps++;
        }
    }
    
    
    if (numberOfSwaps == 0) {
        break;
    }
}
    printf("Array is sorted in %d swaps.\n",t);
    printf("First Element: %d\n",a[0]);
    printf("Last Element: %d\n",a[n-1]);
    return 0;
}