import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        Scanner Input = new Scanner(System.in);

        System.out.print("Input a number: ");
        int inputNumber = Input.nextInt();

        Input.close();

        App.EvenOddNumber(inputNumber);
    }

    private static void EvenOddNumber(int inputNumber) {
        if (inputNumber % 2 == 0) {
            System.out.println(inputNumber + " is an even number.");
        } else {
            System.out.println(inputNumber + " is an odd number.");
        }
    }
}
