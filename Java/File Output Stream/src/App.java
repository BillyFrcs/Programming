import java.io.*; // Import all the java.io packages

public class App {
  public static void main(String[] args) throws IOException {
    // Method 1
    // Create a fileoutputstream object (Buat folder dengan nama Test di C drive)
    FileOutputStream FOS = new FileOutputStream("C://Test//Data.txt", true); // Lokasi file boleh dimodifikasi :)

    // Message to be written to the file
    String message = "Yooooooooooooooooooooooooooooo";

    char character[] = message.toCharArray();

    /*
     * For default
     * for (int i = 0; i < message.length(); i++)
     * {
     * FOS.write(character[i]);
     * }
     */

    // For each
    for (char item : character) {
      FOS.write(item);
    }

    FOS.close();

    // Method 2
    SaveToFile("Heyoooooooooooooooooooooooooooooooooo", "YourFile");
  }

  // Another implementation (using try & catch)
  private static void SaveToFile(String message, String fileName) {
    try {
      // Check filenya di dalam project kalian
      FileOutputStream FileOutput = new FileOutputStream(fileName + ".txt");

      byte[] data = message.getBytes();

      FileOutput.write(data);

      FileOutput.close();
    } catch (Exception ErrorException) {
      ErrorException.getStackTrace();
    }
  }
}
