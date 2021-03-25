#ifndef CRUD__APP
#define CRUD__APP
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

//Max limits data
const int maxRow = 20;

//Global variable array
string studentName[maxRow] = {};
string studentID[maxRow] = {};

//Create or add data
void createAddData()
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

//Search data
void searchingData(string search)
{
     system("cls");

     cout << "Result searching Data Students \n";
     cout << "========================================\n";

     cout << "No\t\t|Name\t\t|ID\t\t" << endl;
     cout << "---------------------------------------\n";

     int counter = 0;

     for (int x = 0; x < maxRow; x++)
     {
          if ((studentName[x] == search) || (studentID[x] == search))
          {
               counter++;

               cout << counter << ""
                    << "\t\t" << studentName[x] << "\t\t" << studentID[x] << endl;

               break;
          }
     }

     if (counter == 0)
     {
          cout << "Search not found! \n";
     }

     cout << "========================================\n\n";
}

//Display list data
void displayListData()
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
          cout << "Lists not found \n";
     }

     cout << "========================================\n\n";
}

//Open file CRUD (Still have bugs)
void openFileCrud()
{
     //Add and open file .txt
     string line;
     ifstream crudFile("DataStudents.txt"); //This can change with another file location

     if (crudFile.is_open())
     {
          int x = 0;

          while (getline(crudFile, line))
          {
               int l = line.length();
               studentName[x] = line.substr(0, 12);//0, 3
               studentID[x] = line.substr(0, l - 12);//4, l - 4
               x++;
          }
     }
}

//Save file CRUD (Still have bugs)
void saveFileCrud()
{
     //Save file .txt
     ofstream crudFile;

     crudFile.open("DataStudents.txt"); //This can change with another file location

     for (int x = 0; x < maxRow; x++)
     {
          if ((studentName[x] == "\0") && (studentID[x] == "\0"))
          {
               break;
          }

          else
          {
               crudFile << studentName[x] + "," + studentID[x] << endl;
          }
     }
}

#endif