#include <bits/stdc++.h>

using namespace std;

int main() {
  int i = 6, inputNum;
  double d = 5.0, inputFloatingNum;
  string s = " Franscois", printStr;

  cin >> inputNum;
  cin >> inputFloatingNum;

  cin.ignore();
  getline(cin, printStr);

  cout << (i + inputNum) << endl;

  cout << setprecision(1) << fixed << (d + inputFloatingNum) << endl;

  s = (printStr + s);
  cout << s << endl;

  return 0;
}