#pragma once

#include <iostream>

using namespace std;

class AtmApp
{
private:
     int option;
     double balance = 100, depositAmount, withdrawAmount;

public:
     void showMenu()
     {
          cout << "*********Menu*********" << endl;
          cout << "1.Check Balance" << endl;
          cout << "2.Deposit" << endl;
          cout << "3.Withdraw" << endl;
          cout << "4.Exit" << endl;
          cout << "**********************" << endl
               << endl;
     }

     virtual void counterAtmApp()
     {
          //Check balance, deposit, and withdraw
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
                    cin >> depositAmount;

                    balance += depositAmount;
                    break;

               case 3:
                    cout << "Withdraw amount: ";
                    cin >> withdrawAmount;

                    if (withdrawAmount <= balance)
                    {
                         balance -= withdrawAmount;
                    }
                    else
                    {
                         cout << "Not enough money" << endl;
                    }
                    break;

               default:
                    break;
               }
          } while (option != 4);
     }
};

void printAtmApp()
{
     AtmApp Atm;

     Atm.showMenu();
     Atm.counterAtmApp();
}