#include <iostream>

using namespace std;

//Functions return string 
string needsWater(int days, bool isSucculent)
{
     if (isSucculent == false && days > 3)
     {
          return "Time to water the plant";
     }
     else if (isSucculent == true && days < 12)
     {
          return "Don't water the plant!";
     }
     else if (isSucculent == true && days > 13)
     {
          return "Go ahead and give the plant a little water.";
     }
     else
     {
          return "Don't water the plant!";
     }
}

int main()
{
     cout << needsWater(20, true) << endl;

     return 0;
}