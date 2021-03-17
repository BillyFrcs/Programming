#include <iostream>
#include <string>

using namespace std;

//class
//public
//private
//protacted
class Students
{
public:
     string Name;
     string Hobby;
     int Age;
     double Height;
};

int main (int argc, char const *argv[])
{
     system ("cls");

     Students student;

     //Object
     student.Name = "Billy Franscois";

     student.Hobby = "Coding";

     student.Age = 18;

     student.Height = 170.0;

     cout << "Name: " << student.Name << endl;
     cout << "Hobby: " << student.Hobby << endl;
     cout << "Age: " << student.Age << endl;
     cout << "Height: " << student.Height << endl;

     cin.get();
     return 0;
}