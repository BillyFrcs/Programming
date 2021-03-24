#include <iostream>
#include <string>

//Billy Franscois Kolibonso
//12155201200012

using namespace std;

//Global variable
string name, TTL, asal, NIM;

//Input biodata
void myBiodata()
{
     cout << "Nama : ";
     getline(cin, name);

     cout << "NIM  : ";
     getline(cin, NIM);

     cout << "TTL  : ";
     getline(cin, TTL);

     cout << "Asal : ";
     getline(cin, asal);
}

//Output biodata
void displayMyBiodata()
{
     system("cls"); //This for clear console

     cout << "==================================" << endl;
     cout << "BIODATA SAYA" << endl;
     cout << "Nama : " << name << endl;
     cout << "NIM  : " << NIM << endl;
     cout << "TTL  : " << TTL << endl;
     cout << "Asal : " << asal << endl;
     cout << "==================================" << endl;
     cout << "----------------------------------" << endl;
}

int main()
{
     //Called function
     myBiodata();

     displayMyBiodata();

     cout << endl;

     int n1, n2, n3, n4, Nilai;
     n1 = 80;
     n2 = 50;
     n3 = 60;
     n4 = 80;

     Nilai = (n1 + n2 + n3 + n4) / 4;

     if (Nilai < 50)
     {
          cout << "Anda tidak lulus. Nilai anda " << Nilai << endl;
     }
     else
     {
          cout << "Anda LULUS dengan nilai " << Nilai << endl;
     }

     return 0;
}