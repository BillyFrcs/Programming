public class Kendaraan {
    protected String _vehicleType;
    protected float _speed;
    protected float _move;

    public Kendaraan(String vehicleType, float speed) {
        _vehicleType = vehicleType;
        _speed = speed;

        Print();
    }

    protected void Move() {
        _move = _speed * 10f;

        System.out.println("Kendaraan " + _vehicleType + " bergerak dengan kecepatan " + _move + " km/jam");
    }

    private void Print() {
        System.out.println("Vehicle type: " + _vehicleType);
        System.out.println("Vehicle Speed: " + _speed);
    }
}
