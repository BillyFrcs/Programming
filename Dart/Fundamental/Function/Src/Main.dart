import 'dart:io';

void main(List<String> arguments) {
  Print('Billy', 18);

  var a = 4, b = 8;

  print('Average $a and $b is = ${average(a, b).toStringAsFixed(0)}');

  stdout.write("Enter first number: ");
  num c = num.parse(stdin.readLineSync()!);

  stdout.write("Enter second number: ");
  num d = num.parse(stdin.readLineSync()!);

  print('Result sum = ${Sum(c, d)}');
}

//Arrow syntax function
double average([var a, var b]) => (a * b / 2);

void Print(String name, int age) => print('$name, $age');

//Default function
int Sum(var c, var d) {
  int e = (c * d);

  return e;
}
