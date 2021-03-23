#include <iostream>

using namespace std;

// This can change with another data type
// enum is behind the scene of int
enum example : unsigned char { A, B = 5, C };

enum var : int { num = 50 };

int main() {

  // Basics of enum
  example value = B;

  cout << value << endl;

  cout << endl;

  var dec = num;

  cout << dec << endl;

  return 0;
}