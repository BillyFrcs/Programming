#include <iostream>
#include <array>

using namespace std;

int main()
{

     string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Ferary"};

     for (int i = 0; i < 5; i++)
     {
          cout << cars[i] << "\n";
     }

     cout << endl;

     int a[8] = {};
     int x = 3;

     for (int i = 0; i < 6; i++)
     {
          a[i] = ++x;
     }

     cout << a[4] + a[5] * a[6] << endl;

     return 0;
}