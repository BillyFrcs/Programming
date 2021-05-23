#pragma once

#ifndef SHOW_CRUD

#include "Crud.hpp"

//Show and run CRUD project
void showCrud()
{
     //Object heap memory
     Crud *crud = new Crud;

     system("cls");

     //Open file CRUD
     crud->openFileCrud();

     //User select menu
     int options;
     string searchData;
     bool exit = false;

     do
     {
          cout << "====Billy's CRUD MENU====" << endl;
          cout << "1. Add Data" << endl;
          cout << "2. Update Data" << endl;
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
               crud->createAddData();
               system("cls");
               break;

               //Update or change data
          case 2:
               cin.ignore();
               cout << "Update by name or ID: ";
               getline(cin, searchData);
               crud->updateData(searchData);
               system("cls");
               break;

               //Delete or remove data
          case 3:
               cin.ignore();
               cout << "Delete by name or ID: ";
               getline(cin, searchData);
               crud->deleteData(searchData);
               system("cls");
               break;

               //Search data
          case 4:
               cin.ignore();
               cout << "Search by name or ID: ";
               getline(cin, searchData);
               crud->searchingData(searchData);
               break;

               //Display or show all data
          case 5:
               crud->displayListData();
               break;

          case 6:
               if (exit == '6')
               {
                    exit = true;
               }
               break;

          default:
               std::cout << "Not found! \n";
               break;

          }
     } while (options != 6);

     //Save the data crud to txt file
     crud->saveFileCrud();
     cout << "Exit and saving file...\n";
}

#endif