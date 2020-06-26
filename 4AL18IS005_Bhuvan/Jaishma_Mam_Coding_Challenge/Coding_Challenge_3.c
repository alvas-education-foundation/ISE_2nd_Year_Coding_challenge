#1:
You are transporting some boxes through a tunnel , where each box is a parallelepiped, and is characterized by its length, width and height.
The height of the tunnel 41 feet and the width can be assumed to be infinite. A box can be carried through the tunnel only if its height is strictly less than the tunnel's height. Find the volume of each box that can be successfully transported to the other end of the tunnel. Note: Boxes cannot be rotated.
Input Format
The first line contains a single integer n , denoting the number of boxes.
 lines follow with three integers on each separated by single spaces length i ,width i  and height i which are length, width and height in feet of the i -th box.
Constraints
•	1<=n<=100
•	1<=length i, width i, height i <=100
Output Format
For every box from the input which has a height lesser than  41 feet, print its volume in a separate line.
Sample Input 0
4
5 5 5
1 2 40
10 5 41
7 2 42
Sample Output 0
125
80
Explanation 0
The first box is really low, only 5 feet tall, so it can pass through the tunnel and its volume is .5x5x5=125
The second box is sufficiently low, its volume is .1x2x40=80
The third box is exactly 41  feet tall, so it cannot pass. The same can be said about the fourth box.




#include <stdio.h>
#include <stdlib.h>
#define MAX_HEIGHT 41
typedef struct {
    int height;
    int length;
    int width;
}box;

int get_volume(box b) {
    return b.length * b.height * b.width;
}

int is_lower_than_max_height(box b) {
    return b.height < 41 ? 1 : 0;
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



##################################################################################################################################################



#2:
Given an array, of size ,n reverse it.
Example: If array,arr=[1,2,3,4,5] , after reversing it, the array should be, arr=[5,4,3,2,1].
Input Format
The first line contains an integer,n , denoting the size of the array. The next line contains n space-separated integers denoting the elements of the array.
Constraints
•	1<=n<=100
•	1<=arr i<=100

, where  arr i is the ith  element of the array.
Output Format
The output is handled by the code given in the editor, which would print the array.
Sample Input 0
6
16 13 7 2 1 12 
Sample Output 0
12 1 2 7 13 16




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
    int temp;
    for (i = 0; i < num / 2; i++) {
        temp = (int) *(arr + num - i - 1);
        *(arr + num - i - 1) = *(arr + i);
        *(arr + i) = temp;
    }    

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}




###############################################################################################################################################################


#3:
Given a string,s , consisting of alphabets and digits, find the frequency of each digit in the given string.
Input Format
The first line contains a string, num which is the given number.
Constraints
1<=len(num)<=1000
All the elements of num are made of english alphabets and digits.
Output Format
Print ten space-separated integers in a single line denoting the frequency of each digit from 0 to 9 .
Sample Input 0
a11472o5t6
Sample Output 0
0 2 1 0 1 1 1 1 0 0




#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char s[1000];
int cnt=0,i,j;

scanf("%s", s);
for(j=0;j<10;j++)
{
    for (i=0;s[i]!='\0';i++)
    {
        if(s[i]-48==j)
        cnt++;
    }
    printf("%d " ,cnt);
    cnt=0;


}

return 0;
}






