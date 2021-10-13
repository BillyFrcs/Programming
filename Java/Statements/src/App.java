public class App {
    public static void main(String[] args) throws Exception {
        boolean isAttack = false;
        boolean isShootBox = false;

        StatementsExample(isAttack, isShootBox);
    }

    private static void StatementsExample(boolean isAttack, boolean isShootBox)
    {
        isAttack = true; // Update the value of isAttack

        isShootBox = true;

        if (isAttack)
        {
            System.out.println("Player is Attack");
        }
        else if (isShootBox == true)
        {
            System.out.println("Player destroyed box");
        }
        else
        {
            System.out.print("Player hit something else");
        }
    }
}
