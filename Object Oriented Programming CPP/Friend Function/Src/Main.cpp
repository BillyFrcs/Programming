#include <iostream>

using namespace std;

class System {
  // Friend function can access with private or protected
private:
  int numberSystem;
  string systemName;
  string name;
  int num;

public:
  System() {
    systemName = "Game mechanical";
    numberSystem = 1;
    name = "Billy";
    num = 19;
  }

  void displaySystem() {
    cout << "System name: " << systemName << endl;
    cout << "System number: " << numberSystem << endl;
  }

  //*Friend function (prototype or signature)
  // The function can use inside of the class
  friend void addValue(System &varData);

  friend void createData(System &data);
};

// Friend declaration
void addValue(System &varData) {
  varData.systemName = varData.systemName;
  varData.numberSystem = varData.numberSystem + 10;
}

void createData(System &data) {
  cout << "Name " << data.name << endl;
  cout << "Number " << data.num << endl;
}

int main(int argc, char const *argv[]) {
  System dataFriend;

  //*Called friend function
  addValue(dataFriend); // Pass by reference
  dataFriend.displaySystem();

  cout << endl;

  createData(dataFriend);

  return 0;
}