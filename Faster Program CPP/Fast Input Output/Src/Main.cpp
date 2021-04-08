#include <ios>
#include <iostream>

void Fast()
{
     int arr[4];

     //Fast I/O
     std::ios_base::sync_with_stdio(false);
     std::cin.tie(NULL);

     for (int i = 0; i <= 5; i++)
     {
          std::cin >> arr[i];
     }

     for (int i = 0; i <= 5; i++)
     {
          std::cout << arr[i];
     }
}

void fastProgram()
{
     std::ios_base::sync_with_stdio(false);
     std::cin.tie(NULL);

     int n, a, b, val = 0;

     std::cin >> n >> a;

     for (int i = 0; i < n; i++)
     {
          std::cin >> b;

          if (a % b == 0)
               val++;
     }
     std::cout << val << "\n";
}

int main()
{
     //Fast();

     std::cout << std::endl;

     fastProgram();

     return 0;
}