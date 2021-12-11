public class Player {
     protected String name;
     protected float health;
     protected String weapon;
     protected int damage;

     private float movementSpeed;
     private boolean isMove;
 
     public Player()
     {
         this.name = "Billy";
         this.health = 100f;
         this.weapon = "M4";
         this.damage = 50;

         this.movementSpeed = 5f;
         this.isMove = false;
     }

     protected void PlayerMovement()
     {
          if (movementSpeed > 0f)
          {
               isMove = true;

               System.out.println("Player is moving");
          }
          else if (movementSpeed == 0f)
          {
               isMove = false;

               System.out.println("Player is not moving");
          }
     }

     protected void UpdatePlayer()
     {
          this.name = "John";

          System.out.println("Update player name: " + name);
     }

     protected float GetHealth(float newHealth)
     {
          return newHealth;
     }
}
