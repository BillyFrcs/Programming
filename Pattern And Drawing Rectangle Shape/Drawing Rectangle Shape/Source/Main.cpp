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

     printf("\n");

     for (int l = length; l >= 1; l--)
     {
          for (int s = 1; s < l; s++)
          {
               cout << setw(3) << symbol;
          }
          cout << endl;
     }
}

int main()
{
     rectangleShape();

     printf("\n");

     triangleShape();

     return 0;
}