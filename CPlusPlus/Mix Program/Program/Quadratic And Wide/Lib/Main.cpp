#include <iostream>

using namespace std;

class NumberToPredikat
{
public:
     NumberToPredikat(int Value)
     {
          _value = Value;
     }

     void addNumber()
     {
          while (true)
          {
               cout << "Enter num = ";
               cin >> _value;
               break;
          }
     }

     void converdNumberToPredikat()
     {
          do
          {
               if (_value >= 90 && _value <= 100)
               {
                    cout << "Predikat A" << endl;
                    break;
               }

               else if (_value >= 75 && _value <= 89)
               {
                    cout << "Predikat B" << endl;
                    break;
               }

               else if (_value >= 50 && _value <= 74)
               {
                    cout << "Predikat C" << endl;
                    break;
               }

               else if (_value >= 0 && _value <= 49)
               {
                    cout << "Predikat D" << endl;
                    break;
               }

               else
               {
                    cout << "Not found try again!" << endl;
               }
          } while (true);
     }

private:
     int _value;
};

int main()
{
     NumberToPredikat obj(0);

     obj.addNumber();
     obj.converdNumberToPredikat();

     return 0;
}