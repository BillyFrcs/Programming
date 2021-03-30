#include <iostream>

using namespace std;

class System
{
  // Friend function can access with private or protected
private:
  int numberSystem, num;
  string systemName, name;
  size_t height;

public:
  System() : height() //Scope
  {
    systemName = "Game mechanical";
    numberSystem = 1;
    name = "Billy";
    num = 19;
    height = 1;
  }

  void displaySystem()
  {
    cout << "System name: " << systemName << endl;
    cout << "System number: " << numberSystem << endl;
  }

  //*Friend function (prototype or signature)
  // The function can use inside of the class
  friend void addValue(System &varData);

  friend void createData(System &data);

  friend int printHeight(System H);
};

// Friend declaration
void addValue(System &varData)
{
  varData.systemName = varData.systemName;
  varData.numberSystem = varData.numberSystem + 10;
}

void createData(System &data)
{
  cout << "Name " << data.name << endl;
  cout << "Number " << data.num << endl;
}

int printHeight(System H)
{
  H.height *= 175;

  return H.height;
}

int main(int argc, char const *argv[])
{
  System dataFriend;

  //*Called friend function
  addValue(dataFriend); // Pass by reference
  dataFriend.displaySystem();

  cout << endl;

  createData(dataFriend);

  cout << endl;

  cout << printHeight(dataFriend) << endl;

  return 0;
}