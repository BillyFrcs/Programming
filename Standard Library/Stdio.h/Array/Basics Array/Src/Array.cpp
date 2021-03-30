#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
     //Basics array
     float listArr[5] = {1.2, 1.3, 1.4, 1.5};

     printf("%.1f \n", listArr[3]);

     listArr[5] = 0;

     printf("%.1f \n", listArr[0]);

     char arrStr[50][100];

     scanf("%s", arrStr);
     //arrStr[1] = 'I';
     strcpy(arrStr[0], "Billy"); //Copy string
     printf("%s \n", arrStr);

     //Change huruf kecil to besar
     char letter[50];

     scanf("%[^\n]", letter);
     getchar();

     int Long = strlen(letter);

     for (int i = 0; i < Long; i++) //Long can change to strlen(letter)
     {
          if (letter[i] >= 97 && letter[i] <= 122) //97 and 122 can change to 'a' and 'z'
          {
               letter[i] -= 32;
          }
     }
     //For more simple this can use printf ("%s", strupr(letter));
     //Can using strlwr (letter) for using small alphabet
     printf("%s", letter); 

     return 0;
}