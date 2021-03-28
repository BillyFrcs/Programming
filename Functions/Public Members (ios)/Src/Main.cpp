#include <iostream>
#include <ios>

using namespace std;

int main()
{

     int arr[4];

     ios_base::sync_with_stdio(false);
     cin.tie(NULL);

     for (int i = 0; i <= 5; i++)
     {
          cin >> arr[i];
     }

     for (int i = 0; i <= 5; i++)
     {
          cout << arr[i];
     }

     return 0;
}