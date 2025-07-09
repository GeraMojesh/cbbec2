public class Static {
    static int number;
    static {
        number = 10;
        System.out.println("Static Block: number is initialized to " + number);
    }
    static void displayNumber() {
        System.out.println("Static Method: number is " + number);
    }
     public static void main(String[] args) {
        displayNumber();
        number = 20;
        displayNumber();
    }
}
