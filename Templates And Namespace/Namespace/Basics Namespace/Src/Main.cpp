#include <iostream>

using namespace std;
namespace Data
{
     size_t Value = 19, show;
     void printData()
     {
          show = Value;
          cout << show << endl;
     }
}

using namespace Data;

int main()
{

     printData();

     return 0;
}