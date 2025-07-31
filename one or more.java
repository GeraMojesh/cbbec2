6. Write a Java program to create and handle one or more user-defined exceptions with meaningful messages.
class InvalidAgeException extends Exception {
    public InvalidAgeException(String message) {
        super(message);
    }
}
public class UserDefinedExceptionExample {
    public static void checkAge(int age) throws InvalidAgeException {
        if (age < 0) throw new InvalidAgeException("Age cannot be negative: " + age);
        if (age < 18) throw new InvalidAgeException("Age must be at least 18: " + age);
        System.out.println("Valid age: " + age);
    }
    public static void main(String[] args) {
        int[] ages = {25, -5, 15, 30};
        for (int age : ages) {
            try {
                checkAge(age);
            } catch (InvalidAgeException e) {
                System.out.println("Exception caught: " + e.getMessage());
            }
        }
    }
}
