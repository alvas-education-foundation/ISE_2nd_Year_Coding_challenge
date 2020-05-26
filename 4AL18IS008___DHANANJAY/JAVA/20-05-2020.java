1.JAVA LOOPS 1

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


2.JAVA DATATYPES

import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        for(int i=0;i<t;i++)
        {
            String s=sc.next();
            String s1="";
            if(s.equals("0")||s.equals("1"))
            s1=s1+"boolean#";    
            try{
                byte b=Byte.parseByte(s);
                s1=s1+"byte#";
            }
            catch(Exception e)
            {
                
            }
            try{
                short b1=Short.parseShort(s);
                s1=s1+"short#";
            }
            catch(Exception e)
            {
                
            }
            try{
                int j=Integer.parseInt(s);
                s1=s1+"int#";
            }
            catch(Exception e)
            {
                
            }
            try{
                long l=Long.parseLong(s);
                s1=s1+"long#";
            }
            catch(Exception e)
            {
                
            }
            if(!s1.equals(""))
            {
                System.out.println(s+" can be fitted in:");
                String s2[]=s1.split("#");
                for(int j=0;j<s2.length;j++)
                {
                    if(!s2[j].equals(""))
                    System.out.println("* "+s2[j]); 
                }
            }
            else
            System.out.println(s+" can't be fitted anywhere.");         
        }
    }
}

3.JAVA IF-ELSE

import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int N = in.nextInt();
        if(N%2==1)
            System.out.println("Weird");
        else
            {
            if(N>=2&&N<=5)
                System.out.println("Not Weird");
            else if(N<=20)
                System.out.println("Weird");
                else
                System.out.println("Not Weird");
        }
    }
}
