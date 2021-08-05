#include <iostream>

void advancedLoops()
{
     //Advance for loops
     //Remember don't increase boolean
     int o = 0;

     bool condition = true;

     for (; condition;)
     {
          std::cout << "Hello Billy" << std::endl;
          o++;

          if (!(o < 5))
               condition = false;
     }
}

void autoLoops(std::string Text)
{
     for (auto &value : Text)
     {
          std::cout << value << ' ';
     }
}

void Loops(float i)
{
     for (i; i <= 5; i -= -1)
     {
          std::cout << i << " ";
     }
}

int main(int, char **)
{

     advancedLoops();

     std::cout << "\n";

     autoLoops("Programming");

     std::cout << "\n";

     Loops(1);

     return 0;
}