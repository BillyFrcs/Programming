#include <iostream>
#include <string>
#include <fstream>
#include "Crud.h"

//CRUD ==> Create Read Update And Delete
using namespace std;

//How to run this program on terminal (Windows)
//g++ Main.cpp Crud.cpp -o Main

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

    cout << "The last program" << endl;

    cin.get();
    return 0;
}