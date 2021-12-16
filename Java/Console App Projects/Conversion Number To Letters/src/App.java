public class App {
    public static void main(String[] args) throws Exception {
        int value = 100;

        System.out.println("Convert value " + value + " to letters " + ConvertValue(value));
    }

    private static char ConvertValue(int value) throws Exception {
        char letters;

        if (value < 0) {
            throw new Exception("Value cannot to be negative!");
        }

        if (value >= 85 && value <= 100) {
            return letters = 'A';
        } else if (value >= 70 && value <= 84) {
            return letters = 'B';
        } else if (value >= 60 && value < 70) {
            return letters = 'C';
        } else if (value > 50 && value < 60) {
            return letters = 'D';
        } else if (value < 55) {
            return letters = 'E';
        }

        return letters = '0';
    }
}
