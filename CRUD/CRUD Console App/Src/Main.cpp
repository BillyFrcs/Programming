#include <iostream>
#include <string>
#include <fstream>
#include "Crud.hpp"

using namespace std;

int main()
{
     system("cls");

     //Open file CRUD
     openFileCrud();

     //User select menu
     int options;
     string searchData;

     do
     {
          cout << "====Billy's CRUD MENU====" << endl;
          cout << "1. Add Data" << endl;
          cout << "2. Update Or Changes Data" << endl;
          cout << "3. Delete Data" << endl;
          cout << "4. Search Data" << endl;
          cout << "5. Display All Data" << endl;
          cout << "6. Exit And Save" << endl;
          cout << "=========================" << endl
               << endl;

          cout << "Select Option: ";
          cin >> options;

          //All crud data conditions
          switch (options)
          {
               //Create or add data
          case 1:
               createAddData();
               system("cls");
               break;

               //Update or change data
          case 2:
               cin.ignore();
               cout << "Update by name or ID: ";
               getline(cin, searchData);
               updateData(searchData);
               system("cls");
               break;

               //Delete or remove data
          case 3:
               cin.ignore();
               cout << "Delete by name or ID: ";
               getline(cin, searchData);
               deleteData(searchData);
               system("cls");
               break;

               //Search data
          case 4:
               cin.ignore();
               cout << "Search by name or ID: ";
               getline(cin, searchData);
               searchingData(searchData);
               break;

               //Display or show all data
          case 5:
               displayListData();
               break;
          }

     } while (options != 6);

     //Save to file crud
     saveFileCrud();
     cout << "Exit and saving file..." << endl;

     return 0;
}