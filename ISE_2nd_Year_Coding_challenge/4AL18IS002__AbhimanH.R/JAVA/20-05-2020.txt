1.In this challenge, you must read an integer, a double, and a String from stdin, then print the values according to the instructions in the Output Format section below. To make the problem a little easier, a portion of the code is provided for you in the editor.

Note: We recommend completing Java Stdin and Stdout I before attempting this challenge.


import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        java.io.BufferedReader stdin = new java.io.BufferedReader(new java.io.InputStreamReader(System.in));  
        String input = new String();  
        try {			
			int intVal = Integer.parseInt(stdin.readLine());
	        Double doubleVal = Double.parseDouble(stdin.readLine());
	        String strVal = stdin.readLine();
	        
	        System.out.println("String: "+strVal);
	        System.out.println("Double: "+doubleVal);
	        System.out.println("Int: "+intVal);
		} catch (IOException e) 
						    }
}


2)Objective
In this challenge, we're going to use loops to help us do some simple math.

Task
Given an integer, , print its first  multiples. Each multiple  (where ) should be printed on a new line in the form: N x i = result.


import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int N = in.nextInt();
        if(N>=2||N<=20){
            for(int i=1;i<=10;i++){
                
                System.out.println(N+" x "+i+" = "+N*i );
            }
        }
    }
}


3. Java's System.out.printf function can be used to print formatted output. The purpose of this exercise is to test your understanding of formatting output using printf.

To get you started, a portion of the solution is provided for you in the editor; you must format and print the input to complete the solution.


import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner in  = new Scanner(System.in);
        int i = 0;
        String s = "";
        int a;
        System.out.println("================================");
        while(i < 3){
            s = in.next();
            a = in.nextInt();
            
            System.out.printf( "%-15s%03d\n", s, a);
            
            i++;
        }
        System.out.println("================================");
    }
}


4. Given a time in 12 -hour AM/PM format, convert it to military (24-hour) time.

Note: Midnight is 12:00:00AM on a 12-hour clock, and 00:00:00 on a 24-hour clock. Noon is 12:00:00PM on a 12-hour clock, and 12:00:00 on a 24-hour clock.

Function Description

Complete the timeConversion function in the editor below. It should return a new string representing the input time in 24 hour format.

timeConversion has the following parameter(s):

s: a string representing time in  hour format


code:
import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner in = new Scanner(System.in);
        String s;
        while( in.hasNextLine() ) {
            s = in.nextLine();
            int flag = 1, i = 0, l = s.length();
            Stack st = new Stack();
            for( i = 0; i < l; i++ ){
                char ch = s.charAt(i);
                if( ch == '(' || ch == '[' || ch == '{' )
                    st.push( ch );
                else {
                    if( st.empty() ){
                        flag = 0; break;
                    } else {
                        char c = (char) st.pop();
                        if( (c == '(' && ch != ')') || (c == '[' && ch != ']') || (c == '{' && ch != '}') ){
                            flag = 0; break;
                        }
                    }
                }
            }
            if( flag == 1 && st.empty() ) System.out.println("true"); 
            else System.out.println("false"); 
        }
    }
}


