#include <iostream>

using namespace std;

class myClass
{
public:
     string myString;
     double myNum;
};

int main(int argc, char const *argv[])
{
     myClass myObj;

     myObj.myString = "Billy";
     myObj.myNum = 19;

     cout << "Name: " << myObj.myString << endl;
     cout << "Number: " << myObj.myNum << endl;

     cout << endl;

     myClass myObj2;

     myObj2.myString = "Franscois";
     myObj2.myNum = 8;

     cout << "Name: " << myObj2.myString << endl;
     cout << "Number: " << myObj2.myNum << endl;

     return 0;
}