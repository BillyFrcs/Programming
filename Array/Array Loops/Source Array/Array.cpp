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

     cout << endl;

     //Discount program with ages
     int ages[5];

     for (int i = 0; i < 5; ++i)
     {
          cin >> ages[i];
     }

     float perc;
     float min = ages[0];

     for (int x = 1; x < 5; ++x)
     {
          if (min > ages[x])
               min = ages[x];
     }

     perc = 50 - (50 * min / 100);
     cout << perc << endl;

     return 0;
}