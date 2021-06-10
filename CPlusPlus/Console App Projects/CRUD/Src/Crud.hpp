#pragma once

#ifndef CRUD_APP

#include <iostream>
#include <string>

using namespace std;

class Crud
{
private:
     //Max limits data
     const int maxRow = 20;

     string studentName[20], studentID[20];

public:
     //Create or add data
     virtual void createAddData()
     {
          char name[50];
          char ID[13];

          cin.ignore();

          cout << "Student Name: ";
          cin.getline(name, 50);

          cout << "Student ID (Max 12 Digits): ";
          cin.getline(ID, 13);

          for (int x = 0; x < maxRow; x++)
          {
               if ((studentName[x] == "\0") && (studentName[x] == "\0"))
               {
                    studentName[x] = name;
                    studentID[x] = ID;

                    break;
               }
          }
     }

     //Update or change Data
     void updateData(string search)
     {
          char studentname[50];
          char studentid[13];

          int counter = 0;

          for (int x = 0; x < maxRow; x++)
          {
               if ((studentName[x] == search) || (studentID[x] == search))
               {
                    counter++;

                    cout << "New student name: ";
                    cin.getline(studentname, 50);

                    cout << "New student ID: ";
                    cin.getline(studentid, 13);

                    studentName[x] = studentname;
                    studentID[x] = studentid;

                    cout << "Update successfully" << endl;

                    break;
               }
          }

          if (counter == 0)
          {
               cout << "Not valid!" << endl;
          }
     }

     //Delete or remove data
     void deleteData(string search)
     {
          int counter = 0;

          for (int x = 0; x < maxRow; x++)
          {
               if ((studentName[x] == search) || (studentID[x] == search))
               {
                    counter++;

                    studentName[x] = "";
                    studentID[x] = "";

                    cout << "Delete success" << endl;
               }
          }

          if (counter == 0)
          {
               cout << "Invalid!" << endl;
          }
     }

     //Display list data
     virtual void displayListData()
     {
          system("cls");

          cout << "Lists Data Students \n";
          cout << "========================================\n";

          cout << "No\t\t|Name\t\t|ID\t\t" << endl;
          cout << "----------------------------------------\n";

          int counter = 0;

          for (int x = 0; x < maxRow; x++)
          {
               if ((studentName[x] != "\0") && (studentID[x] != "\0"))
               {
                    counter++;

                    cout << counter << ""
                         << "\t\t" << studentName[x] << "\t\t" << studentID[x] << endl;
               }
          }

          if (counter == 0)
          {
               cout << "Data not found \n";
          }

          cout << "========================================\n\n";
     }

     //Searching data
     void searchingData(string search);

     //Open file CRUD (Still have bugs)
     void openFileCrud();

     //Save file CRUD (Still have bugs)
     void saveFileCrud();
};

#endif