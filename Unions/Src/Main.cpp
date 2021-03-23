#include <iostream>

using namespace std;

struct Vector {
  float x, y;
};

struct vectorTwo {
  union {
    struct {
      float a, b, c, d;
    };

    struct {
      Vector k, l;
    };
  };
};

void printVector(const Vector &vector) {
  cout << vector.x << ", " << vector.y << endl;
}

int main() {

  // Basics of union
  struct Union {
    union {
      float a;
      int b;
    };
  };

  Union var;

  var.a = 1.3f;
  var.b = 19;

  cout << "Union a = " << var.a << endl;
  cout << "Union b = " << var.b << endl;

  cout << endl;

  vectorTwo vector = {1.0f, 2.0f, 3.0f, 4.0f};
  printVector(vector.k);
  printVector(vector.l);

  vector.c = 300.0f;

  cout << "==============" << endl;

  printVector(vector.k);
  printVector(vector.l);

  return 0;
}