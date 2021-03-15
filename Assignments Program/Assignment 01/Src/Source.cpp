#include <iostream>

//Billy Franscois Kolibonso
//12155201200012

using namespace std;

int main()
{
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
          cout << "Anda LULUS dengan nilai " << Nilai << "\n";
     }

     return 0;
}