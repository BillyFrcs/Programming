//This function should return a value
double average() {
  List<int> number = [31, 52, 63, 85, 23];
  dynamic sum = 0, average, size = 5;

  for (dynamic i = 0; i < size; i++) {
    sum += number[i];
  }

  average = (sum / size);

  print(average);

  return average;
}

var fibonacci = [0, 1, 1, 2, 3, 5, 8, 13];

void main(List<String> arguments) {
  text();

  average();

  fibonacci.forEach; //Default for print all the list

  print(fibonacci);
}

//Lambda function (anonymous function)
Function text = () => print('Lambda function');
