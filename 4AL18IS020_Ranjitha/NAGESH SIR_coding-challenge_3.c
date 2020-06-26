// 1.  write c/c++ Program to concatenation of strings.

#include <stdio.h>
void concatenate_string(char*, char*);
int main()
{
    char original[100], add[100];
    printf("Enter source string\n");
    gets(original);
   printf("Enter string to concatenate\n");
    gets(add);
   concatenate_string(original, add);
    printf("String after concatenation: \"%s\"\n", original);
    return 0;
}
void concatenate_string(char *original, char *add)
{
   while(*original)
      original++;
      while(*add)
   {
      *original = *add;
      add++;
      original++;
   }
   *original = '\0';
}



// 2. write c/c++ Program  that would sort a list of names in alphabetical order.

#include<stdio.h>
#include<string.h>
main()
{
int i,j,n;
char str[100][100],s[100];
printf("Enter number of names \n");
scanf("%d",&n);
printf("Enter names in any order\n");
for(i=0;i<n;i++)
{
 scanf("%s",str[i]);
}
for(i=0;i<n;i++)
{
 for(j=i+1;j<n;j++)
 {
   if(strcmp(str[i],str[j])>0)
   {
    strcpy(s,str[i]);
    strcpy(str[i],str[j]);
    strcpy(str[j],s);
   }
  
 }
}
printf("\nThe sorted order of alphabets are:\n");
for(i=0;i<n;i++)
{
 printf("%s\n",str[i]);
}
}


// 3. write c/c++ program for counting of characters, words and lines in a text.


#include<stdio.h>
int main()
{
      char str[200];
      int i, line, word, ch;
      line=word=ch=0;

      printf("Enter a string in multiple lines terminated with ~ :\n");
      scanf("%[^~]", str);

      for(i=0; str[i]!='\0'; i++)
      {
        if(str[i]=='\n')
        {
          line++;
          word++;
        }
        else
        {
          if(str[i]==' '||str[i]=='\t')
          {
            word++;
            ch++;
          }
          else ch++;
        }
      }

      printf("\nCharacter counts = %d\n",ch);
      printf("Word counts = %d\n",word);
      printf("Line counts = %d\n",line);

      return 0;
 }


