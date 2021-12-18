public class KendaraanLaut extends Kendaraan {
     public KendaraanLaut(String vehicleName, float maxSpeed) {
          super(vehicleName, maxSpeed);

          System.out.println("\nVehicle name\t: " + vehicleName);
          System.out.println("Max speed\t: " + String.format("%.0f", maxSpeed) + " km");
     }
}
