import 'dart:io';

void main(List<String> arguments) {
  simpleCalculator();
}

void simpleCalculator() {
  stdout.write('Enter first number: ');
  var firstNum = num.parse(stdin.readLineSync()!);

  stdout.write('Choose operator (+, -, *, /): ');
  var operator = stdin.readLineSync();

  stdout.write('Enter second number: ');
  var secondNum = num.parse(stdin.readLineSync()!);

  do {
    switch (operator) {
      case '+':
        print("Result = ${firstNum + secondNum}");
        break;

      case '-':
        print("Result = ${firstNum - secondNum}");
        break;

      case '*':
        print("Result = ${firstNum * secondNum}");
        break;

      case '/':
        print("Result = ${firstNum / secondNum}");
        break;

      default:
        print('Error operator');
        break;
    }
  } while (operator == true);
}
