import java.util.Scanner;

public class Main{
     public static void main(String args[]) throws Exception{
          Scanner scan = new Scanner(System.in);

          System.out.print("Enter some numbers: ");

          String input = scan.nextLine(); //The data type could change with another data types

          System.out.println("Result is: " + input);

          scan.close(); //Close the scanner to hide the warning 
     }
}