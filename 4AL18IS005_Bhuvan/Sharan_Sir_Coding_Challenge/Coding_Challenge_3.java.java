/*1. Write a Program in Java to check whether a number is an Armstrong Number or not. 
SAMPLE OUTPUT: 
Input an integer:  153
Is Armstrong number? True
*/





class Example
{  
public static void main(String[] args) 
{  
int c=0,a,temp;  
int n=153;
temp=n;  
{  
a=n%10;  
n=n/10;  
c=c+(a*a*a);  
}  
if(temp==c)  
System.out.println("armstrong number");   
else  
System.out.println("Not armstrong number");   
 }  
}  



################################################################################################################################################




/*2. Write a Java program to find the second most frequent character in a given string.
Sample Output:
 
The given string is: successes
The second most frequent char in the string is: c
*/






public class second 
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



############################################################################################################################################################




/*3. Write a Java program to find the length of the longest consecutive elements sequence from a given unsorted array of integers.

SAMPLE OUTPUT:
Sample array: [49, 1, 3, 200, 2, 4, 70, 5]
The longest consecutive elements sequence is [1, 2, 3, 4, 5], therefore the program will return its length 5
*/






import java.util.HashSet;
public class third 
{    
public static void main(String[] args) 
{
int nums[] = {49, 1, 3, 200, 2, 4, 70, 5};
System.out.println("Original array length: "+nums.length);
System.out.print("Array elements are: ");
for (int i = 0; i < nums.length; i++)
{
System.out.print(nums[i]+" ");
}
System.out.println("\n length of the array is: "+longest_sequence(nums));
}
public static int longest_sequence(int[] nums) 
{
final HashSet<Integer> h_set = new HashSet<Integer>();
for (int i : nums) h_set.add(i);
int longest_sequence_len = 0;
for (int i : nums) 
{
int length = 1;
for (int j = i - 1; h_set.contains(j); --j)
{
h_set.remove(j);
++length;
}
for (int j = i + 1; h_set.contains(j); ++j) 
{
h_set.remove(j);
++length;
}
longest_sequence_len = Math.max(longest_sequence_len, length);
}
return longest_sequence_len;
}
}


################################################################################################################################################################


/*4. Write a Java program to segregate all 0s on left side and all 1s on right side of a given array of 0s and 1s.
SAMPLE OUTPUT:
Sample array: [1,0,1,1,0,0,1,1]
So, the Output must be: [0,0,0,1,1,1,1,1]

*/








import java.util.Arrays;

public class Main 
{
public static void main(String[] args)
{
int x[] = new int[]{ 0, 0, 1, 1, 0, 1, 1, 1,0 };
int result[];
System.out.println("Original Array ");
System.out.println(Arrays.toString(arr));
int n = x.length;
result = separateit(x, n);
System.out.println("New Array ");
System.out.println(Arrays.toString(result));
}
static int [] separateit(int x[], int n)
{
int count = 0;   
for (int i = 0; i < n; i++) 
{
if (x[i] == 0)
count++;
}
for (int i = 0; i < count; i++)
x[i] = 0;
for (int i = count; i < n; i++)
x[i] = 1;
return x;
}       
}


_________________________________________________________________________________________________**&**___________________________________________________________________________________