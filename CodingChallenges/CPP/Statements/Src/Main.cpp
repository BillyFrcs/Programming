#include <bits/stdc++.h>

using namespace std;

int main()
{
     int N;
     cin >> N;
     cin.ignore(numeric_limits<streamsize>::max(), '\n');

     string weird = "Weird";
     string notWeird = "Not Weird";

     string ans = "";

     if (N % 2 == 1)
     {
          ans = weird;
     }

     else if (N >= 2)
     {
          if (N > 20)
          {
               ans = notWeird;
          }
          else if (N >= 6)
          {
               ans = weird;
          }
          else if (N >= 2)
          {
               ans = notWeird;
          }
     }

     cout << ans << endl;
      
      //With ternay operator
     //( ((n & 1) == 1 || (6 <= n && n <= 20)) ? "Weird" : "Not Weird")

     return 0;
}
