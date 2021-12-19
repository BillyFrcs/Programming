public class App {
    public static void main(String[] args) throws Exception {
        int[] number = new int[20];

        App.EvenRow(number);

        App.OddRow(number);
    }

    private static void EvenRow(int[] number) {
        int counter = 0;

        System.out.print("Even row numbers: ");

        int i = 0;

        while (i++ < number.length) {
            if (i % 2 == 0) {
                System.out.print(i + " ");

                counter += i;
            }
        }

        System.out.println("\nSum of even row numbers: " + counter);
    }

    private static void OddRow(int[] number) {
        int counter = 0;

        System.out.print("\nOdd row numbers: ");

        int i = 0;

        while (i++ < number.length) {
            if (i % 2 == 1) {
                System.out.print(i + " ");

                counter += i;
            }
        }

        System.out.println("\nSum of odd row numbers: " + counter);
    }
}
