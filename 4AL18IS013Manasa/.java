1.15th term of series

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
2..C Program – Sorting of a Set of Strings in Ascending alphabetical order
#include <stdio.h>
#include <string.h>

int main ()
{
    char string[100];
    printf("\n\t Enter the string : ");
    scanf(“%s”,string);
    char temp;
    int i, j;
    int n = strlen(string);
    for (i = 0; i < n-1; i++) {
        for (j = i+1; j < n; j++) {
            if (string[i] > string[j]) {
                temp = string[i];
                string[i] = string[j];
                string[j] = temp;
            }
        }
    }

    printf(“The sorted string is : %s”, string);
    return 0;
}
3. The program will recieve 3 English words inputs from STDIN
#include <stdio.h>
#include<string.h>
int main(void) {

 char *str1= malloc(sizeof(char)*256);
 char *str2= malloc(sizeof(char)*256);
 char *str3= malloc(sizeof(char)*256);
 scanf("%s%s%s",str1,str2,str3);

 int p1 = strlen(str1);
 int p2 = strlen(str2);
 int p3 = strlen(str3);
 for(int i=0;i < p1;i++)
 {
  if(str1[i]=='a'||str1[i]=='e'||str1[i]=='i'||str1[i]=='o'||str1[i]=='u')
  {
   str1[i]='$';
  }
 }
 for(int i=0;i < p2;i++)
 {
  if(str2[i]!='a' && str2[i]!='e' && str2[i]!='i' && str2[i]!='o' && str2[i]!='u')
  {
   str2[i]='#';
  }
 }
 for(int i=0;i < p3;i++)
 {
  str3[i]=str3[i]-32;
 }

 printf("%s%s%s",str1,str2,str3);
 return 0;
}
