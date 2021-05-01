#include <iostream>

class DiceGame
{
private:
     char Continue;

public:
     void game()
     {
          //Concept Dice program
          // for (int a = 0; a < b; a++) {
          //     cout << a + rand() % 6 << endl;
          // }

          while (true)
          {

               std::cout << "Throw the dice (y/n) : ";
               std::cin >> Continue;

               if ((Continue == 'y') || (Continue == 'Y'))
               {
                    std::cout << 1 + rand() % 100 << std::endl;
               }

               else if (Continue == 'n' || Continue == 'N')
               {
                    break;
               }

               else
               {
                    std::cout << "Please choose y/n :) \n";
               }
          }
     }
};

int main(int argc, char const *argv[])
{
     DiceGame *DG;

     DiceGame dg;

     DG = &dg;

     DG->game();

     return 0;
}