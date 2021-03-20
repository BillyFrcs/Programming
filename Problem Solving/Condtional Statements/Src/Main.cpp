#include <iostream>

using namespace std;

string num[6] = {"Greater than 5\n", "One\n", "Two\n",
                 "Three\n", "Four\n", "Five\n"};

int main()
{
     int in;

statements:
     cout << "Enter one number 1 - 5: ";
     cin >> in;

     if (in > 5)
          cout << num[0];

     else
          cout << num[in];

     char symbol;
     cout << "Try again ?(y/n): ";
     cin >> symbol;

     if (symbol == 'y' || symbol == 'Y')
     {
          goto statements;
     }
     else if (symbol == 'n' || symbol == 'N')
     {
          cout << "Stopped" << endl;
     }

     return 0;
}