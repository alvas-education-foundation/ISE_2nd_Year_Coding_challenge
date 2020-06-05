//1. Write a Program in Java to check whether a number is an Armstrong Number or not. 


import java.util.Scanner;
public class ArmstrongNumber {
   public static void main(String args[]) {
      int number = 153;
      int check, rem, sum = 0;
      System.out.println("Enter the number to be verified:");
      Scanner sc = new Scanner(System.in);
      number = sc.nextInt();
      check = number;
      while(check != 0) {
         rem = check % 10;
         sum = sum + (rem * rem * rem);
         check = check / 10;
      }
      if(sum == number)
         System.out.println("Given number is an armstrong number.");
      else
         System.out.println("Given number is not an armstrong number.");
   }
}


//2. Write a Java program to find the second most frequent character in a given string.

public class SecondFrequent 
{ 
static final int No_of_chars = 256; 
static char getSecondmostFreq(String str) 
{       
int[] count = new int[No_of_chars]; 
int i; 
for (i=0; i< str.length(); i++) 

(count[str.charAt(i)])++; 
  int first = 0, second = 0; 
  for (i = 0; i < No_of_chars; i++) 
     { 
  if (count[i] > count[first]) 
      { 
       second = first; 
       first = i; 
      } 
                 
else if (count[i] > count[second] && count[i] != count[first]) 
second = i; 
  } 
return (char)second; 
} 
      
public static void main(String args[]) 
{ 
String str = "successes"; 
char res = getSecondmostFreq(str); 
if (res != '\0') 
System.out.println("Second most frequent char"+" is " + res); 
      else
System.out.println("No second most frequent"+"character"); 
    } 
} 



/*3.Write a Java program to find the length of the longest consecutive elements sequence from a given unsorted array of integers.*/

import java.util.HashSet;
public class LongestEle {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		
		  
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



/*4. Write a Java program to segregate all 0s on left side and all 1s on right side of a given array of 0s and 1s.*/


import java.util.Arrays;
public class Segregate {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		

		
		    
		        int arr[] = new int[]{ 1, 0, 1, 1, 0,0 , 1, 1};
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

	



