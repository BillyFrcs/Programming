import java.util.Scanner;

public class App {

    private static int _number;

    private static Scanner _ScanNumber = new Scanner(System.in);

    public static void main(String[] args) throws Exception {
        System.out.print("Enter a number: ");
        App._number = App._ScanNumber.nextInt();

        App._ScanNumber.close();

        String counter = App._number > 0 ? "Positive" : "Negative";

        System.out.println("Number of " + App._number + " is " + counter);
    }
}
