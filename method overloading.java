//3. Write a Java program to demonstrate method overloading and method overriding using simple inheritance.
class Person {
    void introduce() {
        System.out.println("I am a person.");
    }
    void introduce(String name) {
        System.out.println("I am " + name + ".");
    }
}
class Student extends Person {
    @Override
    void introduce() {
        System.out.println("I am a student.");
    }
}
public class Main {
    public static void main(String[] args) {
        Person p = new Person();
        p.introduce();             
        p.introduce("Alice");      
        System.out.println("--------");
        Student s = new Student();
        s.introduce();              
        s.introduce("John");       
    }
}
