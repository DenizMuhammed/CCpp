
#include <stdio.h>

int main ()

{

struct data {int x; char y; float z;};

struct data veri;

veri.x=23;
printf("%d",veri.x);
printf("\n\n");

// -> kullanýmý

struct data2{int x; char y;};
struct data2 veri2;
veri2.x=76;
veri2.y='A';

struct data2 *p;

p=&veri2;

(*p).x=77; // = veri2.x // BU KULLANIM RÝSKLÝDÝR!!!
printf("%d\n",(*p).x);

// BUNUN YERÝNE AÞAÐIDAKÝNÝ KULLAN: (*p).x=77; // = veri2.x

p->x=80;
printf("%d",p->x);

	
	
}
