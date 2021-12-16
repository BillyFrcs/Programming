import java.util.Scanner;

public class DataStudent {
    private String _name;
    private long _NPM;
    private String _address;

    // private long _phoneNumber;
    private String _phoneNumber;
    private String _email;

    private Scanner _ScanData = new Scanner(System.in);

    public static void main(String[] args) throws Exception {
        DataStudent DataBilly = new DataStudent();

        DataBilly.SetNameStudent();
        DataBilly.SetNPMStudent();
        DataBilly.SetAddressStudent();
        DataBilly.SetPhoneNumberStudent();
        DataBilly.SetEmailStudent();

        System.out.println("\n\n===== Data Mahasiswa =====");

        DataBilly.GetDataStudent();
    }

    private void SetNameStudent() {
        // Input name
        System.out.print("Masukan Nama\t: ");

        _name = _ScanData.nextLine();
    }

    private void SetNPMStudent() {
        // Input NPM
        System.out.print("Masukan NPM\t: ");

        try {
            _NPM = Long.parseLong(_ScanData.nextLine());
        } catch (Exception error) {
            System.out.println("Error " + error.getMessage() + " NPM harus angka ajg!");

            SetNPMStudent();
        }
    }

    private void SetAddressStudent() {
        // Input address
        System.out.print("Masukan Alamat\t: ");

        _address = _ScanData.nextLine();
    }

    private void SetPhoneNumberStudent() {
        // Input phone number
        System.out.print("Masukan No.Telp\t: ");

        // _phoneNumber = Long.parseLong(_ScanData.nextLine());

        _phoneNumber = _ScanData.nextLine();
    }

    private void SetEmailStudent() {
        // Input email
        System.out.print("Masukan Email\t: ");

        _email = _ScanData.nextLine();
    }

    private void GetDataStudent() {
        // Print all this shit
        System.out.println("Nama\t: " + _name);
        System.out.println("NPM\t: " + _NPM);
        System.out.println("Alamat\t: " + _address);
        System.out.println("No.Telp\t: " + _phoneNumber);
        System.out.println("Email\t: " + _email);
    }
}
