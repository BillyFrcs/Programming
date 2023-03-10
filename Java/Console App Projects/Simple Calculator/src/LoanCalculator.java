import java.util.Scanner;

public class LoanCalculator
{
	public static void main(String[] args) {
		Scanner Scan = new Scanner(System.in);

		System.out.print("Enter the amount: ");

		int amount = Scan.nextInt();

		for (int i = 0; i < 3; i++)
        {
            amount -= amount * 0.1;
        }
        
        Scan.close();

		System.out.println(amount);
	}
}