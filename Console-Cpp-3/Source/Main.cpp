//Preprocessing directive
#include <iostream>
//Macro change variable with name, without memory
#define PI 5.190820
#define BI 3.15626117819
#define LANGUAGE "English"
#define KUADRAT (X) (X * X)
#define MAX (A, B)

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

     system ("pause > 0");
     cin.get();
     return 0;
}
