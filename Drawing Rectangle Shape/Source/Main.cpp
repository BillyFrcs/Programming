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

int main()
{
     rectangleShape();
     return 0;
}