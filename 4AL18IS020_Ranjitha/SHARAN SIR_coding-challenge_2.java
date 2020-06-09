// 1. Write a JAVA Program to reverse every word in a String using methods.


import java.util.*;
public class Reverse {
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


// 2.write  a function that accepts a single string input and returns the first non-repeated character.


import java.util.*;
public class FirstNonRepeated {
 public static void main(String[] args) {
  String str1 = "gibblegabbler";
  System.out.println("The given string is: " + str1);
  for (int i = 0; i < str1.length(); i++) {
   boolean unique = true;
   for (int j = 0; j < str1.length(); j++) {
    if (i != j && str1.charAt(i) == str1.charAt(j)) {
     unique = false;
     break;
    }
   }
   if (unique) {
    System.out.println("The first non repeated character in String is: " + str1.charAt(i));
    break;
   }
  }
 }
}


