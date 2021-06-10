#include <array>
#include <iostream>

using namespace std;

void listArr()
{
  string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Ferary"};

  for (int i = 0; i < 5; i++)
  {
    cout << cars[i] << "\n";
  }

  cout << endl;

  int a[8] = {};
  int x = 3;

  for (int i = 0; i < 6; i++)
  {
    a[i] = ++x;
  }

  cout << a[4] + a[5] * a[6] << endl;
}

// Discount program with ages
void discountProgram()
{

  int ages[5];

  for (int i = 0; i < 5; ++i)
  {
    cout << "Enter age: ";
    cin >> ages[i];
  }

  float perc;
  float min = ages[0];

  for (int x = 1; x < 5; ++x)
  {
    if (min > ages[x])
      min = ages[x];
  }

  perc = 50 - (50 * min / 100);
  cout << perc << endl;
}

// Array loops concept
void conceptArrLoops()
{
  int arrNum[9];

  cout << "Element - Value" << endl;

  for (int i = 0; i <= 8; i++)
  {
    arrNum[i] = 99;

    cout << i << " --------- " << arrNum[i] << endl;
  }
}

void calculateEvenOddNumbers()
{
  int numbers[6] = {6, 2, 4, 9, 7, 5}, evenNum = 0, oddNum = 0;

  for (auto &n : numbers)
  {
    if (n % 2 == 0)
    {
      evenNum += n;
    }
    else
    {
      oddNum += n;
    }
  }

  cout << "Total even number " << evenNum << "\n";
  cout << "Total odd number " << oddNum << "\n";
}

int main()
{

  listArr();

  cout << endl;

  discountProgram();

  cout << endl;

  conceptArrLoops();

  cout << endl;

  calculateEvenOddNumbers();

  return 0;
}