/*1.our task is to take two numbers of int data type, two numbers of float data type as input and output their sum:
*/ 
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int n, m;
    float a, b;
    scanf("%d %d", &n, &m);
    scanf("%f %f", &a, &b);
    int sum_of_ints = n + m;
    float sum_of_floats = a + b;
    int diff_of_ints = n - m;
    float diff_of_floats = a - b;
    printf("%d %d\n", sum_of_ints, diff_of_ints);
    printf("%.1f %.1f", sum_of_floats, diff_of_floats);
    
    return 0;
}

/*
2.bitwise operators in C.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


void calculate_the_maximum(int n, int k) {
    int maxand = 0 ,maxor = 0 , maxxor = 0;
    for(int i = 1 ; i <= n ; ++i){
        for (int j = i + 1; j <= n; ++j){
            if((i&j) > maxand && (i&j) < k)maxand = i&j;
            if((i|j) > maxor && (i|j) < k)maxor = i|j;
            if((i^j) > maxxor && (i^j) < k)maxxor = i^j;
        }
    }
    printf("%d\n%d\n%d",maxand,maxor,maxxor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}


/*3.Array Reversal
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
    /* Write the logic to reverse the array. */ 
    int* left_ptr = arr;
    int* right_ptr;
    int temp;
    for(i = 0; i < num; i++) {
        if(i == num - 1) {
            right_ptr = (arr + i);
        }
    }
    while(left_ptr < right_ptr) {
        temp = *right_ptr;
        *right_ptr = *left_ptr;
        *left_ptr = temp;
        right_ptr--;
        left_ptr++;
    }
      
    for(i = 0; i < num; i++) {
        printf("%d ", *(arr + i));
    }
    free(arr);
    return 0;
}
