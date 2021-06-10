#include <iostream>
#include <array>

using namespace std;

void arrPointers()
{
     int luckyNumbers[5] = {3, 9, 7, 8, 6};

     cout << luckyNumbers << endl;
     cout << &luckyNumbers[0] << endl;
     cout << luckyNumbers[2] << endl;
     cout << *(luckyNumbers + 2) << endl;
}

void arrNumbers()
{
     int arrNum[5];

     for (int i = 0; i <= 4; i++)
     {
          cout << "Numbers: ";
          cin >> arrNum[i];
     }

     for (int i = 0; i <= 4; i++)
     {
          cout << *(arrNum + i) << " ";
     }
}

int getMin(int numbers[], int size)
{
     int min = numbers[0];

     for (int i = 1; i < size; i++)
     {
          if (numbers[i] < min)
               min = numbers[i];
     }

     return min;
}

int getMax(int numbers[], int size)
{
     int max = numbers[0];

     for (int i = 1; i < size; i++)
     {
          if (numbers[i] > max)
               max = numbers[i];
     }

     return max;
}

void getMinAndMax(int numbers[], int size, int *min, int *max)
{
     for (int i = 1; i < size; i++)
     {
          if (numbers[i] > *max)
               *max = numbers[i];

          if (numbers[i] < *min)
               *min = numbers[i];
     }
}

int main()
{
     arrPointers();

     cout << endl;

     arrNumbers();

     cout << endl
          << endl;

     int numbers[5] = {6, 3, -4, 8, 19};

     //Invoke
     cout << "Min is " << getMin(numbers, 5) << endl;
     cout << "Max is " << getMax(numbers, 5) << endl;

     cout << endl;

     //Invoke with function
     int min = numbers[0];
     int max = numbers[0];

     getMinAndMax(numbers, 5, &min, &max);
     cout << "Min is: " << min << endl;
     cout << "Max is: " << max << endl;
}