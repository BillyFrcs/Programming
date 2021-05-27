#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

#define VALUE 0

//Struct student
struct Student
{
     char nameAcademicOfficer[30], nameStudent[30];

     long double totalCostCollage, costCollageI, costCollageII,
         costCollageIII, costCollageIV, remainderPaying, totalCost;

     int totalStudent;
};

namespace Collage
{
     class SemesterCollage
     {
     protected:                     //Property
          std::vector<Student> vec; //Vector initialization

          Student s; //Calling from struct

     public:
          SemesterCollage() //Constructor
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
               std::cin.getline(s.nameAcademicOfficer, 20);

               std::cout << "Masukan jumlah mahasiswa: ";
               std::cin >> s.totalStudent;

               std::cout << "\nHi " << s.nameAcademicOfficer << " petugas akademik, silahkan masukan data mahasiswa sebanyak "
                         << s.totalStudent << " kali.\n";
          }

          void getDataCostStudent()
          {
               for (auto i = 0; i < s.totalStudent; i++)
               {
                    std::cin.ignore();
                    std::cout << "\nNama mahasiswa: ";
                    std::cin.getline(s.nameStudent, 20);

                    std::cout << "Total biaya kuliah Rp.";
                    std::cin >> s.totalCostCollage;

                    std::cout << "Masukan pembayaran I Rp.";
                    std::cin >> s.costCollageI;

                    std::cout << "Masukan pembayaran II Rp.";
                    std::cin >> s.costCollageII;

                    std::cout << "Masukan pembayaran III Rp.";
                    std::cin >> s.costCollageIII;

                    std::cout << "Masukan pembayaran IV Rp.";
                    std::cin >> s.costCollageIV;

                    vec.push_back(s);
               }
          }
     };

     class Semester : public SemesterCollage //Access with inheritance
     {
     public:
          virtual void displayDataStudent()
          {
               std::cout << "\n===== Daftar pembayaran mahasiswa =====\n";
               std::cout << "\nJumlah mahasiswa: " << s.totalStudent << " orang.\n";

               for (auto i = 0; i < s.totalStudent; i++)
               {
                    s = vec[i];

                    std::cout << "\nNama mahasiswa\t     : " << s.nameStudent << "\n";
                    std::cout << "Total biaya kuliah Rp." << std::fixed << std::setprecision(0) << s.totalCostCollage << "\n"; //Remove large values (hex)
                    std::cout << "Pembayaran I       Rp." << std::fixed << std::setprecision(0) << s.costCollageI << "\n";
                    std::cout << "Pembayaran II      Rp." << std::fixed << std::setprecision(0) << s.costCollageII << "\n";
                    std::cout << "Pembayaran III     Rp." << std::fixed << std::setprecision(0) << s.costCollageIII << "\n";
                    std::cout << "Pembayaran IV      Rp." << std::fixed << std::setprecision(0) << s.costCollageIV << "\n";

                    //Calculate remainder paying
                    {
                         s.remainderPaying = s.totalCostCollage - (s.costCollageI + s.costCollageII + s.costCollageIII + s.costCollageIV);
                    }

                    std::cout << "Sisa pembayaran    Rp." << fabs(s.remainderPaying) << '\n'; //To remove negative value

                    std::string info = "Keterangan\t     : ";

                    if (s.remainderPaying == VALUE)
                    {
                         std::cout << info << "Lunas\n";
                    }
                    else if (s.remainderPaying < VALUE)
                    {
                         std::cout << info << "Lunas(ada kelebihan Rp." << fabs(s.remainderPaying) << ")\n";
                    }
                    else
                    {
                         std::cout << info << "Masih menunggak(kurang Rp." << fabs(s.remainderPaying) << ")\n";
                    }

                    //Calculate total cost
                    {
                         s.totalCost = (s.costCollageI + s.costCollageII + s.costCollageIII + s.costCollageIV);
                         std::cout << "Total pembayaran " << s.nameStudent << " adalah Rp." << std::fixed << std::setprecision(0) << fabs(s.totalCost) << '\n';
                    }
               }
          }
     };
} //Namespace Collage

void displayData()
{
     //Object from class
     Collage::Semester *SC = new Collage::Semester(); //Heap memory

     SC->getDataAcademicOfficer();
     SC->getDataCostStudent();
     SC->displayDataStudent();
}

int main()
{
     displayData();

     std::cin.get();
}