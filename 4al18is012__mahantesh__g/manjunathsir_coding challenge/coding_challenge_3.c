/*
 task:1.....

Program to replace all 0's with 1 in a given integer is discussed here. Given an integer as an input, all the 0's in the number has to be replaced with 1.
For example, consider the following number
Input: 102405
Output: 112415
Input: 56004
Output: 56114


*/


public class ReplaceDigits { 
    static int replace0with5(int number) 
    { 
        return number += calculateAddedValue(number); 
    } 
  
    
    private static int calculateAddedValue(int number) 
    { 
  
        
        int result = 0; 
  
        
        int decimalPlace = 1; 
  
        if (number == 0) { 
            result += (1 * decimalPlace); 
        } 
  
        while (number > 0) { 
            if (number % 10 == 0) 
                 
                result += (1 * decimalPlace); 
  
            
            number /= 10; 
            decimalPlace *= 10; 
        } 
        return result; 
    } 
  
    public static void main(String[] args) 
    { 
        System.out.print(replace0with5(102405)); 
    } 
} 



------------------------------------------------------------------------------------------------------

/*
	task:2......

-> Hollow diamond pattern printing using stars

Input: 5

Output:

2.  *
   *  * 
  *    *
 *      *  
*        *  
*        *
 *      *
  *    *  
   *  * 
     *

*/



import java.util.*; 
  
class GFG 
{ 
      
    
    static void printDiamond(int n) 
    { 
        int space = n - 1; 
       for (int i = 0; i < n; i++) 
        { 
            
            for (int j = 0; j < space; j++) 
                System.out.print(" "); 
      
            
            for (int j = 0; j <= i; j++) 
                System.out.print("* "); 
      
            System.out.print("\n"); 
            space--; 
        } 
      
        
        space = 0; 
      
       
        for (int i = n; i > 0; i--) 
        { 
            for (int j = 0; j < space; j++) 
                System.out.print(" "); 
      
           
            for (int j = 0; j < i; j++) 
                System.out.print("* "); 
      
            System.out.print("\n"); 
            space++; 
        } 
    } 
      
    
    public static void main(String[] args)  
    { 
        printDiamond(5); 
          
    } 
}

------------------------------------------------------------------------------------------------------------------------------------

/*

  task:3. Rotate the matrix by K times means rotating the given N*N matrix to the specified (K) number of times. For example, consider 
the 3*3 matrix, which has to be rotated once,
Matrix before Rotation :
10  20  30                                 
40  50  60          
70  80  90                            

 
Matrix after rotation : 
20  30  10
50  60  40
80  90  70

Steps:
Consider the matrix as 3 rows. Each element in the row is rotated to its right once.
One efficient method is to consider each matrix row as an array and perform array rotation.
Copy the elements from K to end of array in a temporary array and then temporary array is made as the start of the array. 
And then the remaining elements from start to K-1 are copied in temporary array and then set to the end of the array.
Thus, the matrix gets shifted

*/





public class Main
{ 
    
    static final int M=3; 
    static final int N=3; 
 
    static void rotateMatrix(int matrix[][], int k) 
    { 
        
        int temp[]=new int[M]; 

        k = k % M; 
        for (int i = 0; i < N; i++) 
        { 
           
            for (int t = 0; t < M - k; t++) 
                temp[t] = matrix[i][t]; 

            
            for (int j = M - k; j < M; j++) 
                matrix[i][j - M + k] = matrix[i][j]; 

            
            for (int j = k; j < M; j++) 
                matrix[i][j] = temp[j - k]; 
        } 
    } 

   
    static void printMatrix(int matrix[][]) 
    { 
        for (int i = 0; i < N; i++) 
        { 
            for (int j = 0; j < M; j++) 
                System.out.print(matrix[i][j] + " "); 
            System.out.println(); 
        } 
    } 

    
    public static void main (String[] args) 
    { 
        int matrix[][] = {{1,2,3} ,{4,5,6} ,{7,8,9}}; 
        System.out.println("The inputted matrix : ");
        printMatrix(matrix);
        int k = 2; 

       
        rotateMatrix(matrix, k); 

        
        System.out.println("\nThe Rotated Matrix : \n");
        printMatrix(matrix); 
    } 
}

