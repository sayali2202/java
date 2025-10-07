
interface Animal {
    void makeSound();  
    void eat();
}


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


public class InterfaceExample {
    public static void main(String[] args) {
        Animal myDog = new Dog();
        Animal myCat = new Cat();

        myDog.makeSound();  
        myDog.eat();        

        myCat.makeSound();  
        myCat.eat();        // Output: Cat is eating...
    }
}

