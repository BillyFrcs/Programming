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
     for (int i = 0; i < 10; i++)
     {
          if (i == 5)
          {
               break; //For end condition
          }

          cout << i << endl;
     }

     cout << endl;

     multiplicationProgram();

     return 0;
}