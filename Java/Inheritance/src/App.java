public class App extends Player {

    protected void UpdatePlayer()
    {
        super.UpdatePlayer();
    }

    @Override
    protected float GetHealth(float newHealth)
    {
        return newHealth = 300f;
    }

    public static void main(String[] args) throws Exception {

        Player player = new Player();

        System.out.println("Player name: " + player.name);
        System.out.println("Player health: " + (int)player.health);
        System.out.println("Player weapon: " + player.weapon);
        System.out.println("Player damage: " + player.damage);

        player.PlayerMovement();
        System.out.println("New Player health: " + (int)player.GetHealth(500f));

        App app = new App();

        System.out.println("New Player health: " + (int)app.GetHealth(200f));
        app.UpdatePlayer();
    }
}
