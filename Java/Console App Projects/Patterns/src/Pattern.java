public class Pattern {
    public static void main(String[] args) throws Exception {

        Pattern.Pattern1(1, 20);

        // Pattern.Pattern2(20);

        Pattern.Pattern3(30);
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

            if (i < 10) {
                Builder.append("\n");
            }
        }

        System.out.println(Builder.toString());
    }

    private static void Pattern3(int i) {
        do {
            System.out.print(i + " ");
            i--;
        } while (i >= 16);

        int j = 1;

        do {
            System.out.print(j + " ");
            j++;
        } while (j <= 15);
    }
}
