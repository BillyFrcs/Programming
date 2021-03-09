#include <iostream>
#include <string>
#include <fstream>

using namespace std;

//Max limits record
const int maxRow = 10;

//Global variable array
string empName[maxRow] = {};
string empID[maxRow] = {};

//Create or add records
void createRecords()
{
     char name[50];
     char ID[5];

     cin.ignore();

     cout << "Employee Name: ";
     cin.getline(name, 50);

     cout << "Employee ID: ";
     cin.getline(ID, 5);

     for (int x = 0; x < maxRow; x++)
     {
          if (empID[x] == "\0")
          {
               empName[x] = name;
               empID[x] = ID;

               break;
          }
     }
}

//Display list records
void listRecords()
{
     system("cls");

     cout << "Current Records \n";
     cout << "=============================\n";

     int counter = 0;
     cout << "No.\t|Name\t|ID\t" << "\n";
     cout << "-----------------------------\n";

     for (int x = 0; x < maxRow; x++)
     {
          if (empID[x] != "\0")
          {
               counter++;

               cout << "" << counter << " \t " << empName[x] << "\t" << empID[x] << "\n";
          }
     }

     if (counter == 0)
     {
          cout << "No record found \n";
     }

     cout << "=============================\n";
}

int main(int argc, char const *argv[])
{
     system("cls");

     //User select menu
     int options;
     do
     {
          cout << "========MENU==========" << endl;
          cout << "1. Create Records" << endl;
          cout << "2. Update Records" << endl;
          cout << "3. Delete Records" << endl;
          cout << "4. Search Records" << endl;
          cout << "5. Display All Records" << endl;
          cout << "6. Exit And Save" << endl;
          cout << "======================" << endl;

          cout << "Select Option >> ";
          cin >> options;

          //All records
          switch (options)
          {

          case 1:
               //Create or add record
               createRecords();
               system("cls");
               break;

          case 5:
               listRecords();
               break;
          }

     } while (options != 6);

     return 0;
}