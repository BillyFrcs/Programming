import java.util.Scanner;

public class ReverseString
{
	public static void main(String[] args) {
        Scanner Scan = new Scanner(System.in);
        
        System.out.print("Enter something to reverse: ");

        String text = Scan.nextLine();
        
		char[] arr = text.toCharArray();
		
		for (int i = arr.length - 1; i >= 0; i--)
        {
            System.out.print(arr[i]);
        }

        Scan.close();
	}
}
