1.STUDENTS MARKS SUM

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.


int marks_summation(int* marks, int number_of_students, char gender)
{
    int sum = 0;
    for (int i = (gender == 'b' ? 0 : 1); i < number_of_students; i = i + 2) 
    sum += *(marks + i);
    return sum;
}
int main()
{
    int number_of_students;
    char gender;
    int sum;
  
    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));
 
    for (int student = 0; student < number_of_students; student++)
    {
        scanf("%d", (marks + student));
    }
    
    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);
 
    return 0;
}

2.SUM AND DIFFERENCES OF TWO NUMBERS

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b;
    float c,d;
    scanf("%d%d%f%f",&a,&b,&c,&d);
    printf("%d %d\n",a+b,a-b);
    printf("%0.1f %0.1f",c+d,c-d);
    
    return 0;
}
