#include <iostream>
#include <cmath>

using namespace std;

//Find average number
double averageProgram(double num1, double num2)
{
     return (num1 + num2) / 2;
}

int testFunctionPow(int num)
{
     return pow(num, 2);
}

//The scope of things
string transportation = "Plane";

double dataDouble = 15.80;

void favoriteTransport(string favTransport)
{

     string Transportation = favTransport;
     cout << "Fav transportation is" << favTransport << "\n";
}

void enterCode(int passcode)
{

     string secretKnowledge = "https://content.codecademy.com/courses/regex/onyourexcitingjourneylearningtocodeyouwillfindthis.gif";

     cout << "Enter the passcode to access the link: ";
     cin >> passcode;

     if (passcode == 1908)
     {

          cout << "Here you go " << secretKnowledge << "\n";
     }
     else
     {

          cout << "Sorry, incorrect!\n";
     }
}

int main()
{

     cout << averageProgram(25.05, 35.56) << "\n";

     cout << endl;

     cout << testFunctionPow(5) << endl;

     cout << endl;

     cout << transportation << endl;

     favoriteTransport("Motor");

     cout << endl;

     enterCode(1908);

     return 0;
}