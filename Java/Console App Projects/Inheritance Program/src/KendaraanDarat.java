public class KendaraanDarat extends Kendaraan {
     public KendaraanDarat(String vehicleName, float maxSpeed) {
          super(vehicleName, maxSpeed);

          System.out.println("Vehicle name\t: " + vehicleName);
          System.out.println("Max speed\t: " + String.format("%.0f", maxSpeed) + " km");
     }
}
