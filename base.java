// Base class
class Car {
    String brand;
    int year;

    // Parameterized constructor
    public Car(String brand, int year) {
        this.brand = brand;
        this.year = year;
        System.out.println("Car constructor called");
    }

    public void displayInfo() {
        System.out.println("Brand: " + brand + ", Year: " + year);
    }
}

// Derived class
class ElectricCar extends Car {
    int batteryCapacity;

    // Constructor of subclass
    public ElectricCar(String brand, int year, int batteryCapacity) {
        super(brand, year); // calling parent class constructor
        this.batteryCapacity = batteryCapacity;
        System.out.println("ElectricCar constructor called");
    }

    // Overriding method
    @Override
    public void displayInfo() {
        super.displayInfo(); // calling base class method
        System.out.println("Battery Capacity: " + batteryCapacity + " kWh");
    }
}

// Main class to run the program
public class InheritanceDemo {
    public static void main(String[] args) {
        Car basicCar = new Car("Toyota", 2018);
        basicCar.displayInfo();

        System.out.println();

        ElectricCar tesla = new ElectricCar("Tesla", 2022, 100);
        tesla.displayInfo();
    }
}
