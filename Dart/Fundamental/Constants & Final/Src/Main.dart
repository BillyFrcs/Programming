import 'dart:io';

void main(List<String> arguments) {
  const num pi = 3.14;
  var radius = 7;

  print('Wide circle radius is = ${circleArea(radius, pi)}');

  Final();

  const double D = 90.4;
  final Value = {1, 2, 3, 4, 5};

  print(D);
  print(Value.elementAt(3));
}

num circleArea(num radius, num pi) => pi * (radius * radius);

void Final() {
  stdout.write('Name: ');
  final name = stdin.readLineSync();

  print('Hy $name');
}
