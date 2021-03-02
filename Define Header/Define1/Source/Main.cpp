//Preprocessing directive
#include <iostream>
#include <string>
#include "SOO.hpp"
#include "Bar.hpp"
#include "Together.hpp"
//Macro change variable with name, without memory
#define PI 5.190820
#define BI 3.15626117819
#define LANGUAGE "English"
#define KUADRAT (X) (X * X)
#define MAX (A, B)

//Preprocessing directive with if else statements
#if ID == 0
    #define LANG "Indonesian"

#else 
    #define LANG "Spanish"

#endif

//Check there is BOO or not
#define BOO 19
//ifdef ==> if definition
#ifdef BOO
     #define TESTBOO "BOO yes"

#else 
     #define TESTBOO "BOO no"

#endif
     

//ifndef ==> if not definition
#ifndef FOO
     #define FOO "New FOO"
      
#else 

#endif


using namespace std;

double Pi = 5.190820;

int main ()
{
     //Basic preprocessing directive
     cout << "Value PI = " << PI << endl;

     cout << "Value Pi double = " << Pi << endl;
     cout << "Address Pi double = " << &Pi << endl;

     cout << endl;

     //Prepsrocessing directive macro
     cout << "BI = " << BI << endl;
     
     cout << "Language: " << LANGUAGE << endl;

     /*/Undefine 
     #undef LANGUAGE
     #undef LANGUAGE "Indonesian"
     cout << LANGUAGE << endl;*/

     cout << "Kuadrat = " << 5 * 5 << endl;

     cout << "Maximum = " << ((5 > 4) ? 5 : 4) << endl;

     cout << endl;



     //Preprocessing directive if else statements
     cout << "Option language: " << LANG << endl;

     cout << endl;



     //Preprocessing directive include 
     #include "Library.hpp"

     cout << "DI = " << DI << endl;

     //cout << "Count = " << COUNT (5) << endl;
     //cout << "MAXIMUM = " << MAXIMUM (10, 2) << endl;

     cout << "Name string = " << Name << endl;

     cout << endl;


     //Preprocessing directive "ifdef"
     cout << TESTBOO << endl;
     cout << FOO << endl;

     //cout << SOO << endl;
     
     cout << endl;

     //Pragma once 
     Students Student;

     Student.NPM = 8;
     cout << Student.NPM << endl;

     cin.get();
     return 0;
}
