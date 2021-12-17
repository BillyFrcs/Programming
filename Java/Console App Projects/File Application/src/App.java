import java.util.*;
import java.io.*;
import java.nio.file.Files;

public class App {
    private String _message;
    private String _fileName;
    private String _newFileName;
    private int _operation;

    private Scanner _ScanData = new Scanner(System.in);

    public static void main(String[] args) throws Exception {
        App MyApp = new App();

        FileOutputStream MyFile = null;
        FileInputStream ShowMyFile = null;
        BufferedWriter WriteFile = null;

        File FileData = null;

        System.out.println("1.Make file(.txt or .md)\n2.Write file\n3.Show File\n4.Rename file\n5.Delete file");

        System.out.print("\nChoose Operation(Enter a Number): ");

        MyApp._operation = Integer.parseInt(MyApp._ScanData.nextLine());

        switch (MyApp._operation) {
            case 1:
                MyApp.CreateNewFile(MyFile);
                break;

            case 2:
                System.out.print("Enter file name: ");
                MyApp._fileName = MyApp._ScanData.nextLine();
                MyApp.WriteInFile(WriteFile, FileData, MyApp._message);
                break;

            case 3:
                MyApp.ShowFile(ShowMyFile, FileData);
                break;

            case 4:
                System.out.print("Enter an existing file name that you want to rename: ");
                MyApp._fileName = MyApp._ScanData.nextLine();
                MyApp.RenameFile(FileData);
                break;

            case 5:
                System.out.print("Enter an existing file name to delete: ");
                MyApp._fileName = MyApp._ScanData.next();
                MyApp._ScanData.close();
                MyApp.DeleteFile(FileData, MyApp._fileName);
                break;

            default:
                System.out.println("Invalid operation!");
                break;
        }

        MyApp._ScanData.close();
    }

    private void CreateNewFile(FileOutputStream MyFile) {
        try {
            System.out.print("Enter file name: ");
            _fileName = _ScanData.next();
            _ScanData.close();

            MyFile = new FileOutputStream(_fileName);

            System.out.println("\nCreate file " + _fileName + " successfully.");

            MyFile.close();
        } catch (IOException error) {
            System.out.println("Error: " + error.getMessage());
        }
    }

    private void WriteInFile(BufferedWriter MyFile, File FileData, String message) {
        FileData = new File(_fileName);

        _message = message;

        if (FileData.exists()) {
            try {
                MyFile = new BufferedWriter(new FileWriter(_fileName));

                System.out.print("Enter something: ");
                _message = _ScanData.next();
                _ScanData.close();

                char[] newMessage = _message.toCharArray();

                for (char data : newMessage) {
                    MyFile.write(data);
                }

                System.out.println("Successfully written in file.");

                MyFile.close();
            } catch (IOException error) {
                System.out.println("Error: " + error.getMessage());
            }
        } else {
            System.out.println("File not found!");
        }
    }

    private void ShowFile(FileInputStream MyFile, File FileData) {
        System.out.print("Enter file name: ");
        _fileName = _ScanData.next();
        _ScanData.close();

        FileData = new File(_fileName);

        if (FileData.exists()) {
            try {
                FileInputStream input = new FileInputStream(_fileName);

                int i = input.read();

                while (i != -1) {
                    System.out.print((char) i);

                    i = input.read();
                }

                input.close();
            }

            catch (Exception error) {
                error.getStackTrace();
            }
        } else {
            System.out.println("File not found!");
        }
    }

    private void RenameFile(File FileData) throws IOException {
        FileData = new File(_fileName);

        if (FileData.exists()) {
            System.out.println("Found existing file " + _fileName);

            System.out.print("\nEnter the new file name that you want: ");
            _newFileName = _ScanData.next();
            _ScanData.close();

            File NewFile = new File(FileData.getParent(), _newFileName);

            Files.move(FileData.toPath(), NewFile.toPath());

            System.out.println("Renamed file successfully.");
        } else {
            System.out.println("File not found!");
        }
    }

    private void DeleteFile(File FileData, String fileName) throws ExceptionInInitializerError {
        this._fileName = fileName;

        FileData = new File(_fileName);

        if (FileData.exists()) {
            FileData.delete();

            System.out.println("Delete file " + fileName + " successfully.");
        } else {
            System.out.println("File not found!");
        }
    }
}
