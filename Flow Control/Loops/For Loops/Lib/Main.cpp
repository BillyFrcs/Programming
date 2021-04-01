#include <iostream>
#include <unistd.h>

using namespace std;

namespace loopsTimer
{
     void setTimer()
     {
          size_t arr[6] = {0, 1, 2, 3, 4};
          
          for (size_t i = 0; i <= 4; i++)
          {
               cout << arr[i] << endl;
               sleep(3);
          }
     }
}

using namespace loopsTimer;

int main()
{

     setTimer();

     return 0;
}