#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct Mahasiswa
{
    int NPM;
    string Name;
    string Prodi;
};

Mahasiswa takeData (int Position, fstream &myFile)
{
    Mahasiswa bufferData;

    myFile.seekp ((Position - 1) *sizeof (Mahasiswa));

    myFile.read (reinterpret_cast <char*> (&bufferData), sizeof(Mahasiswa));

    return bufferData;
}

void writeData (Mahasiswa &Data, fstream &myFile)
{
    myFile.write (reinterpret_cast <char*> (&Data), sizeof (Mahasiswa));
}

void writeDataByPosition (int Position, Mahasiswa &bufferData, fstream &myFile)
{
    myFile.seekg ((Position - 1) *sizeof (Mahasiswa));
    
    myFile.write (reinterpret_cast <char*> (&bufferData), sizeof (Mahasiswa));
}

int main()
{
    fstream myFile;

    myFile.open ("Data.bin", ios::trunc | ios::out | ios::in | ios::binary);

    Mahasiswa Mahasiswa1, Mahasiswa2, Output;

    Mahasiswa1.NPM = 1252200019;
    Mahasiswa1.Name = "BIlly";
    Mahasiswa1.Prodi = "Computer science";

    Mahasiswa2.NPM = 1282109566;
    Mahasiswa2.Name = "Kolibonso";
    Mahasiswa2.Prodi = "Informatics";

    //With void
    writeData (Mahasiswa1, myFile);
    writeData (Mahasiswa2, myFile);
    
    Mahasiswa2.Name = "Franscois";
    writeDataByPosition (2, Mahasiswa2, myFile);

    Output = takeData (1, myFile);

    cout << Output.NPM << endl;
    cout << Output.Name << endl;
    cout << Output.Prodi << endl;

    return 0;
}