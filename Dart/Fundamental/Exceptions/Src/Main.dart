void main(List<String> arguments) {
  errorExceptionsCalculate();

  exceptions();
}

void errorExceptionsCalculate() {
  try {
    dynamic a = 3, b = 0;
    print(a ~/ b);
    // ignore: deprecated_member_use
  } on IntegerDivisionByZeroException {
    print("Couldn't divide by zero");
  }
}

void exceptions() {
  try {
    var begin = true;
    print(begin);
  } catch (begin) {
    var end = false;
    print(end);
  } finally {
    print('Execute');
  }
}
