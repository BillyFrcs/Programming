#include <bits/stdc++.h>

int main()
{

     int N;

     std::ios_base::sync_with_stdio(false);
     std::cin.tie(NULL);

     std::cin >> N;

     int arr[N];

     for (int i = 0; i < N; i++)
     {
          std::cin >> arr[i];
     }

     for (int i = N - 1; i >= 0; i--)
     {
          std::cout << arr[i] << " ";
     }

     return 0;
}