public class KendaraanDarat extends Kendaraan {
     protected int _vehicleNumber;

     public KendaraanDarat(String vehicleType, float speed) {
          super(vehicleType, speed);

          _vehicleNumber = 4536;

          VehicleNumber();
     }

     private void VehicleNumber() {
          System.out.println("Vehicle number: " + _vehicleNumber);
     }
}
