#include <iostream>
#include <vector>

using namespace std;

//Function return vector
vector<int> firstThreeMultiples(int num)
{
     vector<int> multiples = {num, num * 5, num * 6};

     return multiples;
}

//Even odd number product
void evenOddProduct()
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
}

void vectorProgram();

int main()
{
     vectorProgram();

     cout << endl;

     evenOddProduct();

     cout << endl;

     for (int element : firstThreeMultiples(10))
     {
          cout << element << endl;
     }

     return 0;
}

//Vector program
void vectorProgram()
{
     vector<double> numVector = {200, 400, 500}; //Data type double

     cout << "Value: " << numVector[0] << endl;

     cout << endl;

     vector<char> charVector = {'a', 'b', 'c'};

     cout << "Character 1: " << charVector[0] << endl;
     cout << "Character 2: " << charVector[1] << endl;
     cout << "Character 3: " << charVector[2] << endl;

     cout << endl;

     vector<string> stringVectorName;

     stringVectorName.push_back("Billy");

     cout << "Name: " << stringVectorName[0] << endl;

     cout << endl;

     vector<double> deliveryOrder;

     deliveryOrder.push_back(1.50);
     deliveryOrder.push_back(2.34);

     double Total = 0.0;

     for (int z = 0; z < deliveryOrder.size(); z++)
     {
          Total = Total + deliveryOrder[z];
     }

     cout << "Total $" << Total << "\n";
}