
#include <stdio.h>
void fonk(int&,int&);


int main()
{
  int x=4;
  int y=5;
  
  printf("ilk deger; x=%d, y=%d\n",x,y);
  
  fonk(x,y);
  
  printf("son deger; x=%d, y=%d\n",x,y);
  
}

void fonk(int& a, int& b)
{
	int gecici=a;
	a=b;
	b=gecici;
	
}
