public class Conversion {
    public static void main(String[] args) throws Exception {
        final int number = 2;

        Conversion.Convert(number);
    }

    private static void Convert(int number) {
        final String message;

        switch (number) {
            case 1:
                message = "One";
                System.out.println(message);
                break;

            case 2:
                message = "Two";
                System.out.println(message);
                break;

            case 3:
                message = "Three";
                System.out.println(message);
                break;

            case 4:
                message = "Four";
                System.out.println(message);
                break;

            case 5:
                message = "Five";
                System.out.println(message);
                break;

            default:
                System.out.println("Not found");
                break;
        }
    }
}
