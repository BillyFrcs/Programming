void main() {
  print(returnValue());

  print(myName());

  print(myAge());

  periphery(5.5, 2.4);
}

returnValue() {
  int a = 19;

  return a;
}

String myName() => "Billy";

bool myAge() {
  int age = 18;

  if (age >= 16) {
    return true;
  } else {
    return false;
  }
}

double periphery(double a, double b) {
  var result = a * b;

  print("Result = $result");

  return result;
}
