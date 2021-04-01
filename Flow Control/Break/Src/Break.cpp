#include <iostream>

using namespace std;

void whileBreakLoops()
{
     int i = 0;

     while (i < 10)
     {
          i++;
          cout << i << endl;
          if (i == 5)
          {
               break;
          }
     }
}

void forBreakLoops()
{

     for (int i = 1; i <= 10; i++)
     {
          //Break condition here
          if (i == 5)
          {
               break;
          }
          cout << i << endl;
     }
}

void sumBreak()
{
     int num;
     int sum = 0;

     while (true)
     {
          cout << "Num = ";
          cin >> num;
          
          //Break program after input -number
          if (num < 0)
          {
               break;
          }

          sum += num;
     }

     cout << "The sum is = " << sum << endl;
}

int main()
{

     whileBreakLoops();

     cout << endl;

     forBreakLoops();

     cout << endl;

     sumBreak();

     return 0;
}