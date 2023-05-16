#include <iostream>
#include <string>
#include <vector>

namespace Program
{
    class Data 
    {
    public:
        int n;
        std::string name;
        std::string nim;
        int semester;

    public:
        int totalSemester;
        int totalSubject;
        std::string subjectName;
        char alphabeticalValue;
        int sks;
        int weight;
        int sksXWeight;
        float ips;
    };

    class Student
    {
    private:
        std::vector<Data> VecData;
        Data StudentData;

    public:
        Student()
        {
            system("clear");
        }

        void Initialize()
        {     
            std::cerr << "Masukan nama anda: ";
            std::getline(std::cin, StudentData.name);

            std::cerr << "Masukan NIM anda: ";
            std::cin >> StudentData.nim;
            
            std::cout << "Masukan data semester (1/2): ";
            std::cin >> StudentData.semester;

            std::cout << "Berapa data mata kuliah yang ingin anda input? ";
            std::cin >> StudentData.totalSubject;
        }

        void InputData()
        {
            for (auto i = 0; i < StudentData.totalSubject; i++)
            {
                std::cin.ignore();

                std::cout << "\nMasukan Nama Mata Kuliah: ";
                std::getline(std::cin, StudentData.subjectName);

                std::cout << "SKS: ";
                std::cin >> StudentData.sks;

                std::cout << "Nilai Abjad: ";
                std::cin >> StudentData.alphabeticalValue;

                std::cout << "Bobot: ";
                std::cin >> StudentData.weight;

                VecData.push_back(StudentData);
            }
        }

        void DisplayData()
        {
            std::cout << "\nNama : " << StudentData.name << std::endl;
            std::cout << "NIM  : " << StudentData.nim << std::endl;

            std::cout << "\n Semester " << StudentData.semester << std::endl;

            std::cout << "\n------------------------------------------------------------------------------\n";
            std::cout << " No\t Nama Mata Kuliah\t SKS\t Nilai Abjad\t Bobot\t SKS x Bobot \n";

            for (auto i = 0; i < StudentData.totalSubject; i++)
            {
                StudentData = VecData[i];

                StudentData.sksXWeight = StudentData.sks * StudentData.weight;

                std::cout << " " << i + 1 << "\t " << StudentData.subjectName << "\t\t\t" << "  " << StudentData.sks << "\t\t" << "" << StudentData.alphabeticalValue << "\t" << "   " << StudentData.weight << "\t" << "     " << StudentData.sksXWeight << "" << std::endl;
            }

            std::cout << "------------------------------------------------------------------------------\n";

            StudentData.ips = (StudentData.sks * StudentData.weight) / 20.0f;

            std::cout << "\n\t\t\t\t\t\t\tIPS semester " << StudentData.semester << ": " << StudentData.ips << std::endl;
        }
    };
}

int main(int argc, char **)
{
    /* Input Example
    Semester 1 :
    Kidas 1 = sks 3
    Fidas 1 = sks 4
    Migas = sks 2

    Semester 2 :
    Geofisik = sks 3
    Ddp = sks 3
    Fidas = sks 4
    */

    Program::Student StudentObj;

    StudentObj.Initialize();
    StudentObj.InputData();
    StudentObj.DisplayData();

    return EXIT_SUCCESS;
}