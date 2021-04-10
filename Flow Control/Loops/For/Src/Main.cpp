#include <iostream>
#include <string>

using namespace std;

//Range Based for Loop
void arrLoopNumber()
{
     int arrNum[] = {0, 1, 2, 3, 4, 5};

     for (int n : arrNum)
     {
          cout << n << " ";
     }
}

int main()
{
     //Advance for loops
     //Remember don't increase boolean
     int o = 0;

     bool condition = true;

     for (; condition;)
     {
          cout << "Hello Billy" << endl;
          o++;

          if (!(o < 5))
               condition = false;
     }

     cout << endl;

     //The factorial of a number
     int number, factorial = 1;

     cout << "Number factorial: ";
     cin >> number;

     for (int i = 1; i <= number; i++)
     {
          factorial = factorial * i;
     }

     cout << "Result factorial " << number << " is " << factorial << "\n";

     cout << endl;

     //For jump to next value (continue)
     for (int i = 0; i < 10; i++)
     {
          if (i == 4)
          {
               continue; //Is function
          }

          cout << i << endl;
     }

     cout << endl;

     //for (initialization; condition; increase) statement;
     for (int n = 10; n > 0; n--)
     {
          cout << n << ", ";
          if (n == 3)
          {
               cout << "Aborted \n";
               break;
          }
     }

     for (int x = 10; x > 0; x--)
     {
          if (x == 5)
               continue;
          cout << x << " ,";
     }

     cout << "Off \n";

     cout << endl;

     //For using string
     string name{"Billy"};

     for (char c : name)
     {
          cout << "[" << c << "]";
     }

     cout << '\n';

     cout << endl;

     //Countdown
     int n = 1, a, i;
     cout << "n = ";
     cin >> n;

     a = n;

     for (i = 1; i <= n; i++)
     {

          cout << a << endl;

          if (a % 5 == 0)
               cout << "Beep" << endl;

          a--;
     }

     cout << endl;

     //Range Based for Loop
     arrLoopNumber();

     return 0;
}