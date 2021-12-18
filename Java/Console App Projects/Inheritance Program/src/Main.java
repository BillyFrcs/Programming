public class Main {
     public static void main(String[] args) throws Exception {
          SepedaMotor MotorCycle = new SepedaMotor("Trail RXF", 400f, "Ground vehicle(MotorCycle)");
          MotorCycle.Move(100f);

          PerahuLayar SailBoats = new PerahuLayar("SeaBee", 200f, "Marine vehicle(SailBoats)");
          SailBoats.Move(70f);
     }
}
