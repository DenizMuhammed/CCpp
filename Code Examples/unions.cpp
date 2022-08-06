#include <stdio.h>


typedef union _int {int x; int y;}
INT;

INT degiskenim;


int main ()
{
degiskenim.y=112;
degiskenim.x=444;

printf("%d %d",degiskenim.x,degiskenim.y);
}
