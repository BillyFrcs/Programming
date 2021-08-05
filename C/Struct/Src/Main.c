#include <stdio.h>
#include <string.h>

struct rectangle
{
     int length, width;
};

typedef struct
{
     double x, y;

} Simetri;

struct dataPlayer
{
     char name[100];
     long ID;
};

struct rolePlayer
{
     char role[50];
};

//Combine with another struct
struct infoPlayer
{
     dataPlayer player1;
     rolePlayer rolePlayer1;
};

int main()
{
     //Called struct
     struct rectangle boxOne;

     boxOne.length = 19;

     printf("%d\n\n", boxOne.length);

     //Multiply struct value
     struct rectangle countVal = {5, 5};

     printf("%d\n\n", countVal.length * countVal.width);

     //Called typedef struct
     Simetri setSimetri = {3.14, 4.15};

     printf("%.2f %.2f\n\n", setSimetri.x, setSimetri.y);

     //Struct data player
     dataPlayer player = {"Billy", 128201913};

     printf("%s\n", player.name);
     printf("%d\n\n", player.ID);

     //Combine struct
     infoPlayer profilePlayer = {{"BillyFrcs", 15676}, {"Rusher"}};

     printf("Name player = %s\n", profilePlayer.player1.name);
     printf("ID player = %lu\n", profilePlayer.player1.ID);
     printf("Role player = %s\n", profilePlayer.rolePlayer1.role);

     return 0;
}