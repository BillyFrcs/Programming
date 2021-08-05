#include <bits/stdc++.h>

/*
 * Complete the 'bitwiseAnd' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER N
 *  2. INTEGER K
 */

int bitwiseAnd(int N, int K)
{
     int max = 0;

     for (int a = 1; a < N; a++)
     {
          for (int b = (a + 1); b <= N; b++)
          {
               int value = (a & b);

               if (value > max && value < K)
               {
                    max = value;
               }
          }
     }

     return max;
}

int main()
{
     /*Sample input
       3       
       5 2     
       8 5     
       2 2 
     */

     int T, N, K;

     std::ios_base::sync_with_stdio(false);
     std::cin.tie(NULL);

     std::cin >> T;

     while (T--)
     {
          std::cin >> N >> K;
          std::cout << bitwiseAnd(N, K) << std::endl;
     }

     return 0;
}