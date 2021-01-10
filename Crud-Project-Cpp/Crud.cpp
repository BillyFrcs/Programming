#include <iostream>
#include <string>
#include <stdio.h>
#include <fstream>

//CRUD ==> Create Read Update And Delete
using namespace std;

//Struct mahasiswa
struct Mahasiswa
{
    int Pk;
    string NPM;
    string Name;
    string Prodi;
};

//Prototype
//Get option
int getOption ();

/*/Check database 
void checkDataBase (fstream &data);*/

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
void deleteDataMahasiswa (fstream& data);

int main()
{
    fstream data;

    //checkDataBase (data);

    int Options = getOption();
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
            addDataMahasiswa (data);
            break;

        case Show:
            cout << "Show data mahasiswa" << endl;
            displayDataMahasiswa (data);
            break;

        case Change:
            cout << "Change data mahasiswa" << endl;
            displayDataMahasiswa (data);
            changeDataMahasiswa (data);
            displayDataMahasiswa (data);

            break;

        case Delete:
            cout << "Delete data mahasiswa" << endl;
            displayDataMahasiswa (data);
            deleteDataMahasiswa (data);
            displayDataMahasiswa (data);
            break;

        default:
            cout << "Doesn't found options" << endl;
            break;
        }

        cout << "Continue ? (y / n) : ";
        cin >> Continue;

        if ((Continue == 'y') | (Continue == 'Y'))
        {
            Options = getOption();
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

//GetOption
int getOption()
{
    int Input;

    system ("cls");
    //system ("clear");

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
    cin.ignore (numeric_limits <streamsize>::max(), '\n');

    return Input;
}

/*/Check database
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
}*/

//Write data mahasiswa
void writeDataMahasiswa (fstream &data, int Position, Mahasiswa &inputMahasiswa)
{
    data.seekp ((Position - 1) *sizeof (Mahasiswa), ios::beg);

    data.write (reinterpret_cast <char*> (&inputMahasiswa), sizeof (Mahasiswa));
}

//Get data size
int getDataSize (fstream &data)
{
    int Start, End;

    data.seekg (0, ios::beg);
    Start = data.tellg();

    data.seekg (0, ios::end);
    End = data.tellg();

    return (End - Start) / sizeof (Mahasiswa);
}
    
//Read data mahasiswa
Mahasiswa readDataMahasiswa (fstream &data, int Position)
{
    Mahasiswa readMahasiswa;

    data.seekg ((Position - 1) *sizeof (Mahasiswa), ios::beg);
     
    data.read (reinterpret_cast <char*> (&readMahasiswa), sizeof(Mahasiswa));

    return readMahasiswa;
}

//Add data mahasiswa
void addDataMahasiswa (fstream &data)
{
    Mahasiswa inputMahasiswa, lastMahasiswa;

    /*/Read size input data
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
    }*/

    cout << "Name: ";
    getline (cin, inputMahasiswa.NPM);

    cout << "NPM: ";
    getline (cin, inputMahasiswa.Name);

    cout << "Prodi: ";
    getline (cin, inputMahasiswa.Prodi);

    //writeDataMahasiswa (data, Size + 1, inputMahasiswa);
}

//Display or show data mahasiswa 
void displayDataMahasiswa (fstream &data)
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

//Change or update data mahasiswa
void changeDataMahasiswa (fstream &data)
{
    int No;

    Mahasiswa updateMahasiswa;

    cout << "Choose no: ";
    cin >> No;
    cin.ignore (numeric_limits <streamsize>::max(), '\n');

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
void deleteDataMahasiswa (fstream& data)
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