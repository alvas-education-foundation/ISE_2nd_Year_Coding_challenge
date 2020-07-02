/*
   C Program to find ASCII value of a character 
*/

 #include <stdio.h>
    void main()
    {
 
        char string[20];
        int n, count = 0;
 
        printf("Enter the no of characters present in an array \n ");
        scanf("%d", &n);
 
        printf(" Enter the string of %d characters \n" , n);
        scanf("%s", string);
 
        while (count < n)
        {
            printf(" %c = %d\n", string[count], string[count] );
            ++ count ;
        }
 
    }