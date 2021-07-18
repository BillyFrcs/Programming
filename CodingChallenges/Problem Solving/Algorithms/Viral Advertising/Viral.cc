#include <bits/stdc++.h>

int viralAdvertising(int n)
{
     int sum = 0, people = 5;
     for (int i = 0; i < n; i++)
     {
          people = std::floor(people / 2);

          sum += people;

          people *= 3;
     }
     return sum;
}

int main()
{
     /*Sample input
       3
     */

     int n;

     std::ios_base::sync_with_stdio(false);
     std::cin.tie(NULL);

     std::cin >> n;

     std::cout << viralAdvertising(n) << std::endl;

     return 0;
}