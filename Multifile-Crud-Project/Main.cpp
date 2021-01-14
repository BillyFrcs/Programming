#include <iostream>
#include <string>
#include <fstream>
#include "Crud.h"

//CRUD ==> Create Read Update And Delete
using namespace std;

/*/Prototype
//Get option
int getOption ();

//Check database 
void checkDataBase (fstream &data);

//Write data mahasiswa
void writeDataMahasiswa (fstream &data, int Position, Mahasiswa &inputMahasiswa);

//Get data size
int getDataSize  (fstream &data);

//Read data mahasiswa
Mahasiswa readDataMahasiswa (fstream &data, int Position);

//Add data mahasiswa
void addDataMahasiswa (fstream &data);

//Display or show data mahasiswa 
void displayDataMahasiswa (fstream &data);

//Change or update data mahasiswa
void changeDataMahasiswa (fstream &data);

//Delete data mahasiswa 
void deleteDataMahasiswa (fstream& data);*/

//How to run this program on terminal
//g++ Main.cpp Crud.cpp -o main

int main()
{
    fstream data;

    Crud::checkDataBase (data);

    int Options = Crud::getOption();
    char Continue;

    enum OPtion
    {
        Add = 1, Show, Change, Delete, Finish
    };

    while (Options != Finish)
    {
        switch (Options)
        {
        case Add:
            cout << "Add data mahasiswa" << endl;
            Crud::addDataMahasiswa (data);
            break;

        case Show:
            cout << "Show data mahasiswa" << endl;
            Crud::displayDataMahasiswa (data);
            break;

        case Change:
            cout << "Change data mahasiswa" << endl;
            Crud::displayDataMahasiswa (data);
            Crud::changeDataMahasiswa (data);
            Crud::displayDataMahasiswa (data);

            break;

        case Delete:
            cout << "Delete data mahasiswa" << endl;
            Crud::displayDataMahasiswa (data);
            Crud::deleteDataMahasiswa (data);
            Crud::displayDataMahasiswa (data);
            break;

        default:
            cout << "Doesn't found options" << endl;
            break;
        }

        cout << "Continue ? (y / n) : ";
        cin >> Continue;

        if ((Continue == 'y') | (Continue == 'Y'))
        {
             Options = Crud::getOption();
        }

        else if ((Continue == 'n') | (Continue == 'N'))
        {
            break;
        }

        else
        {
            cout << "" << endl;
        }
    }

    //cout << "The last program" << endl;

    system("pause > 0");
    cin.get();
    return 0;
}