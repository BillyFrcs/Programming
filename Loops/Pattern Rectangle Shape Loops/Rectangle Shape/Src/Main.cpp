#include <iostream>
#include <iomanip>

using namespace std;

void rectangleShape()
{
     int height, width;
     char symbol;

     cout << "Height: ";
     cin >> height;

     cout << "Width: ";
     cin >> width;

     cout << "Symbol: ";
     cin >> symbol;

     for (int h = 0; h < height; h++)
     {
          for (int w = 0; w < width; w++)
          {
               cout << setw(3) << symbol;
          }
          cout << endl;
     }
}

void triangleShape()
{
     int length;
     char symbol;

     cout << "Length: ";
     cin >> length;

     cout << "Symbol: ";
     cin >> symbol;

     for (int l = 1; l <= length; l++)
     {
          for (int s = 1; s < l; s++)
          {
               cout << setw(3) << symbol;
          }

          cout << endl;
     }

     cout << endl;

     for (int l = length; l >= 1; l--)
     {
          for (int s = 1; s < l; s++)
          {
               cout << setw(3) << symbol;
          }
          cout << endl;
     }
}

//Prototype
void printNumLoops();

void numbersTriangle(int n){
     
     for (int i = 1; i <= n ; i++){
          for (int j = 1; j <= i; j++){
               cout << j << " ";
          }
          cout << endl;
     }

     cout << endl;

     int x = 1;

     for (int m = 1; m <= n; m++){
          for (int p = 1; p <= m; p++){
               cout << x++ << " ";
          }
          cout << endl;
     }
}

int main()
{
     rectangleShape();

     cout << endl;

     triangleShape();

     cout << endl;

     printNumLoops();

     cout << endl;

     //Numbers triangle
     int num;

     cout << "Enter num = ";
     cin >> num;

     numbersTriangle(num);

     return 0;
}

void printNumLoops()
{
     //Print number program loops
     int n = 4;
     int m = 1;

     for (int i = 0; i < n; i++)
     {
          for (int j = 0; j <= i; j++)
          {
               cout << m << " ";
               m = m + 2;
          }
          m++;
          if (m == 16)
          {
               m++;
          }
          cout << endl;
     }
}