#include <iostream>

using namespace std;

//Swapping value with references
void swapNum(int &i, int &j)
{

     int temp = i;
     i = j;
     j = temp;
}

int main()
{
     cout << "Swapping values with third variable \n";

     int a = 50;
     int b = 80;

     //The algorithm
     int temp = a;
     a = b;
     b = temp;

     cout << "a = " << a << endl;
     cout << "b = " << b << endl;

     cout << endl;

     cout << "Swapping values without third variable \n";

     int x = 40, z = 60;

     //The algorithm with math
     x = x + z;
     z = x - z;
     x = x - z;

     cout << "x = " << x << endl;
     cout << "z = " << z << endl;

     cout << endl;

     cout << "Swapping number with Functions \n";
     int k = 200;
     int l = 300;

     swapNum(k, l);

     cout << "k = " << k << endl;
     cout << "l = " << l << endl;

     return 0;
}