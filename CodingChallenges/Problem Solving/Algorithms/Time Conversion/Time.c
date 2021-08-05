#include <stdio.h>
#include <string.h>

int main()
{
     /*Sample input
       07:05:45PM
       output: 19:05:45
     */

     int hh, mm, ss;

     char time12[3];

     scanf("%d:%d:%d%s", &hh, &mm, &ss);

     if (strcmp(time12, "AM") == 0 && hh == 12)
     {
          hh = 0;
     }
     else if (strcmp(time12, "PM") == 0 && hh != 12)
     {
          hh += 12;
     }

     printf("%02d:%02d:%02d", hh, mm, ss);

     return 0;
}