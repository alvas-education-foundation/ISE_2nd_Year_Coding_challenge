// 1.Write a JAVA Program to reverse every word in a String using methods.

public class Example
{
   public void reverseWordInMyString(String str)
   {
	/* The split() method of String class splits
	 * a string in several strings based on the
	 * delimiter passed as an argument to it
	 */
	String[] words = str.split(" ");
	String reversedString = "";
	for (int i = 0; i < words.length; i++)
        {
           String word = words[i]; 
           String reverseWord = "";
           for (int j = word.length()-1; j >= 0; j--) 
	   {
		/* The charAt() function returns the character
		 * at the given position in a string
		 */
		reverseWord = reverseWord + word.charAt(j);
	   }
	   reversedString = reversedString + reverseWord + " ";
	}
	System.out.println(str);
	System.out.println(reversedString);
   }
   public static void main(String[] args) 
   {
	Example obj = new Example();
	obj.reverseWordInMyString("Welcome to BeginnersBook");
	obj.reverseWordInMyString("This is an easy Java Program");
   }
}

// 2.write  a function for a string, find its first non-repeating character

class GFG { 
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
  
        for (i = 0; i < str.length(); i++) { 
            if (count[str.charAt(i)] == 1) { 
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
  
        System.out.println( 
            index == -1
                ? "Either all characters are repeating or string "
                      + "is empty"
                : "First non-repeating character is "
                      + str.charAt(index)); 
    } 
} 
