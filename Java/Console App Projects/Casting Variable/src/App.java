public class App {
    public static void main(String[] args) throws Exception {
        System.out.println("Casting int to double: " + AutomaticCasting(19));
        System.out.println("Casting float to long: " + ManualCasting(08.0f));
    }

    private static double AutomaticCasting(int intNumber) {
        double doubleNumber = intNumber;

        return doubleNumber;
    }

    private static long ManualCasting(float floatNumber) {
        long longNumber = (long) floatNumber;

        return longNumber;
    }
}
