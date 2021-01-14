#include <iostream>
#include <string>
#include <fstream>
#include "Crud.h"

using namespace std;

//Write data mahasiswa
void Crud::writeDataMahasiswa (fstream &data, int Position, Mahasiswa &inputMahasiswa)
{
    data.seekp ((Position - 1) *sizeof (Mahasiswa), ios::beg);

    data.write (reinterpret_cast <char*> (&inputMahasiswa), sizeof (Mahasiswa));
}

//Read data mahasiswa
Crud::Mahasiswa Crud::readDataMahasiswa (fstream &data, int Position)
{
    Crud::Mahasiswa readMahasiswa;

    data.seekg ((Position - 1) *sizeof (Crud::Mahasiswa), ios::beg);
     
    data.read (reinterpret_cast <char*> (&readMahasiswa), sizeof(Crud::Mahasiswa));

    return readMahasiswa;
}

//Get data size
int Crud::getDataSize (fstream &data)
{
    int Start, End;

    data.seekg (0, ios::beg);
    Start = data.tellg();

    data.seekg (0, ios::end);
    End = data.tellg();

    return (End - Start) / sizeof (Mahasiswa);
}

//Display or show data mahasiswa 
void Crud::displayDataMahasiswa (fstream &data)
{
    int Size = getDataSize (data);

    Mahasiswa showMahasiswa;

    cout << "No.\tPk.\tName.\tNPM.\tProdi." << endl;

    //Loops
    for (int a = 1; a <= Size; a++)
    {
        showMahasiswa = readDataMahasiswa (data, a);

        cout << a << "\t";

        cout << showMahasiswa.Pk << "\t";
        cout << showMahasiswa.NPM << "\t";
        cout << showMahasiswa.Name << "\t";
        cout << showMahasiswa.Prodi << endl;
    }
}

//GetOption
int getOption()
{
    int Input;

    system ("cls");
    system ("clear");

    cout << "Crud program data mahasiswa" << endl;
    cout << "===========================" << endl;
    cout << "1. Add data mahasiswa" << endl;
    cout << "2. Show data mahasiswa" << endl;
    cout << "3. Change data mahasiswa" << endl;
    cout << "4. Delete data mahasiswa" << endl;
    cout << "5. Finish" << endl;
    cout << "===========================" << endl;
    cout << "Choose [1 - 5]: ";

    cin >> Input;
    //cin.ignore (numeric_limits <streamsize>::max(), '\n');

    return Input;
}

//Check database
void checkDataBase (fstream &data)
{
    data.open ("data.bin", ios::out | ios::in | ios::binary);
    //Check database file is avaliable or not
    if (data.is_open())
    {
        cout << "Found database" << endl;
    }
    else
    {
        cout << "Not found data base, create new database" << endl;
        data.close();
        data.open ("data.bin", ios::trunc | ios::out | ios::in | ios::binary);
    }
}


//Add data mahasiswa
void Crud::addDataMahasiswa (fstream &data)
{
    Mahasiswa inputMahasiswa, lastMahasiswa;

    //Read size input data
    int Size = getDataSize (data);
    cout << "Size data" << Size << endl;
    if (Size == 0)
    {
        inputMahasiswa.Pk = 1;
    }
    else 
    {
        lastMahasiswa = readDataMahasiswa (data, Size);
        cout << "Pk: " << lastMahasiswa.Pk << endl;
        inputMahasiswa.Pk = lastMahasiswa.Pk + 1;
    }

    cout << "Name: ";
    getline (cin, inputMahasiswa.NPM);

    cout << "NPM: ";
    getline (cin, inputMahasiswa.Name);

    cout << "Prodi: ";
    getline (cin, inputMahasiswa.Prodi);

    //writeDataMahasiswa (data, Size + 1, inputMahasiswa);
}

//Change or update data mahasiswa
void Crud::changeDataMahasiswa (fstream &data)
{
    int No;

    Mahasiswa updateMahasiswa;

    cout << "Choose no: ";
    cin >> No;
    //cin.ignore (numeric_limits <streamsize>::max(), '\n');

    updateMahasiswa = readDataMahasiswa (data, No);

    cout << "\nData Options: " << endl;
    cout << "Name: " << updateMahasiswa.NPM << endl;
    cout << "NPM: " << updateMahasiswa.Name << endl;
    cout << "Prodi: " << updateMahasiswa.Prodi << endl << endl;

    cout << "Change Data: " << endl;

    cout << "Name: ";
    getline (cin, updateMahasiswa.NPM);

    cout << "NPM: ";
    getline (cin, updateMahasiswa.Name);

    cout << "Prodi: ";
    getline (cin, updateMahasiswa.Prodi);

    writeDataMahasiswa (data, No, updateMahasiswa);
}

//Delete data mahasiswa 
void Crud::deleteDataMahasiswa (fstream& data)
{
    int Number, Size, Offset;

    fstream tempData; //temp ==> Temporary data

    Mahasiswa blankMahasiswa, tempMahasiswa;

    Size = getDataSize (data);

    //Choose number
    cout << "Delete number: ";
    cin >> Number;

    //Fill with blank data
    writeDataMahasiswa (data, Number, blankMahasiswa);

    //Check file data from data.bin, if there are data move to temp data
    tempData.open ("temp.dat", ios::trunc | ios::out | ios::in | ios::binary);

    Offset = 0;

    for (int b = 1; b <= Size; b++)
    {
        tempMahasiswa = readDataMahasiswa (data, b);

        if (!tempMahasiswa.Name.empty())

            writeDataMahasiswa (tempData, b - Offset, tempMahasiswa);
         
        else

            Offset++;

            cout << "Delete data" << endl;
    }

    //Move data form file temp data to data.bin
    Size = getDataSize (tempData);
    data.close ();

    data.open ("data.bin", ios::trunc | ios::out | ios::binary);
    data.close ();

    data.open ("data.bin", ios::out | ios::in | ios::binary);

    for (int c = 1; c <= Size; c++)
    {
        tempMahasiswa = readDataMahasiswa (tempData, c);
        writeDataMahasiswa (data, c, tempMahasiswa);
    }
}