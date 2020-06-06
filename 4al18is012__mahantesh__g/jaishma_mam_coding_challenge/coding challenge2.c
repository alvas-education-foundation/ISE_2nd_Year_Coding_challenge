
 /*		1....  You have to complete the function void update(int *a,int *b), which reads two integers as argument, and sets  a with the sum of them, and  b with the absolute difference of them.
	•	a| = a+ b
	•	b| = |a-b|
	Input Format
	The input will contain two integers, a  and  b, separated by a newline.
	Output Format
	You have to print the updated value of  a  and  b, on two different lines.
	Note: Input/ouput will be automatically handled. You only have to complete the function described in the 'task' section.
	Sample Input
	4
	5

  */


#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function
    int aa = *a;
    *a = *a+*b;
    *b = aa-*b;
    if(*b < 0)*b *= -1;
}
int main() {

    int a, b;
    int *pa = &a, *pb = &b;
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);
    return 0;
}




/*	2.....Task
	In this challenge, you have to input a five digit number and print the sum of digits of the number.
	Input Format
	The input contains a single five digit number, n.
	Constraints
	10000<= n <= 99999
	Output Format
	Print the sum of the digits of the five digit number.
	Sample Input 0

	10564
	Sample Output 0
	16

*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    int digit, temp, sum = 0;
    temp = n;
    while(temp > 0)
    {
        digit = temp % 10;
        sum = sum + digit;
        temp = temp / 10;
    }
    printf("%d\n",sum);
    return 0;
}



   /*	3.....Develop  a c program to find a standard deviation of  given number     */


#include <stdio.h>
#include <math.h>
#define MAXSIZE 10
 
void main()
{
    float x[MAXSIZE];
    int  i, n;
    float average, variance, std_deviation, sum = 0, sum1 = 0;
 
    printf("Enter the value of N \n");
    scanf("%d", &n);
    printf("Enter %d real numbers \n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%f", &x[i]);
    }
    
    for (i = 0; i < n; i++)
    {
        sum = sum + x[i];
    }
    average = sum / (float)n;
   
    for (i = 0; i < n; i++)
    {
        sum1 = sum1 + pow((x[i] - average), 2);
    }
    variance = sum1 / (float)n;
    std_deviation = sqrt(variance);
    printf("Average of all elements = %.2f\n", average);
    printf("variance of all elements = %.2f\n", variance);
    printf("Standard deviation = %.2f\n", std_deviation);
}

