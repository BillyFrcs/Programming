#include <iostream>

using namespace std;

void continueWhileLoops()
{
     int x = 1;

     while (x < 10)
     {
          //Continue is use to skip the current iteration of the loop
          if (x == 5)
          {
               x++;

               continue;
          }

          cout << x << endl;

          x++;
     }
}

void continueForLoops()
{
     for (int i = 1; i <= 5; i++)
     {
          if (i == 4)
          {
               continue;
          }

          cout << i << endl;
     }
}

void continueWhileLoopsProgram()
{
     double num = 0, sum = 0;

     while (num >= 0)
     {
          sum += num;

          cout << "Number = ";
          cin >> num;
          
          //Stop program when enter minus number
          if (num > 50)
          {
               cout << "If number is greater than 50 it won't be calculated \n";
               num = 0;

               continue;
          }
     }
     cout << "Result = " << sum << endl;
}

void continueNestedLoops()
{
     for (int i = 1; i <= 5; i++)
     {
          for (int j = 1; j <= 5; j++)
          {
               if (j == 3)
               {
                    continue;
               }
               
               cout << "i = " << i << ", j = " << j << endl;
          }
     }
}

int main()
{
     continueWhileLoops();

     cout << endl;

     continueForLoops();

     cout << endl;

     continueWhileLoopsProgram();

     cout << endl;

     continueNestedLoops();

     std::cout << "\n";

     for (int i = 1; i < 10; i++)
     {
          if (i == 6) //This not executed
          {
               continue; //For continue the condition
          }

          cout << i << endl;
     }

     return 0;
}