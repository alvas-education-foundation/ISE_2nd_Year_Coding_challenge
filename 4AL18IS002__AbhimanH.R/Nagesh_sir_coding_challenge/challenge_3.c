/*
1.write c/c++ Program to concatenation of strings.
Expected Output:    ANANDKUMARMARKANDE
*/

#include <iostream>
using namespace std;
int main() {
   char str1[100] = "ANANDKUMAR";
   char str2[100] = "MARKANDE";
   int i,j;
   cout<<"String 1: "<<str1<<endl;
   cout<<"String 2: "<<str2<<endl;
   for(i = 0; str1[i] != '\0'; ++i);
      j=0;
   while(str2[j] != '\0') {
      str1[i] = str2[j];
      i++;
      j++;
   }
   str1[i] = '\0';
   cout<<"String after concatenation: "<<str1;
   return 0;
}





/*
2.write c/c++ Program  that would sort a list of names in alphabetical order.
Expected Output:    
enter names of 5 times:
Ananda
murugan 
renuka 
devi
 shri 

Alphabetical order  list:
Ananda 
devi 
murugan 
renuka 
shri


*/


#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
	clrscr();
	char str[5][20], t[20];
	int i, j;
	cout<<"Enter any five string (name) : ";
	for(i=0; i<5; i++)
	{
		cin>>str[i];
	}
	for(i=1; i<5; i++)
	{
		for(j=1; j<5; j++)
		{
			if(strcmp(str[j-1], str[j])>0)
			{
				strcpy(t, str[j-1]);
				strcpy(str[j-1], str[j]);
				strcpy(str[j], t);
			}
		}
	}
	cout<<"Strings (Names) in alphabetical order : \n";
	for(i=0; i<5; i++)
	{
		cout<<str[i]<<"\n";
	}
	getch();
}




/*
3.write c/c++ program for counting of characters, words and lines in a text.
Expected Output:
Admiration is a very short-lived passion. Admiration involves a glorious obliquity of vision.
Always we like those who admire us but we do not like those whom we admire. Fools admire, but men of sense approve

Number of lines=4 Number of words=36 Number of characters=205


#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
   char str[100];
   int i = 0, l = 0, f = 1;
   clrscr();
   puts("Enter any string\n");
   gets(str);
   for(i = 0; str[i] !='\0'; i++)
   {
      l = l + 1;
   }
   printf("The number of characters in the string are %d\n", l);
   for(i = 0; i <= l-1; i++)
   {
      if(str[i] == ' ')
      {
    f = f + 1;
      }
   }
   printf("The number of words in the string are %d", f);
   
}
*/
