public class Weapon {
    private String weaponName = "M4";

    public static void main(String args[]) throws Exception
    {
        Weapon PlayerWeapon = new Weapon();

        PlayerWeapon.ChooseWeapon();
    }

    protected void ChooseWeapon()
    {
        switch(this.weaponName)
        {
            case "Melee":
                System.out.println("Player is using melee weapon");
                break;
                
            case "M4":
                System.out.println("Player is using M4");
                break;

            case "Bazoka":
                System.out.println("Player is using Bazoka");
                break;

            default:
                System.out.println("Player is using hand");
                break;
        }
    }
}
