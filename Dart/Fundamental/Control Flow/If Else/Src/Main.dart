import 'dart:io';

void main(List<String> arguments) {
  num a = 8, b = 35;
  isTrue(a, b);

  conditionalExpression();

  //Conditional expression
  dynamic c = "Billy", d = "Franscois";

  var temp = c ?? d;

  print(temp);

  //Calculate value
  stdout.write('Enter grade letter: ');

  var grade = stdin.readLineSync();
  print("The grade is: ${calculateGrade(grade)}");
}

bool isTrue(num a, num b) {
  if (a > 5) {
    print("True");
    return true;
  } else if (b < 20) {
    print("False");
    return false;
  } else {
    print('Invalid');
  }

  return true;
}

void conditionalExpression() {
  var x = 5, y = 9;

  var value = x < y ? "True" : "False";

  print(value);
}

calculateGrade(var value) {
  num v = 100;
  if (value == 'a' || value == 'A') {
    return v;
  } else if (value == 'b' || value == 'B') {
    return v = 90;
  } else if (value == 'c' || value == 'C') {
    return v = 80;
  }
}
