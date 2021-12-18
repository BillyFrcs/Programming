public class SepedaMotor extends KendaraanDarat {
     private static String _vehicleName;
     private static float _speed;

     public SepedaMotor(String vehicleName, float speed, String vehicleType) {
          super(vehicleName, speed);

          this._vehicleName = vehicleName;
          this._speed = speed;

          System.out.println("Vehicle type\t: " + vehicleType);
     }

     @Override
     protected void Move(float speed) {
          super.Move(speed);
     }
}
