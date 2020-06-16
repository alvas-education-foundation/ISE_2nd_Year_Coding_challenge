
1.C code for atm transaction while currencies are 1000,500 
and 100
 Sample output:
Enter the amount in multiple of 100: 7800
Total 1000 note: 7
Total  500 note: 1
Total  100 note: 3




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




####################################################################################################################################################################


2. Program to check string is palindrome or not



#include <stdio.h>
#include <string.h>
 
int main()
{
  	char str[100];
  	int i, len, flag;
  	flag = 0;
 
  	printf("\n Enter any String :  ");
  	gets(str);
  	
  	len = strlen(str);
  	 	   	
  	for(i = 0; i < len; i++)
	{
		if(str[i] != str[len - i - 1])
		{
			flag = 1;
			break;	
		} 
	}
	if(flag == 0)
	{
		printf("\n %s is a Palindrome String", str);
	}
	else
	{
		printf("\n %s is Not a Palindrome String", str);
	}	
	
  	return 0;
}




###############################################################################################################################################################


3. program to print source code as program output 




#include <stdio.h>
 
int main(void)
{
    FILE *fp;
    char c;
 
    fp = fopen(__FILE__, "r");
 
    do
    {
        c=fgetc(fp);
        putchar(c);
    }
    while(c!=EOF);
 
    fclose(fp);
 
    return 0;
}



