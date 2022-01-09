public class Pattern {
    public static void main(String[] args) throws Exception {

        Pattern.Pattern1(1, 20);

        System.out.println("\n");

        Pattern.Pattern2(21);

        System.out.println("\n");

        Pattern.Pattern3(30, 1);
    }

    private static void Pattern1(int iteration, int number) {
        StringBuilder Builder = new StringBuilder();

        do {
            Builder.append(iteration + " ");

            if (iteration <= 10) {
                Builder.append("\n");
            }

        } while (iteration++ < number);

        System.out.println(Builder.toString());
    }

    private static void Pattern2(int number) {
        StringBuilder Builder = new StringBuilder();

        for (int i = 1; i < number; i++) {

            Builder.append(i + " ");

            if (i <= 10) {
                Builder.append("\n");
            }
        }

        System.out.println(Builder.toString());
    }

    private static void Pattern3(int i, int j) {
        do {
            System.out.print(i-- + " ");
        } while (i >= 16);

        do {
            System.out.print(j++ + " ");
        } while (j <= 15);
    }
}
