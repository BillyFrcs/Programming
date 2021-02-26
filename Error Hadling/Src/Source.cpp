#include <iostream>
#include <string>
#include <stdio.h>
#include <array>
#include <exception>

using namespace std;

//Prototype
int Kuadrat (int &Value);

int Division (int &Num, int &Denum)
{
     if (Denum == 0)
     {
        throw overflow_error ("Error division 0");
     }

     return Num / Denum;
}

int main()
{
     //Error handling (Exception)
     //1. Syntax error
     //2. Linking error
     //3. Non error
     //4. Runtine error

     int a = 13;
     int b = Kuadrat(a);

     cout << b << endl;

     cout << endl;

     int c, d, e;
     char Continue;

     /*while (true)
     {
          cout << "Num: ";
          cin >> c;

          cout << "Denum: ";
          cin >> d;

          e = Division(c, d);

          cout << d << endl;

          cout << "Continue (y/n): ";
          cin >> Continue;

          if (Continue == 'n' || Continue == 'N' )
             break;

     }

     cout << endl;/*



     //Array
     /*array <int, 5> e = {0, 1, 2, 3, 4};

     try 
     {
         cout << e.at(5) << endl; //Error here
     }

     catch (exception &f) //Process
     {
         cout << f.what() << endl;
     }*/

     //Division program with try, catch and throw
     cout << "Num: ";
     cin >> c;

     cout << "Denum: ";
     cin >> d;
     
     while (true)
     {
          try
          {
               e = Division(c, d);
               cout << e << endl;
          }

          catch (exception &g)
          {
               cout << g.what () << endl;
          }

          break;
     }

     system("pause > 0");
     cin.get();
     return 0;
}

int Kuadrat(int &Value)
{
     return Value * Value;
}