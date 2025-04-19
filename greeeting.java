package mypackage;

public class greeting {
    public void sayHello(String name) {
        System.out.println("Hello, " + name + "! Welcome to Java Packages.");
    }
}
Here is the Java code from the image you provided:

File 1: mypackage/greeting.java

package mypackage;

public class greeting {
    public void sayHello(String name) {
        System.out.println("Hello, " + name + "! Welcome to Java Packages.");
    }
}

File 2: main.java

import mypackage.greeting;

public class main {
    public static void main(String[] args) {
        greeting g = new greeting();
        g.sayHello("sayali");
    }
}
