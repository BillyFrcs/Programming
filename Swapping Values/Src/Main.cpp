#include <iostream>

using namespace std;

int main()
{
     cout << "Swapping values with third variable \n";

     int a = 50;
     int b = 80;

     //The algorithm
     int temp = a;
     a = b;
     b = temp;

     cout << "a = " << a << endl;
     cout << "b = " << b << endl;

     cout << endl;

     cout << "Swapping values without third variable \n";

     int x = 40, z = 60;

     //The algorithm with math
     x = x + z;
     z = x - z;
     x = x - z;

     cout << "x = " << x << endl;
     cout << "z = " << z << endl;

     return 0;
}