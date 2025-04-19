import java.util.Scanner;
import java.util.InputMismatchException;

public class ExceptionHandlingDemo {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        try {
            // Getting input from user
            System.out.print("Enter numerator: ");
            int numerator = scanner.nextInt();

            System.out.print("Enter denominator: ");
            int denominator = scanner.nextInt();

            // Risky operation: division
            int result = numerator / denominator;

            System.out.println("Result: " + result);
        }

        // Catching division by zero
        catch (ArithmeticException e) {
            System.out.println("Error: Division by zero is not allowed.");
        }

        // Catching invalid input (non-integer)
        catch (InputMismatchException e) {
            System.out.println("Error: Please enter valid integers only.");
        }

        // Catching any other unexpected exceptions
        catch (Exception e) {
            System.out.println("An unexpected error occurred: " + e.getMessage());
        }

        // Code that always runs
        finally {
            System.out.println("Thank you for
