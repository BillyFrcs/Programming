import 'dart:io';

void main(List<String> arguments) {
  CalculateCalculator CC = new CalculateCalculator();

  CC.getOperation();
  CC.calculateCalculator();
}

class GetCalculator {
  dynamic firstNum, secondNum;
  var arithmetic;

  void getOperation() {
    print('Choose operator');
    print('1. Addition (+)');
    print('2. Subtraction (-)');
    print('3. Multiplication (*)');
    print('4. Divided (/)');
    print('5. Modulo (%)\n');

    stdout.write('Choose operator: ');
    arithmetic = num.parse(stdin.readLineSync()!);

    stdout.write("Enter first number: ");
    firstNum = num.parse(stdin.readLineSync()!);

    stdout.write("Enter second number: ");
    secondNum = num.parse(stdin.readLineSync()!);
  }
}

class CalculateCalculator extends GetCalculator {
  void calculateCalculator() {
    switch (arithmetic) {
      case 1:
        if (arithmetic == 1) {
          print('Result $firstNum + $secondNum = ' + '${firstNum + secondNum}');
        }
        break;

      case 2:
        if (arithmetic == 2) {
          print('Result $firstNum - $secondNum = ' + '${firstNum - secondNum}');
        }
        break;

      case 3:
        if (arithmetic == 3) {
          print('Result $firstNum * $secondNum = ' + '${firstNum * secondNum}');
        }
        break;

      case 4:
        if (arithmetic == 4) {
          print('Result $firstNum / $secondNum = ' + '${firstNum / secondNum}');
        }
        break;

      case 5:
        if (arithmetic == 5) {
          print(
              'Result $firstNum % $secondNum = ' + '${firstNum % (secondNum)}');
        }
        break;
    }
  }
}
