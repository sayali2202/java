
public class Car {
    String brand;
    int year;

    
    public Car() {
        brand = "Unknown";
        year = 0;
        System.out.println("Default Constructor Called");
    }

    public Car(String brand, int year) {
        this.brand = brand;
        this.year = year;
        System.out.println("Parameterized Constructor Called");
    }

   
    public void displayInfo() {
        System.out.println("Brand: " + brand + ", Year: " + year);
    }

    public void displayInfo(String message) {
        System.out.println(message + " - Brand: " + brand + ", Year: " + year);
    }

   
    @Override
    protected void finalize() throws Throwable {
        System.out.println("Car object is being destroyed");
    }

    public static void main(String[] args) {
       
        Car car1 = new Car();
        car1.displayInfo();

        
        Car car2 = new Car("Toyota", 2021);
        car2.displayInfo();
        car2.displayInfo("Car Info");

        
        car1 = null;
        car2 = null;

       
        System.gc();

       
        try {
            Thread.sleep(1000); 
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
    }
}

