//1.Program to check string is palindrome or not


#include <stdio.h> 
#include <string.h> 
void isPalindrome(char str[]) 
{ 
    int l = 0; 
    int h = strlen(str) - 1; 
  
       while (h > l) 
    { 
        if (str[l++] != str[h--]) 
        { 
            printf("%s is Not Palindrome", str); 
            return; 
        } 
    } 
    printf("%s is palindrome", str); 
} 
  int main() 
{ 
    isPalindrome("abba"); 
    isPalindrome("abbccbba"); 
    isPalindrome("geeks"); 
    return 0; 
}


//2. program to print source code as program output

#include <stdio.h> 
int main(void) 
{ 
    char c;  
    FILE *fp = fopen(__FILE__, "r"); 
   
    do
    { 
        c = fgetc(fp); 
        putchar(c); 
    } 
    while (c != EOF); 
   
    fclose(fp); 
   
    return 0; 
}

  
/*3.C code for atm transaction while currencies are 1000,500 
and 100
 Sample output:
Enter the amount in multiple of 100: 7800
Total 1000 note: 7
Total  500 note: 1
Total  100 note: 3
*/

#include<stdio.h>
int totalThousand =1000;
int totalFiveFundred =1000;
int totalOneHundred =1000;
int main()
{

    unsigned long withdrawAmount;
    unsigned long totalMoney;

    int thousand=0,fiveHundred=0,oneHundred=0;

    printf("Enter the amount in multiple of 100: ");
    scanf("%lu",&withdrawAmount);

    if(withdrawAmount %100 != 0)
      {
         printf("Invalid amount;");
         return 0;
      }

    totalMoney = totalThousand * 1000 + totalFiveFundred* 500 +  totalOneHundred*100;

    if(withdrawAmount > totalMoney)
     {
         printf("Sorry,Insufficient money");
         return 0;
     }

    thousand = withdrawAmount / 1000;
    if(thousand > totalThousand)
         thousand = totalThousand;
    withdrawAmount = withdrawAmount - thousand * 1000;

    if (withdrawAmount > 0)
     {
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
