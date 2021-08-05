import java.util.*;

public class Staircase {
     public static void main(String args[]) throws Exception {
          /*
           * Sample input 6
           */

          Scanner input = new Scanner(System.in);
          int n = input.nextInt();

          stairCase(n);

          input.close();
     }

     static void stairCase(int n) {
          for (int i = 0; i < n; i++) {
               for (int j = (i + 1); j < n; j++) {
                    System.out.print(" ");
               }
               for (int k = n - (i + 1); k < n; k++) {
                    System.out.print("#");
               }
               System.out.println();
          }
     }
}
