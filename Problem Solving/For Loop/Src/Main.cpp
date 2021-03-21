#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
  int a, b;
  int n = 0;
  string arr[9] = {"one", "two",   "three", "four", "five",
                   "six", "seven", "eight", "nine"};

  cin >> a >> b;

  if ((a <= 9) && (b <= 9)) {

    for (n = a; n <= b; n++) {
      cout << arr[n - 1] << endl;
    }

  } else if ((a <= 9) && (b > 9)) {

    for (n = a; n <= 9; n++) {
      cout << arr[n - 1] << endl;
    }

    for (n = 10; n <= b; n++) {

      if (n % 2 == 0) {
        cout << "even" << endl;
      } else {
        cout << "odd" << endl;
      }

    }
  }

  else {

    for (n = a; n <= b; n++) {

      if (n % 2 == 0) {
        cout << "even" << endl;
      } else {
        cout << "odd" << endl;
      }

    }

  }

  return 0;
}