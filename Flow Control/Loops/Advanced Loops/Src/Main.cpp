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

int main(int, char **)
{

     advancedLoops();

     std::cout << "\n";

     autoLoops("Programming");

     return 0;
}