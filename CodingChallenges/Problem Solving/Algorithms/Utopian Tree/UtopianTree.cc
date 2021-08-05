#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'utopianTree' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER n as parameter.
 */

int utopianTree(int n)
{
     if (n < 3)
     {
          return n + 1;
     }
     else if (n % 2 == 0)
     {
          return utopianTree(n - 2) * 2 + 1;
     }

     return 2 * utopianTree(n - 2) + 1 * 2;

     //return ~(~1<<(n>>1)) << n%2;
}

int main()
{
     /*Sample input
       3
       0
       1
       4
     */

     ofstream fout(getenv("OUTPUT_PATH"));

     string t_temp;
     getline(cin, t_temp);

     int t = stoi(ltrim(rtrim(t_temp)));

     for (int t_itr = 0; t_itr < t; t_itr++)
     {
          string n_temp;
          getline(cin, n_temp);

          int n = stoi(ltrim(rtrim(n_temp)));

          int result = utopianTree(n);

          fout << result << "\n";
     }

     fout.close();

     return 0;
}

string ltrim(const string &str)
{
     string s(str);

     s.erase(
         s.begin(),
         find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace))));

     return s;
}

string rtrim(const string &str)
{
     string s(str);

     s.erase(
         find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
         s.end());

     return s;
}