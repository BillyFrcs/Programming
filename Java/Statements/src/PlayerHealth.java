public class PlayerHealth {
    public static void main(String args[]) throws Exception {
        PlayerHealth playerHealth = new PlayerHealth();

        playerHealth.Health();
    }

    public void Health()
    {
        boolean player = true;
        boolean enemy = false;

        int playerHealth = 100;

        if (enemy != player)
        {
            System.out.println("Enemy attack player");

            playerHealth = 0; // Update player health

            if (playerHealth <= 0) 
            {
                System.out.println("Player is dead");
            }
        }
        else 
        {
            System.out.println("Enemy is not attack player(Lazy)");
        }
    }
}
