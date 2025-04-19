public class CarExample {

    // Car class definition
    static class Car {
        // Fields (properties)
        String brand;
        String color;
        int speed;

        // Constructor
        public Car(String brand, String color, int speed) {
            this.brand = brand;
            this.color = color;
            this.speed = speed;
        }

        // Methods (behaviors)
        public void startEngine() {
            System.out.println(brand + " engine started.");
        }

        public void accelerate() {
            speed += 10;
            System.out.println(brand + " is accelerating. Speed: " + speed + " km/h");
        }

        public void displayDetails() {
            System.out.println("Brand: " + brand + ", Color: " + color + ", Speed: " + speed);
        }
    }

    // Main method
    public static void main(String[] args) {
        // Creating objects of Car
        Car car1 = new Car("Toyota", "Red", 50);
        Car car2 = new Car("Honda", "Black", 60);

        // Using object methods
        car1.startEngine();
        car1.accelerate();
        car1.displayDetails();

        System.out.println(); // space between cars

        car2.startEngine();
        car2.accelerate();
        car2.displayDetails();
    }
}
