#include <iostream>
#include <string>

using namespace std;

string name[50];
int age[2];

void Input()
{
     for (int i = 0; i < 1; i++)
     {
          cout << "Name = ";
          getline(cin, name[i]);

          cout << "Age = ";
          cin >> age[i];
     }
}

void Output(string data)
{
     for (int i = 0; i < 1; i++)
     {
          cout << "Show Name: " << name[i] << endl;
          cout << "Show Age: " << age[i] << endl;
     }
}

int main()
{
     Input();

     string data;
     
     Output(data);

     return 0;
}