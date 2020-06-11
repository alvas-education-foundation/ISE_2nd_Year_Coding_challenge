	/*  1...Write a JAVA Program to reverse every word in a String using methods.   */



import java.util.*;
public class Main {
 public void reverseEachWordInString(String str1) {
  String[] each_words = str1.split(" ");
  String revString = "";
  for (int i = 0; i < each_words.length; i++) {
   String word = each_words[i];
   String reverseWord = "";
   for (int j = word.length() - 1; j >= 0; j--) {
    reverseWord = reverseWord + word.charAt(j);
   }
   revString = revString + reverseWord + " ";
  }
  System.out.println(revString);
 }
 public static void main(String[] args) {
  Main obj = new Main();
  String StrGiven = "This is a test string";
  System.out.println("The given string is: " + StrGiven);
  System.out.println("The string reversed word by word is: ");
  obj.reverseEachWordInString(StrGiven);
 }
}






	/* 2......Write a function that accepts a single string input and returns the first non-repeated character.   */




import java.io.*; 
import java.util.*; 
import java.lang.*; 
  
class GFG 
{ 

static int firstNonRepeating(String str) 
{ 
    int NO_OF_CHARS = 256; 
      
     
    int arr[] = new int[NO_OF_CHARS]; 
    for (int i = 0;  
             i < NO_OF_CHARS; i++) 
        arr[i] = -1; 
  
    for (int i = 0;  
             i < str.length(); i++)  
    { 
        if (arr[str.charAt(i)] == -1) 
            arr[str.charAt(i)] = i; 
        else
            arr[str.charAt(i)] = -2; 
    } 
  
    int res = Integer.MAX_VALUE; 
    for (int i = 0; i < NO_OF_CHARS; i++) 
  
         
        if (arr[i] >= 0) 
            res = Math.min(res, arr[i]); 
  
    return res; 
} 
  

public static void main(String args[]) 
{ 
    String str = "geeksforgeeks"; 
      
    int index = firstNonRepeating(str); 
    if (index == Integer.MAX_VALUE) 
        System.out.print("Either all characters are " +  
                       "repeating or string is empty"); 
    else
        System.out.print("First non-repeating character"+  
                             " is " + str.charAt(index)); 
} 
} 