import java.util.Scanner;

class Drawing {
     public static void main(String args[]) {
          /*
           * Sample input 6 2
           */

          Scanner scan = new Scanner(System.in);
          int n = scan.nextInt(), p = scan.nextInt();

          System.out.println(pageCount(n, p));

          scan.close();
     }

     static int pageCount(int n, int p) {
          int a = n / 2, b = p / 2;

          int counter = a - b;

          return Math.min(b, counter);
     }
}