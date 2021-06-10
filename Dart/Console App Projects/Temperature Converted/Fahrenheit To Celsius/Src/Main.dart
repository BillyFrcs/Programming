import 'dart:io';

//Temperature converted (Fahrenheit to celsius)
void main(List<String> arguments) {
  temperatureConverted();
}

void temperatureConverted() {
  stdout.write('Enter num fahrenheit: ');
  int fahrenheit = int.parse(stdin.readLineSync()!); //Null safety

  dynamic celsius = (fahrenheit - 32) * 5 / 9;

  print('Fahrenheit level is ${fahrenheit}f');
  print('Convert to Celsius level is = ${celsius.toStringAsFixed(0)}c');
}
