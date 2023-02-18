import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws Exception {
      Scanner Scan = new Scanner(System.in);

      System.out.print("Input Pattern: ");
      int input = Scan.nextInt();

      for(int i = 2; i <= input - 1; i++)
      {
          for(int j = 1; j <= 15; j++)
          {
              if(j >= i && j <= 6 + i)
              {
                  System.out.print("*" + i);
              }
              else
              {
                  System.out.print(" ");
              }
          }

          System.out.print("\n");
      }

      Scan.close();
  }
}