#include <iostream>
#include <string>

std::string name[50];
int age[2];

void Input()
{
     for (int i = 0; i < 1; i++)
     {
          std::cout << "Name = ";
          std::getline(std::cin, name[i]);

          std::cout << "Age = ";
          std::cin >> age[i];
     }
}

void Output(std::string data)
{
     for (int i = 0; i < 1; i++)
     {
          std::cout << "Show Name: " << name[i] << std::endl;
          std::cout << "Show Age: " << age[i] << std::endl;
     }
}

int main()
{
     //Show data input and output 
     Input();

     std::string data;
     Output(data);

     return 0;
}