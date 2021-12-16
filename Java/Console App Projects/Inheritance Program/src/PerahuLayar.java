public class PerahuLayar extends KendaraanLaut {
     private static float _shipSpeed;

     public PerahuLayar(String vehicleType, float speed, String vehicleName) {
          super(vehicleType, speed, vehicleName);

          _shipSpeed = 55f;
     }

     @Override
     protected void Move() {
          super.Move();

          System.out.println("Perahu Layar bergerak dengan kecepatan " + _shipSpeed + " km/jam");

          System.out.println("Ship speed: " + ShipSpeed());
     }

     private static float ShipSpeed() {
          return _shipSpeed;
     }
}