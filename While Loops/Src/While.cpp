#include <iostream>

using namespace std;

//Function count digits number
void countDigitsNumber(int Number = 0)
{
     cout << "Enter number: ";
     cin >> Number;

     if (Number == 0)
     {
          cout << "You have entered 0. \n";
     }
     else
     {
          if (Number < 0)
               Number = -1 * Number;

          int Counter = 0;

          while (Number > 0)
          {
               Number /= 10;
               Counter++;
          }

          cout << "Number contains " << Counter << " digits \n";
     }
}

//Class reserved program
class reversedProgram
{
public:
     int number, reverseNumber;

     reversedProgram()
     {
          cout << "Enter number: ";
          cin >> number;

          while (number != 0)
          {
               reverseNumber *= 10;

               int lastDigits = number % 10;
               reverseNumber += lastDigits;
               number /= 10;
          }

          cout << "Reversed: " << reverseNumber << endl;
     }
};

int main()
{
     /*int Counter = 1; //100

     while (Counter <= 10) //500
     {
          if (Counter % 3 == 0 && Counter % 5 == 0)
          {
               cout << Counter << " is divisible \n";
               Counter++;
          }
     }

     cout << endl;*/

     //Program count digits of a number
     countDigitsNumber();

     printf("\n");

     //Program reversing digits of a number
     reversedProgram();

     system("pause > 0");
}