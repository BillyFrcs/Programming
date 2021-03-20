#include <iostream>
// Const
#define LENGTH 50
#define WIDTH 13

//Macro
#define PI 3.14
#define CIRCLE(d) (PI * d)
#define DEBUG //Comment this when we want to hide program

/*/Macros
#ifdef

#endif

#ifndef

#endif*/

using namespace std;

int main() {

  //Wide 
  #ifdef DEBUG //This can use to hide the programs
  int wide = LENGTH * WIDTH;
  cout << "Result wide = " << wide << endl;
  #endif

  cout << endl;

  //Circle
  int d;
  cout << "Num diameter = ";
  cin >> d;

  float circumference = CIRCLE(d);

  cout << "Result = " << circumference << endl;


  return 0;
}