#include <iostream>

using namespace std;

//Check number days in a month
void numbersDaysMonth()
{
     int year, month;

     cout << "Year: ";
     cin >> year;

     cout << "Month: ";
     cin >> month;

     switch (month)
     {
     case 2:
          (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ? cout << "29 days month." : cout << "28 days month." << endl;
          break;

     case 4:
     case 6:
     case 9:
     case 11:
          cout << "30 days month.";
          break;
     case 1:
     case 3:
     case 5:
     case 7:
     case 8:
     case 10:
     case 12:
          cout << "31 days month.";
          break;

     default:
          cout << "Not found try again!" << endl;
     }
}

void conceptSwitchCase()
{
     //Switch case
     int b;

     cout << "Enter value = ";
     cin >> b;

     switch (b)
     {
     case 1:
          cout << "b = 1" << endl;
          break;

     case 2:
          cout << "b = 2" << endl;
          break;

     case 3:
          cout << "b = 3" << endl;
          break;

     case 4:
          cout << "b = 4" << endl;
          break;

     case 5:
          cout << "b = 5" << endl;
          break;

          //Default
     default:
          cout << "Not found operator" << endl;
          break;
     }
}

int main()
{
     numbersDaysMonth();

     cout << endl << "\n";

     conceptSwitchCase();

     return 0;
}