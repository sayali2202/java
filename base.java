
class Car {
    String brand;
    int year;
    public Car(String brand, int year) {
        this.brand = brand;
        this.year = year;
        System.out.println("Car constructor called");
    }

    public void displayInfo() {
        System.out.println("Brand: " + brand + ", Year: " + year);
    }
}


class ElectricCar extends Car {
    int batteryCapacity;

    public ElectricCar(String brand, int year, int batteryCapacity) {
        super(brand, year); 
        this.batteryCapacity = batteryCapacity;
        System.out.println("ElectricCar constructor called");
    }

   
    @Override
    public void displayInfo() {
        super.displayInfo(); 
        System.out.println("Battery Capacity: " + batteryCapacity + " kWh");
    }
}


public class InheritanceDemo {
    public static void main(String[] args) {
        Car basicCar = new Car("Toyota", 2018);
        basicCar.displayInfo();

        System.out.println();

        ElectricCar tesla = new ElectricCar("Tesla", 2022, 100);
        tesla.displayInfo();
    }
}

