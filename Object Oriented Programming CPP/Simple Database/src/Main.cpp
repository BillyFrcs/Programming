#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Students
{
public:
     string Name;
     string NIM;
     string Prodi;

     //Constructor
     Students(string Name, string NIM, string Prodi)
     {
          Students::Name = Name;
          Students::NIM = NIM;
          Students::Prodi = Prodi;
     }

     string Stringify()
     {
          return Name + " " + NIM + " " + Prodi;
     }
};

class dataBase
{
public:
     ifstream in;      //For data input
     ofstream out;     //For writes
     string fileNames; //For file name

     dataBase(const char *fileNames)
     {
          dataBase::fileNames = fileNames;
     }

     void saveData(Students Data)
     {
          cout << Data.Name << endl;
          cout << Data.NIM << endl;
          cout << Data.Prodi << endl;

          //Database
          dataBase::out.open(dataBase::fileNames, ios::app);
          dataBase::out << Data.Stringify() << endl;
          dataBase::out.close();
     }

     void showAllDatabase()
     {
          dataBase::in.open(dataBase::fileNames, ios::in);

          string Name, NIM, Prodi;
          int Index = 1;

          while (!dataBase::in.eof())
          {
               dataBase::in >> Name;
               dataBase::in >> NIM;
               dataBase::in >> Prodi;

               cout << Index++ << ".\t";
               cout << Name << "\t";
               cout << NIM << "\t";
               cout << Prodi << endl;
          }

          dataBase::in.close();
     }
};

int main(int argc, char const *argv[])
{
     string Name, NIM, Prodi;

     //Input data from user
     cout << "ENTER DATA STUDENTS" << endl
          << endl;

     cout << "Name: ";
     cin >> Name;

     cout << "NIM: ";
     cin >> NIM;

     cout << "Prodi: ";
     cin >> Prodi;

     cout << endl;

     //Make objects
     Students dataStudents = Students(Name, NIM, Prodi);

     dataBase dBase = dataBase("Data.txt");

     //Save data student to database
     dBase.saveData(dataStudents);

     cout << endl;

     //Show all data in database
     dBase.showAllDatabase();

     cin.get();
     return 0;
}