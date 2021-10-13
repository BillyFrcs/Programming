public class App {
    public static void main(String[] args) throws Exception {
        int[] arr = { 1, 2, 3, 4, 5 };

        for (int i = 0; i < arr.length; i++) // Normal loop
        {
            System.out.println(" " + i);
        }
        
        for (int i : arr) // For each
        {
            System.out.print(" " + i);
        }
    }
}
