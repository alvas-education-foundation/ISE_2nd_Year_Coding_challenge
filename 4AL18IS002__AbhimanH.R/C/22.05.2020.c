/*1.Given a sentence, , print each word of the sentence in a new line.

Input Format

The first and only line contains a sentence, .
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    int len = strlen(s);
    for(int i = 0; i < len; i++) {
        if(s[i] == ' ') {
            printf("\n");
        }
        else {
            printf("%c", s[i]);
        }
    }
    free(s);
    return 0;
}

/*2.In this challenge, you have to input a five digit number and print the sum of digits of the number.

*/
   #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   
    int n;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    int sum = 0;
    do {
        sum += (n % 10);
        n /= 10;
    }
    while(n != 0);
    printf("%d", sum);
    return 0;
}



/* 3.Given a string, , consisting of alphabets and digits, find the frequency of each digit in the given string.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  
    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%s", s);
    s = realloc(s, strlen(s) + 1);
    int len = strlen(s), i;
    int arr[10];
    for(i = 0; i < 10; i++)
        arr[i] = 0;
    for(i = 0; i < len; i++) {
        if(s[i] >= '0' && s[i] <= '9') {
            arr[(int)(s[i] - '0')]++;
        }
    }
    for(i = 0; i < 10; i++)
        printf("%d ", arr[i]);
    printf("\n");
    free(s);
    return 0;
}


/* 
4.You have to complete the function void update(int *a,int *b), which reads two integers as argument, and sets  with the sum of them, and b with the absolute difference of them.
*/
#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function
    
    int sum = *a + *b;
    int diff = *a - *b;
    
    if (diff < 0) {
        diff = -diff;
    }
    
    *a = sum;
    *b = diff;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}



