/*1. Print Hello, World. on the first line.
Print Hello, Java. on the second line.*/

public class Solution {

    public static void main(String[] args) {
        System.out.println("Hello, World.");
        System.out.println("Hello, Java.");
        
    }
}

/*2.n this challenge, you must read  integers from stdin and then print them to stdout. Each integer must be printed on a new line. To make the problem a little easier, a portion of the code is provided for you in the editor below.*/

import java.util.*;

public class Solution {

    public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int a=sc.nextInt();
		int b=sc.nextInt();
		int c=sc.nextInt();	
		System.out.println(a);
		System.out.println(b);
		System.out.println(c);
		
    
    }
    /*3.
    Every line of input will contain a String followed by an integer.
Each String will have a maximum of  alphabetic characters, and each integer will be in the inclusive range from  to .*/

    import java.util.Scanner;

    public class Solution {

        public static void main(String[] args) {
                Scanner sc=new Scanner(System.in);
                System.out.println("================================");
                for(int i=0;i<3;i++)
                {
                    String s1=sc.next();
                    int x=sc.nextInt();
                    System.out.printf( "%-15s%03d %n", s1, x);
                }
                System.out.println("================================");

        }
    }
    
    
    /*4.Given an integer, , print its first  multiples. Each multiple  (where ) should be printed on a new line in the form: N x i = result.*/
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
    
    
}
