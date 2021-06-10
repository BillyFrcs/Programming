void main(List<String> arguments) {
  int a = 5, b = 3;

  print('Result = ${getCalculate(a, b)}');

  //Immutable variable
  var x = 10, y = 10, z = x + y;

  print(z);

  //Fibonacci
  print('Fibonacci is ${fibonacci(10)}');
}

//Functional paradigm
int getCalculate(int a, int b) {
  return (a * b);
}

//Using recursion functions
int fibonacci(int number) {
  if (number <= 0) {
    return 0;
  } else if (number == 1) {
    return 1;
  } else {
    //Called the function again here
    return fibonacci(number - 1) + fibonacci(number - 2);
  }
}
