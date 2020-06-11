/* 1. You are transporting some boxes through a tunnel , where each box is a parallelepiped, and is characterized by its length, width and height.The height of the tunnel 41 feet and the width can be           assumed to be infinite. A box can be carried through the tunnel only if its height is strictly less than the tunnel's height. Find the volume of each box that can be successfully transported to the other           end of the tunnel. Note: Boxes cannot be rotated. */

#include <stdio.h>
#include <stdlib.h>
#define MAX_HEIGHT 41
struct box 
{
    int length,width, height;
};
typedef struct box box;
int get_volume(box b) 
{
    return b.length*b.width*b.height;
}
int is_lower_than_max_height(box b) 
{
    if(b.height<MAX_HEIGHT){
        return 1;
 }
    else{
        return 0;
    }
}
int main()
{
 int n;
 scanf("%d", &n);
 box *boxes = malloc(n * sizeof(box));
 for (int i = 0; i < n; i++) {
  scanf("%d%d%d", &boxes[i].length, &boxes[i].width, &boxes[i].height);
 }
 for (int i = 0; i < n; i++) {
  if (is_lower_than_max_height(boxes[i])) {
   printf("%d\n", get_volume(boxes[i]));
  }
 }
 return 0;
}

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

/* 2. Given an array, of size ,n reverse it.
Example: If array,arr=[1,2,3,4,5] , after reversing it, the array should be, arr=[5,4,3,2,1]. */

#include<stdio.h>
int main()
{
    //fill the code;
    int n;
    printf("enter the size of array:\n");
    scanf("%d",&n);
    int arr[n];
    int i;
    
    printf("enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Reversed array is:\n");
    for(i = n-1; i >= 0; i--)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// 3. Given a string,s , consisting of alphabets and digits, find the frequency of each digit in the given string.

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
