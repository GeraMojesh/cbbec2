5.Develop a Java program that demonstrates the use of all exception handling keywords: try, catch, throw, throws, and finally?
public class EasyExceptionExample {
    public static void checkNumber(int number) throws Exception {
        if (number < 0) {
            throw new Exception("Number cannot be negative");
        }
        System.out.println("Number is: " + number);
    }
    public static void main(String[] args) {
        try {
            checkNumber(-5); 
        } catch (Exception e) {
            System.out.println("Caught: " + e.getMessage());
        } finally {
            System.out.println("Finally block: This always runs.");
        }
        System.out.println("Program ends.");
    }
