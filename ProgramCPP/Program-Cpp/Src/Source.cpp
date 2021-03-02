#include <iostream>
#include <string>
#include <stdio.h>
#include <ctime>

using namespace std;

int main()
{
     //Count sisi cube ==> Kubus
     float S, Vol;

     cout << "Enter sisi cube: ";
     cin >> S;

     Vol = S * S * S;

     cout << "Result volume cube is " << Vol << endl;

     cout << endl;

     //Count keliling persegi panjang
     float p, l, Result;

     cout << "Enter panjang: ";
     cin >> p;

     cout << "Enter lebar: ";
     cin >> l;

     Result = p * l;

     cout << "Result is " << Result << endl;

     system("pause < 0");
     return 0;
}