#include <iostream>

using namespace std;

class System
{
private:
     int numberSystem;
     string systemName;

public:
     System()
     {
          systemName = "Game mechanical";
          numberSystem = 1;
     }

     void displaySystem()
     {
          cout << "System number: " << numberSystem << endl;
          cout << "System name: " << systemName << endl;
     }

     //*Friend function (prototype or signature)
     //The function can use inside of the class
     friend void addValue(System &varData);
};

//Friend declaration
void addValue(System &varData)
{
     varData.numberSystem = varData.numberSystem + 10;
     varData.systemName;
}

int main(int argc, char const *argv[])
{
     System data1;
     data1.displaySystem();

     cout << endl;

     //*Called friend function
     addValue(data1); //*Pass by reference
     data1.displaySystem();

     return 0;
}