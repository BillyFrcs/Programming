#include <iostream>
#include <string>
#include <vector>

struct Student
{
     std::string name;
     int age = 0;
};

int main()
{
     std::vector<Student> vec;
     int totalStudent = 3;

     for (int i = 0; i < totalStudent; ++i)
     {
          Student s;

          std::cin.ignore();
          std::cout << "Enter name: ";
          std::getline(std::cin, s.name);

          std::cout << "Enter age: ";
          std::cin >> s.age;

          vec.push_back(s);
     }

     for (size_t i = 0; i < vec.size(); ++i)
     {
          Student s = vec[i];
          std::cout << s.name << "\n";
          std::cout << s.age << "\n";
     }
}