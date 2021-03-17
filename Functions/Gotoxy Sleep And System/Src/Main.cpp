#include <iostream>
#include <windows.h>

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
     gotoxy(12, 10);

     cout << "Hello world" << endl;

     return 0;
}