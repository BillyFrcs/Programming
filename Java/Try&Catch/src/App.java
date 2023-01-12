import java.util.*; // Use this to import all the java util packages

public class App 
{
    private String _name;

    private static App _MyApp = new App();

    public static void main(String[] args) throws Exception 
    {
        _MyApp.HandleInputData();
    }

    private void HandleInputData()
    {
        try 
        {
            // Check if the name is empty(null) or not
            if (this._name.isEmpty())
            {
                throw new NullPointerException();
            }
        }
        catch (NullPointerException ErrorException)
        {
            System.err.println("Error type: " + ErrorException.getMessage());

            System.out.print("You didn't enter your name yet!, please enter your name: ");

            _MyApp.ScanData();

            _MyApp.Print("Hello " + this._name);
        }
    }

    private void Print(String message)
    {
        this._name = message;

        System.out.println(this._name);
    }

    private void ScanData()
    {
        Scanner Scan = new Scanner(System.in);

        this._name = Scan.nextLine();

        Scan.close();
    }
}
