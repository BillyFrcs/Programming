import java.util.Scanner;

public class Main{
     public static void main(String args[]) throws Exception{
          Scanner scan = new Scanner(System.in);

          System.out.print("Enter some word: ");

          String input = scan.nextLine(); //The data type could change with another data types
          System.out.println("Input is: " + input);

          System.out.print("Enter some number: ");

          int inputNumber = scan.nextInt();
          System.out.println("Number is: " + inputNumber);

          float inputFloat = scan.nextFloat();
          System.out.println("Float is: " + inputFloat);

          double inputDouble = scan.nextDouble();
          System.out.println("Double is: " + inputDouble);

          scan.close(); //Close the scanner to hide the warning 
     }
}