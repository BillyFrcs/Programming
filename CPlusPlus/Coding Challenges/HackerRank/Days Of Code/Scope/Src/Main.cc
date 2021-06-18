#include <bits/stdc++.h>

class Difference
{
private:
     std::vector<int> elements;

public:
     int maximumDifference;

     // Add your code here
     Difference(std::vector<int> e)
     {
          this->elements = e;
     }

     int computeDifference()
     {
          int min = elements[0], max = elements[0];

          for (auto i = 0; i < elements.size(); i++)
          {
               if (min < elements[i])
               {
                    min = elements[i];
               }
               else if (max > elements[i])
               {
                    max = elements[i];
               }
          }

          maximumDifference = abs(min - max);

          return maximumDifference;
     }
}; // End of Difference class

int main()
{
     /*Sample input
     3
     1 2 5
     */

     int N;
     std::cin >> N;

     std::ios_base::sync_with_stdio(false);
     std::cin.tie(NULL);

     std::vector<int> a;

     for (int i = 0; i < N; i++)
     {
          int e;
          std::cin >> e;

          a.push_back(e);
     }

     Difference d(a);

     d.computeDifference();

     std::cout << d.maximumDifference;

     return 0;
}