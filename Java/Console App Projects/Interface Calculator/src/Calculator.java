import java.util.*;

public class Calculator implements ICalculator {
    private double _firstNumber;
    private double _secondNumber;
    private double _calculate;

    private int _operator;

    private Scanner _Scan = new Scanner(System.in);

    public static void main(String[] args) throws Exception {
        Calculator CalculatorApp = new Calculator();

        CalculatorApp.ChooseOperation();

        switch (CalculatorApp._operator) {
            case 1:
                if (CalculatorApp._operator == 1) {
                    CalculatorApp.Addition(CalculatorApp._firstNumber, CalculatorApp._secondNumber);
                }
                break;

            case 2:
                if (CalculatorApp._operator == 2) {
                    CalculatorApp.Subtraction(CalculatorApp._firstNumber, CalculatorApp._secondNumber);
                }
                break;

            case 3:
                if (CalculatorApp._operator == 3) {
                    CalculatorApp.Multiplication(CalculatorApp._firstNumber, CalculatorApp._secondNumber);
                }
                break;

            case 4:
                if (CalculatorApp._operator == 4) {
                    CalculatorApp.Division(CalculatorApp._firstNumber, CalculatorApp._secondNumber);
                }
                break;

            case 5:
                if (CalculatorApp._operator == 5) {
                    CalculatorApp.Modulo(CalculatorApp._firstNumber, CalculatorApp._secondNumber);
                }
                break;

            default:
                System.out.println("Not Found, please try again!");
                break;
        }
    }

    public void ChooseOperation() {
        System.out.println("Welcome To Stupid Calculator");
        System.out.println("1.Addition(+)\n2.Subtract(-)\n3.Multiply(*)\n4.Divide(/)\n5.Modulus(%)\n");

        System.out.print("Choose Your Operation: ");

        try {
            _operator = Integer.parseInt(_Scan.nextLine());

        } catch (Exception error) {
            System.out.println("Error " + error.getMessage() + " please enter a number!");

            ChooseOperation();
        }
    }

    public void Addition(double firstNumber, double secondNumber) {
        this._firstNumber = firstNumber;
        this._secondNumber = secondNumber;

        System.out.print("Enter first number: ");
        _firstNumber = _Scan.nextDouble();

        System.out.print("Enter second number: ");
        _secondNumber = _Scan.nextDouble();

        _calculate = _firstNumber + _secondNumber;

        System.out.println("Result of addition " + (int) _firstNumber + " + " + (int) _secondNumber + " = "
                + Math.round(_calculate));
    }

    public void Subtraction(double firstNumber, double secondNumber) {
        this._firstNumber = firstNumber;
        this._secondNumber = secondNumber;

        System.out.print("Enter first number: ");
        _firstNumber = _Scan.nextDouble();

        System.out.print("Enter second number: ");
        _secondNumber = _Scan.nextDouble();

        _calculate = _firstNumber - _secondNumber;

        System.out.println("Result of subtract " + (int) _firstNumber + " - " + (int) _secondNumber + " = "
                + Math.round(_calculate));
    }

    public void Multiplication(double firstNumber, double secondNumber) {
        this._firstNumber = firstNumber;
        this._secondNumber = secondNumber;

        System.out.print("Enter first number: ");
        _firstNumber = _Scan.nextDouble();

        System.out.print("Enter second number: ");
        _secondNumber = _Scan.nextDouble();

        _calculate = _firstNumber * _secondNumber;

        System.out.println("Result of multiply " + (int) _firstNumber + " * " + (int) _secondNumber + " = "
                + Math.round(_calculate));
    }

    public void Division(double firstNumber, double secondNumber) {
        this._firstNumber = firstNumber;
        this._secondNumber = secondNumber;

        System.out.print("Enter first number: ");
        _firstNumber = _Scan.nextDouble();

        System.out.print("Enter second number: ");
        _secondNumber = _Scan.nextDouble();

        _calculate = _firstNumber / _secondNumber;

        System.out.println("Result of divide " + (int) _firstNumber + " / " + (int) _secondNumber + " = " + _calculate);
    }

    public void Modulo(double firstNumber, double secondNumber) {
        this._firstNumber = firstNumber;
        this._secondNumber = secondNumber;

        System.out.print("Enter first number: ");
        _firstNumber = _Scan.nextDouble();

        System.out.print("Enter second number: ");
        _secondNumber = _Scan.nextDouble();

        _calculate = _firstNumber % _secondNumber;

        System.out.println("Result of modulo " + (int) _firstNumber + " % " + (int) _secondNumber + " = " + _calculate);
    }
}
