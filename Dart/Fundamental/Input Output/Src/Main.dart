import 'dart:io';

void main(List<String> arguments) {
  stdout.write('Name: ');
  dynamic name = stdin.readLineSync();

  stdout.write('Age: ');
  var age = stdin.readLineSync();

  print('Hey ${name}, Your age is ${age}');
}
