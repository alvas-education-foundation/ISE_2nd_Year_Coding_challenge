/*
-----------------------------------------------------------------------------------------------------------------------------
1.C Program – Sorting of a Set of Strings in Ascending alphabetical order
*/

#include<stdio.h>
#include<string.h>
int main(){
   int i,j,count;
   char str[25][25],temp[25];
   puts("How many strings u are going to enter?: ");
   scanf("%d",&count);

   puts("Enter Strings one by one: ");
   for(i=0;i<=count;i++)
      gets(str[i]);
   for(i=0;i<=count;i++)
      for(j=i+1;j<=count;j++){
         if(strcmp(str[i],str[j])>0){
            strcpy(temp,str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],temp);
         }
      }
   printf("Order of Sorted Strings:");
   for(i=0;i<=count;i++)
      puts(str[i]);
   
   return 0;
}


/*-----------------------------------------------------------------.----------------------------------------------------------------------------------------*/

/*
2. Find the 15th term of the series?
0,0,7,6,14,12,21,18, 28
Explanation : In this series the odd term is increment of 7 {0, 7, 14, 21, 28, 35 – – – – – – }
              And even term is a increment of 6 {0, 6, 12, 18, 24, 30 – – – – – – }

*/

#include <stdio.h>

int a1(int x);
int a2(int y);

void main()
{
  int n;
  scanf("%d",&n);
  if(n%2==0)
  a1(n/2);
  else
    a2(n/2+1);
}

int a1(int x)
{
int s=0;
for(int i=0;i<x-1;i++)
{
s=s+6;
}
printf("%d",s);
}

int a2(int x)
{
int s=0;
for(int i=0;i<x-1;i++)
{
s=s+7;
}
printf("%d",s);
}


/*-----------------------------------------------------.----------------------------------------------------------------------------------------------------*/
/*
3. The program will recieve 3 English words inputs from STDIN
1.These three words will be read one at a time, in three separate line
2.The first word should be changed like all vowels should be replaced by %
3.The second word should be changed like all consonants should be replaced by #
4.The third word should be changed like all char should be converted to upper case
5.Then concatenate the three words and print them
  Other than these concatenated word, no other characters/string should or message should be written to STDOUT
For example if you print how are you then output should be h%wa#eYOU.
You can assume that input of each word will not exceed more than 5 chars
*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
int i;
char a[100],b[100],c[100];

    scanf("%s",a);
    scanf("%s",b);
    scanf("%s",c);

    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
            a[i]='*';
    }

    for(i=0;b[i]!='\0';i++)
    {
        if((b[i]>='a'&&b[i]<='z') || (b[i]>='A'&&b[i]<='Z'))
            if(!(b[i]=='a'||b[i]=='e'||b[i]=='i'||b[i]=='o'||b[i]=='u'||b[i]=='A'||b[i]=='E'||b[i]=='I'||b[i]=='O'||b[i]=='U'))
                b[i]='@';
    }

    for(i=0;c[i]!='\0';i++)
    {
        if(c[i]>='a'&&c[i]<='z')
            c[i]=c[i]-32;
    }

    printf("%s%s%s",a,b,c);
    return 0;
}