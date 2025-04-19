// Define an interface
interface Animal {
    void makeSound();  // abstract method
    void eat();
}

// Implementing the interface
class Dog implements Animal {
    public void makeSound() {
        System.out.println("Woof! Woof!");
    }

    public void eat() {
        System.out.println("Dog is eating...");
    }
}

class Cat implements Animal {
    public void makeSound() {
        System.out.println("Meow!");
    }

    public void eat() {
        System.out.println("Cat is eating...");
    }
}

// Main class to run the code
public class InterfaceExample {
    public static void main(String[] args) {
        Animal myDog = new Dog();
        Animal myCat = new Cat();

        myDog.makeSound();  // Output: Woof! Woof!
        myDog.eat();        // Output: Dog is eating...

        myCat.makeSound();  // Output: Meow!
        myCat.eat();        // Output: Cat is eating...
    }
}
