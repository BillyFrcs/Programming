#include <iostream>
#include <string>
#include <vector>

namespace College
{
     //class Student (just initialize the properties)
     class Student
     {
     public:
          std::string adminName, nameStudent;
          int totalStudent;

          float valueAssignment, examUTS, examUAS;
     };

     //class PredicateStudent (access all the properties from Student class)
     class PredicateStudent
     {
     public:
          PredicateStudent()
          {
               system("cls");
          }

          void dataAdministration()
          {
               std::cout << "Masukan nama admin: ";
               std::getline(std::cin, _student.adminName);

               std::cout << "Masukan jumlah mahasiswa: ";
               std::cin >> _student.totalStudent;

               std::cout << "\nHi " << _student.adminName << " petugas TU, silahkan masukan data mahasiswa sebanyak "
                         << _student.totalStudent << " kali.\n";
          }

          void inputDataStudent()
          {
               for (auto i = 0; i < _student.totalStudent; i++)
               {
                    std::cin.ignore();

                    std::cout << "\nMasukan nama mahasiswa: ";
                    std::getline(std::cin, _student.nameStudent);

                    std::cout << "Masukan nilai tugas: ";
                    std::cin >> _student.valueAssignment;

                    std::cout << "Masukan nilai UTS: ";
                    std::cin >> _student.examUTS;

                    std::cout << "Masukan nilai UAS: ";
                    std::cin >> _student.examUAS;

                    _vec.push_back(_student);
               }
          }

          virtual void displayDataPredicate()
          {
               std::cout << "\n===== List Students =====\n";
               for (auto i = 0; i < _student.totalStudent; i++)
               {
                    _student = _vec[i];

                    std::cout << "\nNama mahasiswa: " << _student.nameStudent << std::endl;

                    int qualityValue = (_student.valueAssignment * 0.2) + (_student.examUTS * 0.3) + (_student.examUAS * 0.5);

                    std::cout << "Nilai mutu: " << qualityValue << std::endl;

                    if (qualityValue >= 85 && qualityValue <= 100)
                    {
                         std::cout << "Huruf mutu: " << _predicate[0] << std::endl;
                         std::cout << "Category: " << _category[0] << std::endl;
                    }
                    else if (qualityValue >= 80 && qualityValue <= 84)
                    {
                         std::cout << "Huruf mutu: " << _predicate[0] << "-" << std::endl;
                         std::cout << "Category: " << _category[1] << std::endl;
                    }
                    else if (qualityValue >= 75 && qualityValue <= 79)
                    {
                         std::cout << "Huruf mutu: " << _predicate[1] << "+" << std::endl;
                         std::cout << "Category: " << _category[2] << std::endl;
                    }
                    else if (qualityValue >= 70 && qualityValue <= 74)
                    {
                         std::cout << "Huruf mutu: " << _predicate[1] << std::endl;
                         std::cout << "Category: " << _category[3] << std::endl;
                    }
                    else if (qualityValue >= 65 && qualityValue <= 69)
                    {
                         std::cout << "Huruf mutu: " << _predicate[1] << "-" << std::endl;
                         std::cout << "Category: " << _category[4] << std::endl;
                    }
                    else if (qualityValue >= 60 && qualityValue <= 64)
                    {
                         std::cout << "Huruf mutu: " << _predicate[2] << "+" << std::endl;
                         std::cout << "Category: " << _category[5] << std::endl;
                    }
                    else if (qualityValue >= 55 && qualityValue <= 59)
                    {
                         std::cout << "Huruf mutu: " << _predicate[2] << std::endl;
                         std::cout << "Category: " << _category[6] << std::endl;
                    }
                    else if (qualityValue >= 40 && qualityValue <= 54)
                    {
                         std::cout << "Huruf mutu: " << _predicate[3] << std::endl;
                         std::cout << "Category: " << _category[7] << std::endl;
                    }
                    else if (qualityValue <= 39)
                    {
                         std::cout << "Huruf mutu: " << _predicate[4] << std::endl;
                         std::cout << "Category: " << _category[8] << std::endl;
                    }
               }
          }

     private:
          //private properties
          std::vector<Student> _vec;
          Student _student;

          //Array to access the elements
          char _predicate[5] = {'A', 'B', 'C', 'D', 'E'};
          std::string _category[9] = {"Istimewa", "Sangat baik", "Lebih baik", "Baik", "Cukup baik",
                                     "Kurang baik", "Cukup", "Kurang", "Sangat kurang"};
     };
} //namespace College

int main(void)
{
     College::PredicateStudent PS;

     PS.dataAdministration();
     PS.inputDataStudent();
     PS.displayDataPredicate();

     return 0;
}