import java.util.Scanner;

class MiniMax {
     public static void main(String args[]) throws Exception {
          /*
           * Sample input 1 2 3 4 5
           */

          Scanner sc = new Scanner(System.in);
          int[] arr = new int[5];

          for (int i = 0; i < arr.length; i++) {
               arr[i] = sc.nextInt();
          }

          getMiniMax(arr);

          sc.close();
     }

     public static void getMiniMax(int arr[]) {
          long min = 0, max = 0, sum = 0;
          min = arr[0];
          max = min;
          sum = min;

          for (int i = 1; i < arr.length; i++) {
               sum += arr[i];

               if (arr[i] < min) {
                    min = arr[i];
               } else if (arr[i] > max) {
                    max = arr[i];
               }
          }

          System.out.println((sum - max) + " " + (sum - min));
     }
}