/*1.	You have to complete the function void update(int *a,int *b), which reads two integers as argument, and sets  a with the sum of them, and  b with the absolute difference of them.
•	a| = a+ b
•	b| = |a-b|*/


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

/* 2.In this challenge, you have to input a five digit number and print the sum of digits of the number.
Input Format
The input contains a single five digit number, n.*/

#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
	
    int n=12345,sum=0;
    scanf("%d", &n);
    while(n>0)
    {
        sum=sum+(n%10);
        n=n/10;
    }
    printf("%d",sum);
    
    return 0;
}
//3.	Develop  a c program to find a standard deviation of  given number

#include <math.h>
#include <stdio.h>
float calculateSD(float data[]);
int main() {
    int i;
    float data[10];
    printf("Enter 10 elements: ");
    for (i = 0; i < 10; ++i)
        scanf("%f", &data[i]);
    printf("\nStandard Deviation = %.6f", calculateSD(data));
    return 0;
}

float calculateSD(float data[]) {
    float sum = 0.0, mean, SD = 0.0;
    int i;
    for (i = 0; i < 10; ++i) {
        sum += data[i];
    }
    mean = sum / 10;
    for (i = 0; i < 10; ++i)
        SD += pow(data[i] - mean, 2);
    return sqrt(SD / 10);
}
