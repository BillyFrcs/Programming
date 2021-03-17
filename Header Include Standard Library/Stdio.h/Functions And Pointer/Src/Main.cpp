#include <stdio.h>

using namespace std;

int main()
{

     int b = 19;

     int *p;
     p = &b;

     printf("%d", b);
     printf("%d", p);

     return 0;
}