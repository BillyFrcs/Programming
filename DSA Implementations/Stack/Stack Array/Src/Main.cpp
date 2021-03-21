#include <iostream>
#define MAX 5
#define TOP 0

using namespace std;

// int Max = 5, top = 0;

string arrData[5];

void dataArr(string data) {
  int top = 0;
  if (TOP >= MAX) {
    cout << "Data full" << endl;
  } else {
    arrData[TOP] = data;
    top++;
  }
}

void displayDataArr() {
  cout << "Data stack array: " << endl;

  for (int i = MAX - 1; i >= 0; i--) {
    if (arrData[i] != "") {
      cout << "Data: " << arrData[i] << endl;
      i--;
    }
  }
}

int main() {

  //Data 1
  dataArr("Billy");
  displayDataArr();

  cout << endl;

  //Data 2
  dataArr("Franscois");
  displayDataArr();

  return 0;
}