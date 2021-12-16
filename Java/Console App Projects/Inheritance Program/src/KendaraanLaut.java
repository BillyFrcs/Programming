public class KendaraanLaut extends Kendaraan {
     private String _vehicleName;

     public KendaraanLaut(String vehicleType, float speed, String vehicleName) {
          super(vehicleType, speed);

          _vehicleName = vehicleName;
     }
}
