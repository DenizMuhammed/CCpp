// inline , scop , fonksiyon ilkleme
#include <stdio.h>


void f(int d=12, int r=0, int g=3);
inline int max(int x, int y) {return (y<x?x:y);}
int x=2;
void erim_test(void);
int main()
{
erim_test();

printf("inline fonksiyon: %d\n",max(12,21));

}

void erim_test()
{
	int x=3;
	printf(" yerel x: %d \n",x);
	printf("global x: %d\n",::x);
}


