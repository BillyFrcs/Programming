public class Main {
     public static void main(String[] args) throws Exception {
          Kendaraan MyVehicle = new Kendaraan("Darat", 50f);
          MyVehicle.Move();

          KendaraanDarat GroundVehicle = new KendaraanDarat("Ground", 100f);

          KendaraanLaut WaterVehicle = new KendaraanLaut("Water", 50f, "Perahu Layar");

          SepedaMotor MotorCycle = new SepedaMotor("Ground", 150f);
          MotorCycle.Move();

          PerahuLayar Ship = new PerahuLayar("Sea", 75f, "Perahu Layar");
          Ship.Move();
     }
}
