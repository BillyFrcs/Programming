void main(List<String> arguments) {
  for (int counter = 0; counter < 5; counter++) {
    print("For loops increment");
  }

  print("\n");

  for (int i = 5; i >= 1; i -= 1) {
    //Remember (i -= 1) is like (i = i - 1)
    print("For loops decrement");
  }

  print("\n");

  int a = 0;

  while (a < 5) {
    print("While to " + a.toString());
    a += 1;
  }

  print("\n");

  int x = 1;
  do {
    print("Do while to " + x.toString());
    x++;
  } while (x < 5);

  print("\n");

  int m, n;
  m = 15;
  n = ++m; //Can change the function
  print(m.toString() + " and " + n.toString());
}
