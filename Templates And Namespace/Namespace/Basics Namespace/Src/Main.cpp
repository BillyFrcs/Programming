#include <iostream>

using namespace std;

namespace Data
{
     size_t Value = 19;
     void printData()
     {
          cout << Value << endl;
     }
}

using namespace Data;

int main()
{

     printData();

     return 0;
}