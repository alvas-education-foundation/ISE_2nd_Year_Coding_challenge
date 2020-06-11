/*
	1)....write c/c++ Program to concatenation of strings.
	Expected Output:    ANAND KUMAR MARKANDE
*/


#include <stdio.h>
int main() {
    char s1[100] = "ANAND KUMAR ", s2[] = "MARKHADE";
    int i, j;

    // length of s1 is stored in i
    for (i = 0; s1[i] != '\0'; ++i) {
        printf("i = %d\n", i);
    }

    // concatenating each character of s2 to s1
    for (j = 0; s2[j] != '\0'; ++j, ++i) {
        s1[i] = s2[j];
    }

    // terminating s1 string
    s1[i] = '\0';

    printf("After concatenation: ");
    puts(s1);

    return 0;
}

-------------------------------------------------------------------------------------------------------------------------------
/*
	2)....write c/c++ Program  that would sort a list of names in alphabetical order.
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


   #include <stdio.h>
   #include <string.h>
   void main()
   {
 
        char name[10][8], tname[10][8], temp[8];
        int i, j, n;
 
        printf("Enter the value of n \n");
        scanf("%d", &n);
        printf("Enter %d names n \n", n);
 
        for (i = 0; i < n; i++) 
        {
            scanf("%s", name[i]);
            strcpy(tname[i], name[i]);
        }
 
        for (i = 0; i < n - 1 ; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (strcmp(name[i], name[j]) > 0) 
                {
                    strcpy(temp, name[i]);
                    strcpy(name[i], name[j]);
                    strcpy(name[j], temp);
                }
            }
        }
 
        printf("\n----------------------------------------\n");
        printf("Input NamestSorted names\n");
        printf("------------------------------------------\n");
 
        for (i = 0; i < n; i++) 
        {
            printf("%s\t\t%s\n", tname[i], name[i]);
        }
 
        printf("------------------------------------------\n");
 
    }

----------------------------------------------------------------------------------------------------------------------------------------
/*

	3)....write c/c++ program for counting of characters, words and lines in a text.
Expected Output:
Admiration is a very short-lived passion. Admiration involves a glorious obliquity of vision.
Always we like those who admire us but we do not like those whom we admire. Fools admire, but men of sense approve

Number of lines=4 Number of words=36 Number of characters=205


*/

#include <stdio.h>
#include <string.h>
void main()
{
   char line[81], ctr;
   int i,c,
   end = 0,
   characters = 0,
   words = 0,
   lines = 0;
   printf("KEY IN THE TEXT.\n");
   printf("GIVE ONE SPACE AFTER EACH WORD.\n");
   printf("WHEN COMPLETED, PRESS 'RETURN'.\n\n");
   while( end == 0)
   {
	/* Reading a line of text */
	c = 0;
	while((ctr=getchar()) != '\n')
	line[c++] = ctr;
	line[c] = '\0';
	/* counting the words in a line */
	if(line[0] == '\0')
	break ;
	else
	{
	words++;
	for(i=0; line[i] != '\0';i++)
	if(line[i] == ' ' || line[i] == '\t')
	words++;
	}
	/* counting lines and characters */
	lines = lines +1;
	characters = characters + strlen(line);
	}
	printf ("\n");
	printf("Number of lines = %d\n", lines);
	printf("Number of words = %d\n", words);
	printf("Number of characters = %d\n", characters);
   }

}
