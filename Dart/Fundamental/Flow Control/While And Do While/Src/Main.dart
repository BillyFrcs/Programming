import 'dart:io';

void main(List<String> arguments) {
  var value = 1;

  while (value < 6) {
    print(value);
    value++;
  }

  //Validation
  validationProgram();
}

void validationProgram() {
  String username;

  bool isValid = false;

  do {
    stdout.write('Enter username (max 5 character): ');
    username = stdin.readLineSync()!;

    if (username.length < 5) {
      isValid = false;
      print("Username not valid");
    }
  } while (isValid);
}
