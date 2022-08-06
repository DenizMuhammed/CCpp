#include <stdio.h>

struct yapim {int r; char x;};


int main()
{

struct yapim deneme={12,'s'};

struct yapim *p;
p=&deneme;

p->r=13;
deneme.r=14;
printf("%d",p->r);

	

}


