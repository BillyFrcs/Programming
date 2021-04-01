#include <iostream>

using namespace std;

void continueWhileLoops()
{
     int x = 1;

     while (x < 20)
     {
          if (x == 5)
          {
               x++;
               continue;
          }
          cout << x << endl;
          x++;
     }
}

int main()
{
     continueWhileLoops();

     return 0;
}