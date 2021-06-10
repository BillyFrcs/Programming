#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

#define VALUE 0 //Preprocessor directive

namespace College
{
     //Struct student
     struct Student
     {
          char nameAcademicOfficer[30], nameStudent[30];

          long double totalCostCollege, costCollegeI, costCollegeII,
              costCollegeIII, costCollegeIV, remainderPaying, totalCost;

          int totalStudent;
     };

     class SemesterCollege
     {
     protected:                     //Properties
          std::vector<Student> vec; //Vector initialization

          Student s; //Calling from struct

     public:
          SemesterCollege() //Constructor
          {
               system("cls"); //Clear console
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
                    std::cin >> s.totalCostCollege;

                    std::cout << "Masukan pembayaran I Rp.";
                    std::cin >> s.costCollegeI;

                    std::cout << "Masukan pembayaran II Rp.";
                    std::cin >> s.costCollegeII;

                    std::cout << "Masukan pembayaran III Rp.";
                    std::cin >> s.costCollegeIII;

                    std::cout << "Masukan pembayaran IV Rp.";
                    std::cin >> s.costCollegeIV;

                    vec.push_back(s);
               }
          }
     };

     class Semester : public SemesterCollege //Access with inheritance
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
                    std::cout << "Total biaya kuliah Rp." << std::fixed << std::setprecision(0) << s.totalCostCollege << "\n"; //Remove large values (hex)
                    std::cout << "Pembayaran I       Rp." << std::fixed << std::setprecision(0) << s.costCollegeI << "\n";
                    std::cout << "Pembayaran II      Rp." << std::fixed << std::setprecision(0) << s.costCollegeII << "\n";
                    std::cout << "Pembayaran III     Rp." << std::fixed << std::setprecision(0) << s.costCollegeIII << "\n";
                    std::cout << "Pembayaran IV      Rp." << std::fixed << std::setprecision(0) << s.costCollegeIV << "\n";

                    //Calculate remainder paying
                    {
                         s.remainderPaying = s.totalCostCollege - (s.costCollegeI + s.costCollegeII + s.costCollegeIII + s.costCollegeIV);
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
                         s.totalCost = (s.costCollegeI + s.costCollegeII + s.costCollegeIII + s.costCollegeIV);
                         std::cout << "Total pembayaran " << s.nameStudent << " adalah Rp." << std::fixed << std::setprecision(0) << fabs(s.totalCost) << '\n';
                    }
               }
          }
     };
} //Namespace College

void displayData()
{
     //Object from class
     College::Semester *SC = new College::Semester(); //Heap memory

     SC->getDataAcademicOfficer();
     SC->getDataCostStudent();
     SC->displayDataStudent();
}

int main()
{
     displayData();

     std::cin.get();
     return 0;
}