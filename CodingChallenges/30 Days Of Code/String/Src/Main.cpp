#include <bits/stdc++.h>

int main()
{
     std::ios_base::sync_with_stdio(false);
     std::cin.tie(NULL);

     int N;
     std::cin >> N;

     for (int i = 0; i < N; i++)
     {
          std::string s, s1, s2;
          std::cin >> s;

          for (int j = 0; j < s.size(); j++)
          {
               if (j % 2 == 0)
                    s1 += s[j];

               else
                    s2 += s[j];
          }
          std::cout << s1 << " " << s2 << "\n";
     }

     return 0;
}