#include <iostream>

using namespace std;

class numberToPredikat
{
private:
     int value;

public:
     numberToPredikat(int Value)
     {
          value = Value;
     }

     void addNumber()
     {
          while (true)
          {
               cout << "Enter num = ";
               cin >> value;
               break;
          }
     }

     void converdNumberToPredikat()
     {
          do
          {
               if (value >= 90 && value <= 100)
               {
                    cout << "Predikat A" << endl;
                    break;
               }

               else if (value >= 75 && value <= 89)
               {
                    cout << "Predikat B" << endl;
                    break;
               }

               else if (value >= 50 && value <= 74)
               {
                    cout << "Predikat C" << endl;
                    break;
               }

               else if (value >= 0 && value <= 49)
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
};

int main()
{
     numberToPredikat obj(0);

     obj.addNumber();
     obj.converdNumberToPredikat();

     return 0;
}