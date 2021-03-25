#include <bits/stdc++.h>

using namespace std;

string num[6] = {"Greater than 5\n", "One\n", "Two\n",
                 "Three\n", "Four\n", "Five\n"};

int main()
{
     int in;

     cin >> in;

     if (in > 5)
          cout << num[0];

     else
          cout << num[in];

     return 0;
}