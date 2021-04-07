#include <iostream>
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

using namespace loopsTimer;

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

int main(int argc, char *argv[])
{

     setTimer();

     std::cout << std::endl;

     numbers();

     std::cout << std::endl;

     decrementLoops();

     return 0;
}