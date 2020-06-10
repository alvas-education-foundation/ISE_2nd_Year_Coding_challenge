/*
      1) Write a Program in Java to check whether a number is an Armstrong Number or not. 
	SAMPLE OUTPUT: Input an integer:  153
	Is Armstrong number? True



*/


Input an integer:  153
Is Armstrong number? True


public class JavaExample {

    public static void main(String[] args) {

        int num = 153;   // number to chek wiether it is armstrong num or not
	int number, temp, total = 0;

        number = num;
        while (number != 0)
        {
            temp = number % 10;
            total = total + temp*temp*temp;
            number /= 10;
        }

        if(total == num)
            System.out.println(num + " is an Armstrong number :true");
        else
            System.out.println(num + " is an Armstrong number :false");
    }
}


---------------------------------------------------------------------------------------------------------------
/*


	2)  Write a Java program to find the second most frequent character in a given string.
Sample Output:

The given string is: successes
The second most frequent char in the string is: c

*/


public class GFG  
{ 
    static final int NO_OF_CHARS = 256; 
      
    
    static char getSecondMostFreq(String str) 
    {  
        int[] count = new int[NO_OF_CHARS]; 
        int i; 
        for (i=0; i< str.length(); i++) 
            (count[str.charAt(i)])++; 
       
       
        int first = 0, second = 0; 
        for (i = 0; i < NO_OF_CHARS; i++) 
        { 
            
            if (count[i] > count[first]) 
            { 
                second = first; 
                first = i; 
            } 
       
            
            else if (count[i] > count[second] && 
                     count[i] != count[first]) 
                second = i; 
        } 
       
        return (char)second; 
    } 
       
   
    public static void main(String args[]) 
    { 
      String str = "successes"; 
      char res = getSecondMostFreq(str); 
      if (res != '\0') 
         System.out.println("Second most frequent char"+ 
                                       " is " + res); 
      else
         System.out.println("No second most frequent"+ 
                                       "character"); 
    } 
} 

-----------------------------------------------------------------------------------------------------------

/*

  3) Write a Java program to find the length of the longest consecutive elements sequence from a given unsorted array of integers.

SAMPLE OUTPUT:
Sample array: [49, 1, 3, 200, 2, 4, 70, 5]
The longest consecutive elements sequence is [1, 2, 3, 4, 5], therefore the program will return its length 5


*/


import java.util.HashSet;
public class Exercise34 {    
   public static void main(String[] args) {
        int nums[] = {49, 1, 3, 200, 2, 4, 70, 5};  
		System.out.println("Original array length: "+nums.length);
		System.out.print("Array elements are: ");
       for (int i = 0; i < nums.length; i++)
        {
            System.out.print(nums[i]+" ");
        }
		System.out.println("\nThe new length of the array is: "+longest_sequence(nums));
			
    }
    
    public static int longest_sequence(int[] nums) {
      final HashSet<Integer> h_set = new HashSet<Integer>();
        for (int i : nums) h_set.add(i);

        int longest_sequence_len = 0;
        for (int i : nums) {
            int length = 1;
            for (int j = i - 1; h_set.contains(j); --j) {
                h_set.remove(j);
                ++length;
            }
            for (int j = i + 1; h_set.contains(j); ++j) {
                h_set.remove(j);
                ++length;
            }
            longest_sequence_len = Math.max(longest_sequence_len, length);
        }
        return longest_sequence_len;
    }
}

------------------------------------------------------------------------------------------------------------------------------
/*

  4) Write a Java program to segregate all 0s on left side and all 1s on right side of a given array of 0s and 1s.
SAMPLE OUTPUT:
Sample array: [1,0,1,1,0,0,1,1]
So, the Output must be: [0,0,0,1,1,1,1,1] 


*/

import java.util.Arrays;

public class Main {
    public static void main(String[] args)
    {
        int arr[] = new int[]{ 0, 0, 1, 1, 0, 1, 1, 1,0 };
        int result[];
        System.out.println("Original Array ");
        System.out.println(Arrays.toString(arr));

        int n = arr.length;
 
        result = separate_0_1(arr, n);
        System.out.println("New Array ");
        System.out.println(Arrays.toString(result));
      }
    
    static int [] separate_0_1(int arr[], int n)
     {
        int count = 0;   
     
        for (int i = 0; i < n; i++) {
            if (arr[i] == 0)
                count++;
        }
 
        for (int i = 0; i < count; i++)
            arr[i] = 0;
 
        for (int i = count; i < n; i++)
            arr[i] = 1;
    
         return arr;
     }       
   }

