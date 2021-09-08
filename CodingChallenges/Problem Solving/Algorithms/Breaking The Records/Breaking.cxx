#include <bits/stdc++.h>

int main()
{
     /*Sample input
      9
      10 5 20 20 4 5 2 25 1
     */

     int n;

     std::ios_base::sync_with_stdio(false);
     std::cin.tie(NULL);

     std::cin >> n;

     std::vector<int> scores;

     for (auto i = 0; i < n; i++)
     {
          int numbers;

          std::cin >> numbers;

          scores.push_back(numbers);
     }

     int min = scores[0], max = scores[0];

     int countMin = 0, countMax = 0;

     for (auto i = 0; i < n; i++)
     {
          if (scores[i] < min)
          {
               min = scores[i];
               countMin++;
          }
          else if (scores[i] > max)
          {
               max = scores[i];
               countMax++;
          }
     }
     std::cout << countMax << " " << countMin;

     return 0;
}