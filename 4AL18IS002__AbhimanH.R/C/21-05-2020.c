1.STUDENTS MARKS SUM

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.


int marks_summation(int* marks, int number_of_students, char gender) {
    int sum = 0;
    for (int i = (gender == 'b' ? 0 : 1); i < number_of_students; i = i + 2) 
        sum += *(marks + i);
    
    return sum;
}
int main() {
    int number_of_students;
    char gender;
    int sum;
  
    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));
 
    for (int student = 0; student < number_of_students; student++) {
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

3.BITWISE OPERATORS

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
//Complete the following function.

void calculate_the_maximum(int n, int k) {
    int res1=0;
    int res2=0;
    int res3=0;
    bool flag = true;
    for(int i=1;i<n;i++){
        for(int j=i+1; j<n+1; j++){
            if(!flag){
                int trash = i&j;
                if(trash<k && res1<trash){
                    res1 = trash;
                }
                trash = i|j;
                
                if(trash<k && res2<trash){
                    res2 = trash;
                }
                trash = i^j;
                if(trash<k && res3<trash){
                    res3 = trash;
                }
            }
            if(flag){
                res1 = i&j;
                if(res1>=k){
                    res1 = 0;
                }
                res2 = i|j;
        
                if(res2>=k){
                    res2 = 0;
                }
                res3 = i^j;
                if(res3>=k){
                    res3 = 0;
                }
                flag = false;
            }
           
        }
    }
    printf("%d\n%d\n%d", res1, res2, res3);
}
int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}

4.POINTERS IN C

#include <stdio.h>

void update(int *a, int *b);

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
void update(int *a, int *b)
{
    int i,j;
    i=*a;
    j=*b;
    *a=i+j;
    if(i>j)*b=i-j;
    else *b=j-i;
    
    
}
