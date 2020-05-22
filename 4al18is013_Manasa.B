1. You must print two lines of output:
Print Hello, World. on the first line.
Print Hello, Java. on the second line.

public class Solution {

    public static void main(String[] args) {
    System.out.println("Hello, World.");
    System.out.println("Hello, Java.");     
    }
}
2. Print Weird if the number is weird; otherwise, print Not Weird.using if else statement
public class Solution {


    public static void main(String[] args) {

        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();            
        String ans="";
        if(n%2==1 || ( (n%2==0) && (n>=6 && n <= 20 ) ) ){
          ans = "Weird";
        }
        else{
            ans = "Not Weird";
           

        }
        System.out.println(ans);

    }
}
3. you must read an integer, a double, and a String from stdin, then print the values 
public class Solution {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int i = scan.nextInt();
double d = scan.nextDouble(); scan.nextLine(); String s = scan.nextLine();
         System.out.println("String: " + s);
        System.out.println("Double: " + d);
        System.out.println("Int: " + i);
    }
}
4.using loops
public class Solution {
 private static final Scanner scanner = new Scanner(System.in);
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int N = scanner.nextInt();

        for(int i = 1; i <= 10; i++){

            System.out.printf("%d x %d = %d%n", N, i, N*i);
        }
    }
}







