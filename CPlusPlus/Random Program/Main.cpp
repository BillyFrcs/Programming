#include <fstream>
#include <iostream>
#include <stdlib.h>
#include <string>

constexpr bool EXT = true;

using namespace std;

class Crud
{
private:
     //Max limits data
     const int maxRow = 20;

     std::string namaMahasiswa[20], npmMahasiswa[20];

public:
     // tambahkan data
     virtual void addData()
     {
          char nama[50];
          char NPM[13];

          std::cin.ignore();

          std::cout << "Nama Mahasiswa: ";
          std::cin.getline(nama, 50);

          std::cout << "NPM Mahasiswa (Max 12 Digits): ";
          std::cin.getline(NPM, 13);

          for (int x = 0; x < maxRow; x++)
          {
               if ((namaMahasiswa[x] == "\0") && (namaMahasiswa[x] == "\0"))
               {
                    namaMahasiswa[x] = nama;
                    npmMahasiswa[x] = NPM;

                    break;
               }
          }
     }

     //Update or change Data
     void updateData(std::string search)
     {
          char nama[50];
          char npm[13];

          int counter = 0;

          for (int x = 0; x < maxRow; x++)
          {
               if ((namaMahasiswa[x] == search) || (npmMahasiswa[x] == search))
               {
                    counter++;

                    std::cout << "Nama baru mahasiswa: ";
                    std::cin.getline(nama, 50);

                    std::cout << "NPM baru mahasiswa: ";
                    std::cin.getline(npm, 13);

                    namaMahasiswa[x] = nama;
                    npmMahasiswa[x] = npm;

                    std::cout << "Update berhasil!" << std::endl;

                    break;
               }
          }

          if (counter == 0)
          {
               std::cout << "Tidak valid!" << std::endl;
          }
     }

     //Delete or remove data
     void deleteData(std::string search)
     {
          int counter = 0;

          for (int x = 0; x < maxRow; x++)
          {
               if ((namaMahasiswa[x] == search) || (namaMahasiswa[x] == search))
               {
                    counter++;

                    namaMahasiswa[x] = "";
                    npmMahasiswa[x] = "";

                    std::cout << "Penghapusan sukses" << std::endl;
               }
          }

          if (counter == 0)
          {
               std::cout << "Invalid!" << std::endl;
          }
     }

     //Display list data
     virtual void displayListData()
     {
          system("cls");

          std::cout << "Lists Data Mahasiswa \n";
          std::cout << "========================================\n";

          std::cout << "No\t\t|Nama\t\t|NPM\t\t" << std::endl;
          std::cout << "----------------------------------------\n";

          int counter = 0;

          for (int x = 0; x < maxRow; x++)
          {
               if ((namaMahasiswa[x] != "\0") && (npmMahasiswa[x] != "\0"))
               {
                    counter++;

                    std::cout << counter << ""
                              << "\t\t" << namaMahasiswa[x] << "\t\t" << npmMahasiswa[x] << std::endl;
               }
          }

          if (counter == 0)
          {
               std::cout << "Data tidak ada \n";
          }

          std::cout << "========================================\n\n";
     }

     //Searching data
     void searchingData(std::string search);

     //Open file CRUD
     void openFileCrud();

     //Save file CRUD
     void saveFileCrud();
};

void Crud::searchingData(string search)
{
     system("cls");

     cout << "Hasil Pencarian Data Mahasiswa \n";
     cout << "========================================\n";

     cout << "No\t\t|Nama\t\t|NPM\t\t" << endl;
     cout << "---------------------------------------\n";

     int counter = 0;

     for (int x = 0; x < maxRow; x++)
     {
          if ((namaMahasiswa[x] == search) || (npmMahasiswa[x] == search))
          {
               counter++;

               cout << counter << ""
                    << "\t\t" << namaMahasiswa[x] << "\t\t" << npmMahasiswa[x] << endl;

               break;
          }
     }

     if (counter == 0)
     {
          cout << "Pencarian tidak ditemukan! \n";
     }

     cout << "========================================\n\n";
}

void Crud::openFileCrud()
{
     string line;
     ifstream crudFile("DataMahasiswa.txt");

     if (crudFile.is_open())
     {
          int x = 0;

          while (getline(crudFile, line))
          {
               int l = line.length();

               namaMahasiswa[x] = line.substr(0, 12);    //0, 3
               npmMahasiswa[x] = line.substr(0, l - 12); //4, l - 4

               x++;
          }
     }
}

void Crud::saveFileCrud()
{
     //Saving file .txt
     ofstream crudFile;

     crudFile.open("DataMahasiswa.txt"); //This can change with another file location

     for (int x = 0; x < maxRow; x++)
     {
          if ((namaMahasiswa[x] == "\0") && (npmMahasiswa[x] == "\0"))
          {
               break;
          }

          else
          {
               crudFile << namaMahasiswa[x] + "," + npmMahasiswa[x] << endl;
          }
     }

     if (EXT == true)
     {
          //Save data
          cout << "Exit and saving file...\n";

          exit(EXT); //Function from stdlib.h header
     }
}

int main(void)
{
     //Object heap memory
     Crud *crud = new Crud;

     system("cls");

     //User select menu
     int options;
     string cariData;

     do
     {
          cout << "====Program CRUD Data Mahasiswa====" << endl;
          cout << "1. Tambahkan Data" << endl;
          cout << "2. Perbarui Data" << endl;
          cout << "3. Hapus Data" << endl;
          cout << "4. Cari Data" << endl;
          cout << "5. Perlihatkan Data" << endl;
          cout << "6. Keluar & Simpan" << endl;
          cout << "=========================" << endl
               << endl;

          cout << "Pilih Menu: ";
          cin >> options;

          //All crud data conditions
          switch (options)
          {
               // Tambahkan data
          case 1:
               crud->addData();
               system("cls");
               break;

               // Perbarui data
          case 2:
               cin.ignore();
               cout << "Update nama atau NPM: ";
               getline(cin, cariData);
               crud->updateData(cariData);
               system("cls");
               break;

               // Hapus data
          case 3:
               cin.ignore();
               cout << "Hapus nama atau NPM: ";
               getline(cin, cariData);
               crud->deleteData(cariData);
               system("cls");
               break;

               // cari data
          case 4:
               cin.ignore();
               cout << "Search by name or ID: ";
               getline(cin, cariData);
               crud->searchingData(cariData);
               break;

               // perlihatkan semua data
          case 5:
               crud->displayListData();
               break;

          default:
               std::cout << "Tidak ditemukan! \n";
               break;
          }

     } while (options != 100);

     return EXIT_SUCCESS;
}