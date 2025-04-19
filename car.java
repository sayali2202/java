// Car.java
public class Car {
    String brand;
    int year;

    // Default Constructor
    public Car() {
        brand = "Unknown";
        year = 0;
        System.out.println("Default Constructor Called");
    }

    // Parameterized Constructor
    public Car(String brand, int year) {
        this.brand = brand;
        this.year = year;
        System.out.println("Parameterized Constructor Called");
    }

    // Method Overloading: displayInfo
    public void displayInfo() {
        System.out.println("Brand: " + brand + ", Year: " + year);
    }

    public void displayInfo(String message) {
        System.out.println(message + " - Brand: " + brand + ", Year: " + year);
    }

    // Destructor-like method (Java doesn't support destructors like C++, but finalize() simulates it)
    @Override
    protected void finalize() throws Throwable {
        System.out.println("Car object is being destroyed");
    }

    // Main method to test the functionality
    public static void main(String[] args) {
        // Using default constructor
        Car car1 = new Car();
        car1.displayInfo();

        // Using parameterized constructor
        Car car2 = new Car("Toyota", 2021);
        car2.displayInfo();
        car2.displayInfo("Car Info");

        // Nullify object and request garbage collection
        car1 = null;
        car2 = null;

        // Requesting garbage collection
        System.gc();

        // Small pause to allow garbage collection to complete
        try {
            Thread.sleep(1000); // 1 second
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
    }
}
