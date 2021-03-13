#include <iostream>
#include <conio.h>
#include <windows.h>
#include <time.h>

#define SCREEN_WIDTH 90
#define SCREEN_HEIGHT 26
#define WIN_WIDTH 70

//Game car console

using namespace std;

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;

int enemyY[3];
int enemyX[3];
int enemyFlag[3];
char car[4][4] = {' ', '+', '+', ' ',
                  '+', '+', '+', '+',
                  ' ', '+', '+', ' ',
                  '+', '+', '+', '+'};

int carPos = WIN_WIDTH / 2;
int score = 0;

void gotoxy(int x, int y)
{
     CursorPosition.X = x;
     CursorPosition.Y = y;
     SetConsoleCursorPosition(console, CursorPosition);
}

void setCursor(bool visible, DWORD size)
{
     if (size == 0)
          size = 20;

     CONSOLE_CURSOR_INFO lpCursor;
     lpCursor.bVisible = visible;
     lpCursor.dwSize = size;
     SetConsoleCursorInfo(console, &lpCursor);
}

void drawBorder()
{
     for (int i = 0; i < SCREEN_HEIGHT; i++)
     {
          for (int j = 0; j < 17; j++)
          {
               gotoxy(0 + j, i);
               cout << "+";
               gotoxy(WIN_WIDTH - j, i);
               cout << "+";
          }
     }

     for (int i = 0; i < SCREEN_HEIGHT; i++)
     {
          gotoxy(SCREEN_WIDTH, i);
          cout << "+";
     }
}

int main()
{
}