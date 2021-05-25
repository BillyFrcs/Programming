#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>

//Struct student
struct Student
{
     char nameAcademicOfficer[20], nameStudent[20];

     uint64_t totalCostCollage, costCollageI, costCollageII,
         costCollageIII, costCollageIV, remainderPaying;
};

namespace Collage
{
     class SemesterCollage
     {
     private:
          std::vector<Student> vec; //Vector initialization
          int totalStudent;

          Student s; //Calling from struct

     public:
          SemesterCollage()
          {
               system("cls"); //Clear console

               std::cout << "||=================================||\n";
               std::cout << "||Program Pembayaran Uang Semester ||\n";
               std::cout << "||Kelompok 3, Kelas A (Informatika)||\n";
               std::cout << "||=================================||\n";
               std::cout << "||Billy Kolibonso                  ||\n";
               std::cout << "||Alviandro Soukotta               ||\n";
               std::cout << "||Eta Onarely                      ||\n";
               std::cout << "||Dorsila Defretes                 ||\n";
               std::cout << "||Edison Ngaibawar                 ||\n";
               std::cout << "||Aryans Latuputty                 ||\n";
               std::cout << "||=================================||\n\n";
          }

          void getDataAcademicOfficer()
          {
               std::cout << "Masukan nama petugas akademik: ";
               gets(s.nameAcademicOfficer);

               std::cout << "Masukan jumlah mahasiswa: ";
               std::cin >> totalStudent;

               std::cout << "\nHi " << s.nameAcademicOfficer << " petugas akademik, silahkan masukan data mahasiswa...\n";
          }

          void getDataCostStudent()
          {
               for (std::size_t i = 0; i < totalStudent; i++)
               {
                    std::cin.ignore();
                    std::cout << "\nNama mahasiswa: ";
                    std::cin.getline(s.nameStudent, 20);

                    std::cout << "Total biaya kuliah: ";
                    std::cin >> s.totalCostCollage;

                    std::cout << "Masukan pembayaran I: ";
                    std::cin >> s.costCollageI;

                    std::cout << "Masukan pembayaran II: ";
                    std::cin >> s.costCollageII;

                    std::cout << "Masukan pembayaran III: ";
                    std::cin >> s.costCollageIII;

                    std::cout << "Masukan pembayaran IV: ";
                    std::cin >> s.costCollageIV;

                    vec.push_back(s);
               }
          }

          virtual void displayDataStudent()
          {
               std::cout << "\nJumlah mahasiswa: " << totalStudent << "\n";

               for (std::size_t i = 0; i < totalStudent; ++i)
               {
                    s = vec[i];

                    std::cout << "\nNama mahasiswa\t  : " << s.nameStudent << "\n";
                    std::cout << "Total biaya kuliah: " << s.totalCostCollage << "\n";
                    std::cout << "Pembayaran I      : " << s.costCollageI << "\n";
                    std::cout << "Pembayaran II     : " << s.costCollageII << "\n";
                    std::cout << "Pembayaran III    : " << s.costCollageIII << "\n";
                    std::cout << "Pembayaran IV     : " << s.costCollageIV << "\n";

                    s.remainderPaying = s.totalCostCollage - (s.costCollageI + s.costCollageII + s.costCollageIII + s.costCollageIV);

                    std::cout << "Sisa pembayaran   : " << s.remainderPaying << '\n';
               }
          }
     };
} //Namespace Collage

void displayData()
{
     //Object from class
     Collage::SemesterCollage *SC = new Collage::SemesterCollage(); //Heap memory

     SC->getDataAcademicOfficer();
     SC->getDataCostStudent();
     SC->displayDataStudent();
}

int main()
{
     displayData();

     std::cin.get();
}