import 'dart:io';

void main(List<String> arguments) {
  stdout.write('Enter number: ');
  var num = int.parse(stdin.readLineSync()!);

  for (var i = 1; i <= num; i++) {
    for (var j = 1; j <= i; j++) {
      stdout.write('* ');
    }
    print("\n");
  }
}
