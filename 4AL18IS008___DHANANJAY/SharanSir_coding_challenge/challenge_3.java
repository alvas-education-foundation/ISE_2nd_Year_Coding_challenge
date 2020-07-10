// 1.Write a JAVA Program to reverse every word in a String using methods.

import java.util.*;
public class Main 
{
 public void reverseEachWordInString(String str1)
 {
  String[] each_words = str1.split(" ");
  String revString = "";
  for (int i = 0; i < each_words.length; i++)
 {
   String word = each_words[i];
   String reverseWord = "";
   for (int j = word.length() - 1; j >= 0; j--) 
  {
    reverseWord = reverseWord + word.charAt(j);
  }
   revString = revString + reverseWord + " ";
 }
  System.out.println(revString);
 }
 public static void main(String[] args)
 {
  Main obj = new Main();
  String StrGiven = "This is a test string";
  System.out.println("The given string is: " + StrGiven);
  System.out.println("The string reversed word by word is: ");
  obj.reverseEachWordInString(StrGiven);
 }
}


// 2.Write a function that accepts a single string input and returns the first non-repeated character.


import java.util.*;
class GFG 
{ 
    static final int NO_OF_CHARS = 256; 
    static char count[] = new char[NO_OF_CHARS]; 
    static void getCharCountArray(String str) 
    { 
        for (int i = 0; i < str.length(); i++) 
        count[str.charAt(i)]++; 
    } 
    static int firstNonRepeating(String str) 
    { 
        getCharCountArray(str); 
        int index = -1, i; 
  
        for (i = 0; i < str.length(); i++) 
    { 
          if (count[str.charAt(i)] == 1) 
     { 
            index = i; 
           break; 
     } 
    } 
     return index; 
}
   public static void main(String[] args) 
    { 
        String str = "geeksforgeeks"; 
        int index = firstNonRepeating(str); 
  
        System.out.println(index == -1 "Either all characters are repeating or string " + "is empty"
                : "First non-repeating character is + str.charAt(index)); 
    } 
} 
