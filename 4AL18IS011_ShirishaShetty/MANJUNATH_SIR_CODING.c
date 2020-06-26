//  1. C code for atm transaction while currencies are 1000,500 and 100

#include<stdio.h>
int totalThousand =1000;
int totalFiveFundred =1000;
int totalOneHundred =1000;
int main(){
    unsigned long withdrawAmount;
    unsigned long totalMoney;
    int thousand=0,fiveHundred=0,oneHundred=0;
    printf("Enter the amount in multiple of 100: ");
    scanf("%lu",&withdrawAmount);
     if(withdrawAmount %100 != 0){
     printf("Invalid amount;");
     return 0;
    }
      totalMoney = totalThousand * 1000 + totalFiveFundred* 500 +  totalOneHundred*100;
       if(withdrawAmount > totalMoney){
         printf("Sorry,Insufficient money");
         return 0;
    }
    thousand = withdrawAmount / 1000;
    if(thousand > totalThousand)
     thousand = totalThousand;
    withdrawAmount = withdrawAmount - thousand * 1000;
     if (withdrawAmount > 0){
         fiveHundred = withdrawAmount / 500;
         if(fiveHundred > totalFiveFundred)
             fiveHundred = totalFiveFundred;
         withdrawAmount = withdrawAmount - fiveHundred * 500;
    }
      if (withdrawAmount > 0)
      oneHundred = withdrawAmount / 100;
     printf("Total 1000 note: %d\n",thousand);
    printf("Total  500 note: %d\n",fiveHundred);
    printf("Total  100 note: %d\n",oneHundred);
     return 0;
}

===========================================================================================================================================================================

// 2. C Program to check string is palindrome or not


#include<stdio.h>
#include <string.h>
 int main()
{
    char s[1000];  
    int i,n,c=0;
    printf("Enter  the string : ");
    gets(s);
    n=strlen(s);
    for(i=0;i<n/2;i++)  
    {
    	if(s[i]==s[n-i-1])
    	c++;
    }
     if(c==i)
       printf("string is palindrome");
    else
        printf("string is not palindrome");
 
   return 0;
}

===========================================================================================================================================================================

// 3. C program to print source code as program output 

#include <stdio.h>
 
int main()
{
    FILE *fp;
    char ch;
 
    fp = fopen(__FILE__,"r");
    do
    {
        ch = getc(fp);
        putchar(ch);
     }
     while (ch != EOF);
     fclose(fp);
     return 0;
}

