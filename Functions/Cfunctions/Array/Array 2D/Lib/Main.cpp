#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main()
{
     // \0 => NULL
     char map[6][6] = {"*****",
                       "*****",
                       "*****",
                       "*****",
                       "*****"};

     int playerX = 0, playerY = 0;
     char player = 'B';
     char input;

     while (true)
     {
          for (int i = 0; i < 5; i++)
          {
               for (int j = 0; j < 5; j++)
               {
                    if (playerX == i && playerY == j)
                    {
                         printf("%c", player);
                    }
                    else
                    {
                         printf("*");
                    }
               }
               printf("\n");
          }

          input = getch();

          switch (input)
          {
          case 'w':
               if (playerX > 0)
                    playerX -= 1;
               break;

          case 'a':
               if (playerY > 0)
                    playerY -= 1;
               break;

          case 's':
               if (playerX < 4)
                    playerX += 1;
               break;

          case 'd':
               if (playerY < 4)
                    playerY += 1;
               break;
          }
          system("cls");
     }

     return 0;
}