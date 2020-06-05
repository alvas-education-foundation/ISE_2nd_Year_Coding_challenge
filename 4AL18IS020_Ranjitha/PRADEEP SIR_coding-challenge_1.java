// 1. Write a Java program to find the index of an array element.

public class IndexArray {

	public static int  findIndex (int[] my_array, int t) {
		// TODO Auto-generated method stub
		
		        if (my_array == null) return -1;
		        int len = my_array.length;
		        int i = 0;
		        while (i < len) {
		            if (my_array[i] == t) return i;
		            else i=i+1;
		        }
		        return -1;
		    }
		    public static void main(String[] args) {
		      int[] my_array = {25, 14, 56, 15, 36, 56, 77, 18, 29, 49};
		      System.out.println("Index position of 25 is: " + findIndex(my_array, 25));
		      System.out.println("Index position of 77 is: " + findIndex(my_array, 77));
		       }
		}



// 2. Write a Java program to find the duplicate values of an array of integer values
		
public class DuplicateVal {

	void printRepeating(int arr[], int size)  
    { 
        int i, j; 
        System.out.println("duplicate values are :"); 
        for (i = 0; i < size; i++)  
        { 
            for (j = i + 1; j < size; j++)  
            { 
                if (arr[i] == arr[j])  
                    System.out.print(arr[i] + " "); 
            } 
        } 
    } 
  
    public static void main(String[] args)  
    { 
       DuplicateVal repeat = new DuplicateVal (); 
        int arr[] = {4, 2, 4, 5, 2, 3, 1}; 
        int arr_size = arr.length; 
        repeat.printRepeating(arr, arr_size); 
    } 
} 


/*3. Write a Java program to get a date before and after 1 year compares to the current date.*/		

import java.util.*;
public class GetDate {
   public static void main(String[] args)
    {
      Calendar cal = Calendar.getInstance();
      Date cdate = cal.getTime();
      // get next year
      cal.add(Calendar.YEAR, 1); 
      Date nyear = cal.getTime();
      //get previous year
      cal.add(Calendar.YEAR, -2); 
      Date pyear = cal.getTime();
      System.out.println("\nCurrent Date : " + cdate);
      System.out.println("\nDate before 1 year : " + pyear);
      System.out.println("\nDate after 1 year  : " + nyear+"\n");  	
    }
}


/* 4. Solve the challenge where,
You are given a  2D array. An hourglass in an array is a portion shaped like this:
a b c
  d
e f g
In this problem you have to print the largest sum among all the hourglasses in the array.*/


import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Hourglass {
    public static int getarraysum(int[][] a,int ele_row_i,int ele_col_i)
      {
           int sum=0;
           int fst_row=ele_row_i+1;
           int fst_col=ele_col_i;
           int sec_row=ele_row_i+1;
           int sec_col=ele_col_i+2;
 
           for(int i=ele_row_i;i<ele_row_i+3;i++){
               for(int j=ele_col_i;j<ele_col_i+3;j++){
                      if(i==fst_row && j==fst_col || i==sec_row && j==sec_col){
                       continue;
                       }else{
                         sum=sum+(int)a[i][j]; 
                            }
               }
            }
            return sum;
    }
 
    public static void main(String[] args) {
         Scanner in = new Scanner(System.in);
         int arr[][] = new int[6][6];
         int flag_invalid_entry=0;
         int max_hour_sum=0;
         for(int i=0; i < 6; i++){
            for(int j=0; j < 6; j++){
                arr[i][j] = in.nextInt();
                if(arr[i][j]<-9 || arr[i][j]>9){
                   flag_invalid_entry=1;
                  }
               }
            }
 
         if(flag_invalid_entry==0){
           for(int i=0;i<=3;i++){
              for(int j=0;j<=3;j++){
                 int new_sum=getarraysum(arr,i,j);
                 if(max_hour_sum==0 && flag_invalid_entry==0){
                    max_hour_sum=max_hour_sum+new_sum;
                    flag_invalid_entry=1;
                   }else if(max_hour_sum<new_sum){
                         max_hour_sum=new_sum;
                   }
            } 
         } 
        }

       System.out.println(""+max_hour_sum);
       }
}

