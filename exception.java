import java.util.Scanner;
import java.util.InputMismatchException;

public class ExceptionHandlingDemo {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        try {
     
            System.out.print("Enter numerator: ");
            int numerator = scanner.nextInt();

            System.out.print("Enter denominator: ");
            int denominator = scanner.nextInt();

         
            int result = numerator / denominator;

            System.out.println("Result: " + result);
        }

  
        catch (ArithmeticException e) {
            System.out.println("Error: Division by zero is not allowed.");
        }

    
        catch (InputMismatchException e) {
            System.out.println("Error: Please enter valid integers only.");
        }

    
        catch (Exception e) {
            System.out.println("An unexpected error occurred: " + e.getMessage());
        }

     
        finally {
            System.out.println("Thank you for

