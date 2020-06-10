/* 1...java program to find the index of an array element  */


public class Exercise6 {
       public static int  findIndex (int[] my_array, int t) {
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


----------------------------------------------------------------------------------------------------------------------------


/* 2....Write a Java program to find the duplicate values of an array of integer values. */


import java.util.Arrays; 
public class Exercise12 {
  public static void main(String[] args) 
    {
        int[] my_array = {1, 2, 5, 5, 6, 6, 7, 2};
 
        for (int i = 0; i < my_array.length-1; i++)
        {
            for (int j = i+1; j < my_array.length; j++)
            {
                if ((my_array[i] == my_array[j]) && (i != j))
                {
                    System.out.println("Duplicate Element : "+my_array[j]);
                }
            }
        }
    }    
}




-----------------------------------------------------------------------------------------------------------------------------------------



/* 3....Write a Java program to get a date before and after 1 year compares to the current date. */


import java.util.*;
public class Exercise17 {
   public static void main(String[] args)
    {
      Calendar cal = Calendar.getInstance();
      Date cdate = cal.getTime();
      
      cal.add(Calendar.YEAR, 1); 
      Date nyear = cal.getTime();
      
      cal.add(Calendar.YEAR, -2); 
      Date pyear = cal.getTime();
      System.out.println("\nCurrent Date : " + cdate);
      System.out.println("\nDate before 1 year : " + pyear);
      System.out.println("\nDate after 1 year  : " + nyear+"\n");  	
    }
}


----------------------------------------------------------------------------------------------------------------------------------------------------

/*


    4)	Solve the challenge where,
You are given a  2D array. An hourglass in an array is a portion shaped like this:
a b c
  d
e f g
For example, if we create an hourglass using the number 1 within an array full of zeros, it may look like this:
1 1 1 0 0 0
0 1 0 0 0 0
1 1 1 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0
Actually, there are many hourglasses in the array above. The three leftmost hourglasses are the following:
1 1 1     1 1 0     1 0 0
  1         0         0
1 1 1     1 1 0     1 0 0
The sum of an hourglass is the sum of all the numbers within it. The sum for the hourglasses above are 7, 4, and 2, respectively.
In this problem you have to print the largest sum among all the hourglasses in the array



*/




import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {
private static final Scanner scanner = new Scanner(System.in);

public static void main(String[] args) {
    int[][] arr = new int[6][6];

    for (int i = 0; i < 6; i++) {
        String[] arrRowItems = scanner.nextLine().split(" ");
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        for (int j = 0; j < 6; j++) {
            int arrItem = Integer.parseInt(arrRowItems[j]);
            arr[i][j] = arrItem;
        }
    }

    scanner.close();
    int max=-63;
    int sum=0;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            sum=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
            if(sum>max){
                max=sum;
            }
            sum=0;

        }

    }
    System.out.println(max);
}
}

