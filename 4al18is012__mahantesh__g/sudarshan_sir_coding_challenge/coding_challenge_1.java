	/*
Activity 1:
Given an array, , of  integers, calculate and print the respective mean, median, and mode on separate lines. If your array contains more than one modal value, choose the numerically smallest one.
Input format:
1.	The first line contains an integer, N, denoting the number of elements in the array.

2.	The second line contains  N space-separated integers describing the array's elements.

Output format:
Print  lines of output in the following order:
1.	Print the mean on a new line, to a scale of  decimal place 
2.	Print the median on a new line, to a scale of  decimal place 
3.	Print the mode on a new line; if more than one such value exists, print the numerically smallest one.
Constraints:
•	N belongs to [10, 2500]
•	X belongs to [0, 10000]

*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

  
    double a[2510],sum=0,temp,mode,count,temp_count,temp_mode;
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%lf",&a[i]);
        sum+=a[i];
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("%g\n",sum/n);
    if(n%2==1){
        printf("%g\n",a[n/2]);
    }
    else{
        printf("%g\n",(a[n/2]+a[n/2-1])/2);
    }
    count = 0;
    temp_count = 1;
    temp_mode = a[0];
    mode = a[0];
    for(i=1;i<n;i++){
        if(a[i]!=temp_mode){
            temp_count=1;
            temp_mode=a[i];
        }
        else{
            temp_count++;
            if(count<temp_count){
                count=temp_count;
                mode=temp_mode;
            }
        }
    }
    printf("%g\n",mode);
    return 0;
}

----------------------------------------------------------------------------------------------------
/*

    2)	Given an array,A, of  N integers and an array, W, representing the respective weights of A's elements, calculate and print the weighted mean of A's elements. Your answer should be rounded to a scale of  decimal place
Input format:
1.	The first line contains an integer, N, denoting the number of elements in arrays A and W.
2.	The second line contains  N space-separated integers describing the respective elements of array A .
3.	The third line contains  N space-separated integers describing the respective elements of W array .
Output format:
•	Print the weighted mean on a new line. Your answer should be rounded to a scale of  1 decimal place (i.e.,  format).

Constraints:
•	N=[5 to 50]
•	ai=[0 to 100]
•	Wi=[0 to. 100]

*/



import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    
        public static void main(String[] args) {
    
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int[] arr = new int[n];
    int[] warr = new int[n];
    for(int i=0; i<n;i++){
        arr[i] = sc.nextInt();
    }
    double wsum = 0.0;
    for(int i=0; i<n;i++){
        warr[i] = sc.nextInt();
        wsum += warr[i];
    }

    double wmean = 0.0;
    for(int i=0; i<n;i++){
        wmean += arr[i] * warr[i];   
    }
    wmean = wmean/wsum;
    System.out.printf("%.1f", wmean);
}

}






-------------------------------------------------------------------------------------------------------------------

	/*

     3)	Given an array,X , of n  integers, calculate the respective first quartile (Q1), second quartile (Q2), and third quartile (Q3). It is guaranteed that ,Q1,Q2,Q3  are integers.

Input Format

•	The first line contains an integer,n , denoting the number of elements in the array.
•	The second line contains  n space-separated integers describing the array's elements.

Output format:
Print  lines of output in the following order:

1.	The first line should be the value of Q1.
2.	The second line should be the value of Q2.
3.	The third line should be the value of Q3 .

Constraint:
1.	n=[5 to 50]
2.	xi=[0 to 100]

*/


import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int[] arr = new int[n];
    for (int i = 0; i < n; i++) {
        arr[i] = sc.nextInt();
    }
    Arrays.sort(arr);

    System.out.println(median(arr, 0, n / 2 - 1));
    System.out.println(median(arr, 0, n - 1));
    if (n % 2 == 0) {
        System.out.println(median(arr, n / 2, n - 1));
    } else {
        System.out.println(median(arr, n / 2 + 1, n - 1));
    }

    sc.close();
}

private static int median(int[] arr, int start, int end) {
    int length = end - start + 1;
    int median = 0;
    if (length % 2 != 0) {
        median = arr[start + length / 2];
    } else {
        median = (arr[start + length / 2 - 1] + arr[start + length / 2]) / 2;
    }
    return median;
}
    
}

-------------------------------------------------------------------------------------------------------------------------------------
*/


     4)	The interquartile range of an array is the difference between its first (Q1) and third (Q3) quartiles. Given an array,X, of  n integers and an array, F, representing the respective frequencies of X's elements, construct a data set,S, where each  occurs at frequency f. Then calculate and print S's interquartile range, rounded to a scale of  
1 decimal place.

Input format:
The first line contains an integer,n, denoting the number of elements in arrays X and F .
The second line contains  n space-separated integers describing the respective elements of array X.
The third line contains  n space-separated integers describing the respective elements of array F.

Output Format:

Print the interquartile range for the expanded data set on a new line. Round your answer to a scale of  1 decimal place.

*/


import java.util.Scanner;
import java.util.Arrays;

public class Solution {

    public static void main(String[] args) {
       
        Scanner scan = new Scanner(System.in);
        int size = scan.nextInt();
        int [] element = new int[size];
        int [] frequency = new int[size];
        for (int i = 0; i < size; i++) {
            element[i] = scan.nextInt();
        }
        
        int numElements = 0;
        for (int i = 0; i < size; i++) {
            frequency[i] = scan.nextInt();
            numElements += frequency[i];
        }
        
        
        int [] data = new int[numElements];
        int dataIndex = 0;
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < frequency[i]; j++) {
                data[dataIndex] = element[i];
                dataIndex++;
            }
        }
        Arrays.sort(data);
        
        
        double q1 = findMedian(data, 0, data.length / 2 - 1);
        double q3 = findMedian(data, (data.length + 1) / 2, data.length - 1);
        
        System.out.println(q3 - q1);
    }
    
    
    private static double findMedian(int [] array, int start, int end) {
        if ((end - start) % 2 == 0) { // odd number of elements
            return (array[(end + start) / 2]);
        } else { // even number of elements
            int value1 = array[(end + start) / 2];
            int value2 = array[(end + start) / 2 + 1];
            return (value1 + value2) / 2.0;
        }
    }
}


--------------------------------------------------------------------------------------------------------

