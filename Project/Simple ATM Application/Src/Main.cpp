#include <iostream>

using namespace std;

void showMenu()
{
     cout << "*********Menu*********" << endl;
     cout << "1. Check Balance" << endl;
     cout << "2. Deposit" << endl;
     cout << "3. Withdraw" << endl;
     cout << "4. Exit" << endl;
     cout << "**********************" << endl;

     cout << endl;
}

void chooseOption()
{
     int option;
     double balance = 100;

     //Check balance, deposit, withdraw, show menu
     do
     {
          cout << "Choose option: ";
          cin >> option;

          switch (option)
          {
          case 1:
               cout << "Balance is: " << balance << " $" << endl;
               break;

          case 2:
               cout << "Deposit amount: ";
               double depositAmount;
               cin >> depositAmount;

               balance += depositAmount;
               break;

          case 3:
               cout << "Withdraw amount: ";
               double withdrawAmount;
               cin >> withdrawAmount;

               if (withdrawAmount <= balance)
                    balance -= withdrawAmount;
               else
                    cout << "Not enough money" << endl;

          default:
               cout << "Please choose 1 - 4" << endl;
          }

     } while (option != 4);
}

int main()
{

     showMenu();

     chooseOption();

     return 0;
}