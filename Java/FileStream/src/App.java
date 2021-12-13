import java.io.*; // Import all the java.io packages

public class App 
{
    public static void main(String[] args) throws IOException
    {
      // Method 1
            // Create a fileoutputstream object (Buat folder dengan nama Test di C drive)
            FileOutputStream FOS = new FileOutputStream("C://Test//Data.txt", true);
     
            // Message to be written to the file
            String message = "Yooooooooooooooooooooooooooooo";
              
            char character[] = message.toCharArray();
            
            for (int i = 0; i < message.length(); i++) 
            {
                FOS.write(character[i]);
            }
                 
            FOS.close();

            // Method 2
            SaveToFile("Heyoooooooooooooooooooooooooooooooooo", "YourFile");
    }

    // Another implementation (more simple)
    private static void SaveToFile(String message, String fileName)
    {
      try 
      {
        // Check filenya di dalam project kalian
          FileOutputStream output = new FileOutputStream(fileName + ".txt");

          byte[] array = message.getBytes();

          output.write(array);

          output.close();
      }
      catch (Exception ErrorException) 
      {
          ErrorException.getStackTrace();
      }
    }
}
