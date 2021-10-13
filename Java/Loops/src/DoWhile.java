public class DoWhile {
    public static void main(String[] args) throws Exception {
        int i = 5;
        int j = 10;

        do {
            System.out.println("i = " + i);
            i++;
        } while (i < j && true);
    }
}
