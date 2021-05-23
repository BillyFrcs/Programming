#pragma once

#ifndef DATABASE

#include <fstream>

#include "Crud.hpp"

void Crud::searchingData(string search)
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

void Crud::openFileCrud()
{
     //Add andd open file .txt
     string line;
     ifstream crudFile("DataStudents.txt"); //This can change with another file location

     if (crudFile.is_open())
     {
          int x = 0;

          while (getline(crudFile, line))
          {
               int l = line.length();
               studentName[x] = line.substr(0, 12);   //0, 3
               studentID[x] = line.substr(0, l - 12); //4, l - 4
               x++;
          }
     }
}

void Crud::saveFileCrud()
{
     //Saving file .txt
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