#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

vector<int> parseInts(string str)
{
     // Complete this function
     std::vector<int> vec;
     std::stringstream ss(str);

     char ch;

     int n;

     while (ss >> n)
     {
          vec.push_back(n);

          ss >> ch;
     }

     return vec;
}

int main()
{
     /*Sample input
       23,4,56
     */

     string str;
     cin >> str;
     vector<int> integers = parseInts(str);
     for (int i = 0; i < integers.size(); i++)
     {
          cout << integers[i] << "\n";
     }

     return 0;
}