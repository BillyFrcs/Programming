public class SepedaMotor extends KendaraanDarat {
     private float _motorSpeed;

     public SepedaMotor(String vehicleType, float speed) {
          super(vehicleType, speed);

          _motorSpeed = 100f;
     }

     @Override
     protected void Move() {
          super.Move();
          System.out.println("Sepeda Motor bergerak dengan kecepatan " + _motorSpeed + " km/jam");
     }
}
