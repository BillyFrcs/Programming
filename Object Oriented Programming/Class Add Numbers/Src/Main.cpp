#include <iostream>

using namespace std;

class Add
{
protected:
  int firstNum, secondNum;

public:
  void Input()
  {
    cout << "Enter first num = ";
    cin >> firstNum;

    cout << "Enter second num = ";
    cin >> secondNum;
  }

  int sum(int num1, int num2)
  {
    return num1 * num2;
  }

  void showResult()
  {
    cout << "Result = " << sum(firstNum, secondNum) << endl;
  }
};

int main()
{

  Add obj;

  obj.Input();
  obj.showResult();

  return 0;
}