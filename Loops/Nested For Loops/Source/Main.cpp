#include <iostream>

using namespace std;

//Nested for loops table multiplication
void multiplicationProgram()
{
     for (int i = 1; i <= 10; i++)
     {
          for (int j = 1; j <= 10; j++)
          {
               cout << i << " * " << j << " = " << i * j << endl;
          }

          cout << endl;
     }
}

int main()
{
     for (int i = 1; i < 10; i++)
     {
          if (i == 6) //This not executed
          {
               continue; //For continue the condition
          }

          cout << i << endl;
     }

     cout << endl;

     for (int x = 1; x < 20; x++)
     {
          if (x == 6) //This can executed
          {
               break; //For end the condition
          }

          cout << x << endl;
     }

     cout << endl;

     multiplicationProgram();

     return 0;
}