
#include <stdio.h>

int main ()

{

struct data {int x; char y; float z;};

struct data veri;

veri.x=23;
printf("%d",veri.x);
printf("\n\n");

// -> kullan�m�

struct data2{int x; char y;};
struct data2 veri2;
veri2.x=76;
veri2.y='A';

struct data2 *p;

p=&veri2;

(*p).x=77; // = veri2.x // BU KULLANIM R�SKL�D�R!!!
printf("%d\n",(*p).x);

// BUNUN YER�NE A�A�IDAK�N� KULLAN: (*p).x=77; // = veri2.x

p->x=80;
printf("%d",p->x);

	
	
}
