#include <iostream>

using namespace std;

void diceProgram()
{
     //Concept Dice program example
     //cout << "Concept dice program \n";
     // for (int a = 0; a < b; a++) {
     //     cout << a + rand() % 6 << endl;
     // }

     // Simple Dice program
     cout << "Dice program example" << endl;

     char lanjut;

     while (true)
     {

          cout << "Lempar dadu (y/n)" << endl;
          cin >> lanjut;

          if (lanjut == 'y')
          {
               cout << 1 + rand() % 6 << endl;
          }

          else if (lanjut == 'n')
          {
               break;
          }

          else
          {
               cout << "Please choose y/n :) \n";
          }
     }
}

int main()
{
     diceProgram();

     return 0;
}