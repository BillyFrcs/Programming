#include <iostream>
#include <string>
#include <fstream>

using namespace std;

namespace Crud
{

struct Mahasiswa
{
    int Pk;
    string NPM;
    string Name;
    string Prodi;
};

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
void deleteDataMahasiswa (fstream& data);

}