import java.util.Scanner;

public class SimpleCalculator {

    private char _operator;

    private double _number1;
    private double _number2;
    private double _result;

    public SimpleCalculator() {
        // create an object of Scanner class
        Scanner ScanInput = new Scanner(System.in);

        System.out.print("Choose an operator(+, -, *, /): ");
        _operator = ScanInput.next().charAt(0);

        System.out.print("Enter first number: ");
        _number1 = ScanInput.nextDouble();

        System.out.print("Enter second number: ");
        _number2 = ScanInput.nextDouble();

        if (_operator == '+') {
            _result = _number1 + _number2;

            System.out.println((int) _number1 + " + " + (int) _number2 + " = " + Math.round(_result));
        } else if (_operator == '-') {
            _result = _number1 - _number2;

            System.out.println((int) _number1 + " - " + (int) _number2 + " = " + Math.round(_result));
        } else if (_operator == '*') {
            _result = _number1 * _number2;

            System.out.println((int) _number1 + " * " + (int) _number2 + " = " + Math.round(_result));
        } else if (_operator == '/') {
            _result = _number1 / _number2;

            System.out.println(_number1 + " / " + _number2 + " = " + _result);
        } else {
            System.out.println("Invalid operator!");
        }

        ScanInput.close();
    }

    public static void main(String[] args) throws Exception {
        SimpleCalculator SimpleCalculatorApp = new SimpleCalculator();
    }
}
