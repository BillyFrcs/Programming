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

     cout << endl;

     /*making a program for a bus service. 
     A bus can transport 50 passengers at once. 
     Given the number of passengers waiting in the bus station as 
     input, you need to calculate and output how many empty seats 
     the last bus will have.*/
     
     int pasNo;
     int remSeat;
     
     cout << "Pass No: ";
     cin >> pasNo;

     remSeat = pasNo % 50;
     remSeat = 50 - remSeat;

     cout << remSeat << endl;

     return 0;
}