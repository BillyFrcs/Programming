#include <bits/stdc++.h>

int main()
{
     /*Reverse numbers arrays
     *Example input
     4
     1 4 3 2*/

     int N;

     std::ios_base::sync_with_stdio(false);
     std::cin.tie(NULL);

     std::cin >> N;

     int A[N];

     for (int i = 0; i < N; i++)
     {
          std::cin >> A[i];
     }
     
     //Reverse the numbers
     for (int i = (N - 1); i >= 0; i--)
     {
          std::cout << A[i] << " ";
     }
}