void main(List<String> arguments) {
  bool value = true, V = false;
  print('$value, $V');

  returnCondition();
}

bool returnCondition() {
  bool condition = true;
  if (condition != false) {
    print("Condition $condition");
  } else {
    print("Condition false");
  }

  return condition;
}
