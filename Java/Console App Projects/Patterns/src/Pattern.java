public class Pattern {
    public static void main(String[] args) throws Exception {

        // Pattern.Pattern1(20);

        Pattern.Pattern2(1, 20);

        // Pattern.Pattern3(20);
    }

    public static void Pattern1(int number) {
        StringBuilder Builder = new StringBuilder();

        int i = 1;

        do {
            Builder.append(i + " ");

            if (i < 10) {
                Builder.append("\n");
            }

        } while (i++ < number);

        System.out.println(Builder.toString());
    }

    private static void Pattern2(int iteration, int number) {
        StringBuilder Builder = new StringBuilder();

        do {
            // System.out.println(iteration);
            Builder.append(iteration + " ");

            if (iteration <= 10) {
                Builder.append("\n");
            }

        } while (iteration++ < number);

        System.out.println(Builder.toString());
    }

    private static void Pattern3(int number) {
        StringBuilder Builder = new StringBuilder();

        for (int i = 1; i < number; i++) {

            Builder.append(i + " ");

            if (i < 10) {
                Builder.append("\n");
            }
        }

        System.out.println(Builder.toString());
    }
}
