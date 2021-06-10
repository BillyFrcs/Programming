#include <iostream>

using namespace std;

class friendClass
{
private:
     double num = 5.6;

     friend class Value; //This is the friend class
};

class Value
{
public:
     void display(friendClass &val)
     {
          cout << "Value = " << val.num << endl;
     }
};

int main(int argc, char const *argv[])
{
     friendClass obj1;

     Value obj2;

     obj2.display(obj1);

     return 0;
}