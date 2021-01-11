//Preprocessing directive
#include <iostream>

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

using namespace std;

double Pi = 5.190820;

int main (int argc, char const *argv[])
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
     #include "Library.h"

     cout << "DI = " << DI << endl;

     //cout << "Count = " << COUNT (5) << endl;
     //cout << "MAXIMUM = " << MAXIMUM (10, 2) << endl;

     cout << "Name string = " << Name << endl;

     system ("pause > 0");
     cin.get();
     return 0;
}
