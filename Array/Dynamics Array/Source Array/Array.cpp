#include <iostream>
#include <array>

using namespace std;

int main()
{

     int size;

     cout << "Size: ";
     cin >> size;

     int *myArr = new int[size];

     for (int i = 0; i < size; i++)
     {
          cout << "Array index[" << i << "]" << endl;
          cin >> myArr[i];
     }

     for (int i = 0; i < size; i++)
     {
          //Method 1
          cout << myArr[i] << " ";
          //Method 2
          //cout << *(myArr + i) << " ";
     }

     delete[]myArr;
     myArr = NULL;

     return 0;
}