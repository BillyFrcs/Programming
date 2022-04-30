import 'dart:io';

void main(List<String> arguments) {
  flowBreak();

  print('\n');

  flowContinue(1);
}

void flowBreak() {
  for (var i = 1; i <= 10; i++) {
    print(i);
    if (i % 5 == 0) {
      break;
    }
  }
}

void flowContinue(num a) {
  while (true) {
    for (a; a < 20; a++) {
      if (a == 10) {
        continue;
      }
      print(a);
    }
  }
}

void testing() {
  for (int i = 11; i < 20; i++) {
    if (i % 11 == 0) {
      continue;
    }

    stdout.write('$i ');
    if (i % 5 == 0) {
      break;
    }
  }
}
