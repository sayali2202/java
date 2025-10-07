
class Box<T> {
    private T value;

    public Box(T value) {
        this.value = value;
    }

    public void setValue(T value) {
        this.value = value;
    }

    public T getValue() {
        return value;
    }

    public void display() {
        System.out.println("Box Value: " + value);
    }
}

class Utility {
   
    public static <T> void printArray(T[] array) {
        for (T item : array) {
            System.out.print(item + " ");
        }
        System.out.println();
    }
}

public class GenericsDemo {
    public static void main(String[] args) {
  
        Box<Integer> intBox = new Box<>(123);
        Box<String> strBox = new Box<>("Hello Generics");
        Box<Double> doubleBox = new Box<>(3.14);

        intBox.display();
        strBox.display();
        doubleBox.display();

   
        Integer[] intArray = {1, 2, 3, 4};
        String[] strArray = {"A", "B", "C"};

        System.out.println("\nInteger Array:");
        Utility.printArray(intArray);

        System.out.println("String Array:");
        Utility.printArray(strArray);
    }
}

