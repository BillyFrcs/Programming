#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
     //Count sisi cube ==> Kubus
     float S, Vol;

     cout << "Enter sisi cube: ";
     cin >> S;

     Vol = S * S * S;

     cout << "Result volume cube is " << Vol << endl;

     //Count keliling persegi panjang
     float p, l, Result;

     cout << "Enter panjang: ";
     cin >> p;

     cout << "Enter lebar: ";
     cin >> l;

     Result = p * l;

     cout << "Result is " << Result << endl;

     cout << endl;

     //String length() function for count total letter
     string txt = "Billy Franscois";
     cout << "Total letter = " << txt.length() << endl;

     //Change the string Index
     string text = "Lol";
     text[0] = 'T';
     cout << text << endl;

     //Access another character
     string character = "Smart";
     cout << character[0] << endl;

     cout << endl;

     //Math operators
     //Find the highest number
     int a = 10, b = 30;

     cout << max(a, b) << endl;

     //Square root
     int x = 6;
     cout << sqrt(x) << endl;

     //Round function
     cout << round(3.8) << endl;



     return 0;
}