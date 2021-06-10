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
          //Break program when enter minus number
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

void breakNestesLoops()
{
     for (int i = 1; i <= 5; i++)
     {
          for (int j = 1; j <= 5; j++)
          {
               if (i == 2)
               {
                    break;
               }
               cout << "i = " << i << ", j = " << j << endl;
          }
     }
}

int main()
{

     whileBreakLoops();

     cout << endl;

     forBreakLoops();

     cout << endl;

     sumBreak();

     cout << endl;

     breakNestesLoops();

     std::cout << "\n";

     for (int x = 1; x < 20; x++)
     {
          if (x == 6) //This can executed
          {
               break; //For end the condition
          }

          cout << x << endl;
     }

     return 0;
}