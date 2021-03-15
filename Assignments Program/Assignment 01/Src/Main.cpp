#include <iostream>
#include <string>

//Billy Franscois Kolibonso
//12155201200012

using namespace std;

//Global variable
string name, TTL, asal, NIM;

void myBiodata()
{
     cout << "Nama: ";
     getline(cin, name);

     cout << "NIM: ";
     getline(cin, NIM);

     cout << "TTL: ";
     getline(cin, TTL);

     cout << "Asal: ";
     getline(cin, asal);
}

void displayMyBiodata()
{
     system("Color 1"); //Change color console
     system("cls"); //This for clear console
     
     cout << "==============================" << endl;
     cout << "Nama : " << name << endl;
     cout << "NIM  : " << NIM << endl;
     cout << "TTL  : " << TTL << endl;
     cout << "Asal : " << asal << endl;
     cout << "===============================" << endl;
     cout << "-------------------------------" << endl;
}

int main()
{
     //Called function 
     myBiodata();

     displayMyBiodata();

     return 0;
}