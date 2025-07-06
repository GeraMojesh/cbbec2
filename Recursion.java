
2. Write a Java program to demonstrate recursion

//Print Numbers from 1 to 5 using Recursion//
public class Recursion {

    public static void printNumbers(int n) {
        if (n == 0) {
            return; 
        }

        printNumbers(n - 1); 
        System.out.println(n); 
    }

    public static void main(String[] args) {
        printNumbers(5);
    }
}
