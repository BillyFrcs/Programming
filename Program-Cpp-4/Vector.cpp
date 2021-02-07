#include <iostream>
#include <vector>

using namespace std;

int main()
{

     int totalEven = 0;
     int productOdd = 1;

     vector<int> Vector = {1, 4, 5, 6, 9, 3};

     for (int i = 0; i < Vector.size(); i++)
     {
          if (Vector[i] % 2 == 0)
          {
               totalEven = totalEven + Vector[i];
          }
          else
          {
               productOdd = productOdd * Vector[i];
          }
     }

     cout << "Sum of even: " << totalEven << endl;     //Genap
     cout << "Product of odd: " << productOdd << endl; //Ganjil

     return 0;
}