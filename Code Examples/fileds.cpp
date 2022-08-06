#include <stdio.h>


struct tarih{ 
unsigned x:8;
unsigned y:2;
};

struct tarih deger;
int main ()
{
deger.x=12;
deger.y=12; // taşma olacak !
printf("8 bit alana yazilan deger: %d \n 2 bit alana yazilan deger: %d",deger.x,deger.y);
}
