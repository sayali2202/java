import java.io.File;
import java.io.FileWriter;
import java.io.BufferedWriter;
import java.io.IOException;

public class FileHandlingExample {

    public static void main(String[] args) {
       
        File file = new File("example.txt");

        try {
          
            FileWriter fileWriter = new FileWriter(file);
            BufferedWriter bufferedWriter = new BufferedWriter(fileWriter);

     
            bufferedWriter.write("Hello, this is a test file.");
            bufferedWriter.newLine();  
            bufferedWriter.write("This is another line of text.");
            
        
            bufferedWriter.close();
            System.out.println("Data written to the file successfully!");

        } catch (IOException e) {
            System.out.println("An error occurred while writing to the file.");
            e.printStackTrace();
        }
    }
}

