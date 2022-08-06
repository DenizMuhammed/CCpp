#include <stdio.h>
#include <math.h>

int function(int y)
{
	return y*y;
}

void sonuc(int (*fg)(int),char *f_ismi) 
{
  printf("%s\n",f_ismi);
  int i = (*fg)(3); // = function(3);
  printf("%d",i);
  
}
int main ()


{
 sonuc(function,"function goster olarak sonuc a gonderildi\n");

}


 

