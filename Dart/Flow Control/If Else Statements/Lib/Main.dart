void main(List<String> arguments) {
  //int number = int.tryParse(stdin.readLineSync());
  int number = 5;

  //Method 1
  if (number > 0) {
    print("Positive");
  } else if (number < 0) {
    print("Negative");
  } else {
    print("NULL");
  }

  print("\n");

  //Method 2
  String output;
  if (number > 0) {
    output = "Positive";
  } else {
    output = "Negative or NULL";
  }

  //Method 3
  output = (number > 0) ? "Positive" : "Negative";

  print(output);
}
