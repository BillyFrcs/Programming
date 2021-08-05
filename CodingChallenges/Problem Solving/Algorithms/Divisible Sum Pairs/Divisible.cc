#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'divisibleSumPairs' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER k
 *  3. INTEGER_ARRAY ar
 */

int divisibleSumPairs(int n, int k, vector<int> arr)
{
     int f[k] = {0};
     for (int i = 0; i < n; i++)
     {
          f[arr[i] % k]++;
     }

     int counter = f[0] * (f[0] - 1) / 2;

     for (int j = 1; j <= (k / 2) && (j != (k - j)); j++)
     {
          counter += f[j] * f[k - j];
     }

     if (k % 2 == 0)
     {
          counter += (f[k / 2] * (f[k / 2] - 1) / 2);
     }

     return counter;
}

int main()
{
     /*Sample input
      6 3             
      1 3 2 6 1 2
     */

     ofstream fout(getenv("OUTPUT_PATH"));

     string first_multiple_input_temp;
     getline(cin, first_multiple_input_temp);

     vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

     int n = stoi(first_multiple_input[0]);

     int k = stoi(first_multiple_input[1]);

     string ar_temp_temp;
     getline(cin, ar_temp_temp);

     vector<string> ar_temp = split(rtrim(ar_temp_temp));

     vector<int> ar(n);

     for (int i = 0; i < n; i++)
     {
          int ar_item = stoi(ar_temp[i]);

          ar[i] = ar_item;
     }

     int result = divisibleSumPairs(n, k, ar);

     fout << result << "\n";

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

vector<string> split(const string &str)
{
     vector<string> tokens;

     string::size_type start = 0;
     string::size_type end = 0;

     while ((end = str.find(" ", start)) != string::npos)
     {
          tokens.push_back(str.substr(start, end - start));

          start = end + 1;
     }

     tokens.push_back(str.substr(start));

     return tokens;
}