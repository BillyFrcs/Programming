#include <iostream>
#include <windows.h>

//Windows functions
using namespace std;

void gotoxy(int x, int y)
{
     COORD coordCordinate; 
     coordCordinate.X = x;
     coordCordinate.Y = y;

     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordCordinate);
}

int main()
{
     gotoxy(5, 5);

     cout << "Hello world" << endl;

     Sleep(1000);

     gotoxy(5, 7);

     cout << "Billy" << endl;

     system("Color 1");

     return 0;
}