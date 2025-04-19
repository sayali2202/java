import java.io.File;
import java.io.FileWriter;
import java.io.BufferedWriter;
import java.io.IOException;

public class FileHandlingExample {

    public static void main(String[] args) {
        // Create a new file or open an existing one
        File file = new File("example.txt");

        try {
            // Create a FileWriter and BufferedWriter for writing to the file
            FileWriter fileWriter = new FileWriter(file);
            BufferedWriter bufferedWriter = new BufferedWriter(fileWriter);

            // Write data to the file
            bufferedWriter.write("Hello, this is a test file.");
            bufferedWriter.newLine();  // Adds a new line
            bufferedWriter.write("This is another line of text.");
            
            // Close the BufferedWriter to save the content
            bufferedWriter.close();
            System.out.println("Data written to the file successfully!");

        } catch (IOException e) {
            System.out.println("An error occurred while writing to the file.");
            e.printStackTrace();
        }
    }
}
