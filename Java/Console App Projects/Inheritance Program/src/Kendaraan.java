public class Kendaraan {
    private String _vehicleName;
    private boolean _isMove = false;

    public Kendaraan(String vehicleName, float maxSpeed) {
        this._vehicleName = vehicleName;
    }

    protected void Move(float speed) {
        if (!_isMove) {
            System.out.println(this._vehicleName + " is move at speed " + String.format("%.0f", speed) + " km/h");
        }
    }
}
