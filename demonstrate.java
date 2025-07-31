4. Write a Java program to demonstrate multiple inheritance using interfaces?

interface Animal {
    void eat();
}
interface Bird {
    void fly();
}
class Bat implements Animal, Bird {
    public void eat() {
        System.out.println("Bat eats insects.");
    }
    public void fly() {
        System.out.println("Bat can fly like birds.");
    }
}

public class Inheritance {
    public static void main(String[] args) {
        Bat bat = new Bat();
        bat.eat();
        bat.fly();
    }
}
