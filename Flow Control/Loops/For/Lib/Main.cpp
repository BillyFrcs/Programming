#include <iostream>
#include <string>
#include <unistd.h> //For linux

namespace loopsTimer
{
     void setTimer()
     {
          size_t arr[6] = {0, 1, 2, 3, 4};

          for (size_t i = 0; i <= 4; i++)
          {
               std::cout << arr[i] << std::endl;
               sleep(3);
          }
     }
}

void numbers()
{
     int num;

     for (num = 1; num < 25; num++)
          if (num % 5 != 0)
               std::cout << num << " " << std::endl;
}

void decrementLoops()
{
     for (int i = 10; i >= 1; i--)
     {
          std::cout << i << std::endl;
     }
}

namespace stringLoops
{
     std::string S = "Billy";
     void getStr()
     {
          for (int i = 0; i < S.size(); i++)
          {
               for (int j = i; i < S.length(); i++)
               {
                    std::cout << S << "\n";
               }
          }
     }
}

int main(int argc, char *argv[])
{

     loopsTimer::setTimer();

     std::cout << "\n";

     numbers();

     std::cout << "\n";

     decrementLoops();

     std::cout << "\n";

     stringLoops::getStr();

     return 0;
}