
/*
Fonksiyona arguman olarak fonksiyon gostericisi gecme
*/
#include <stdio.h>
#include <stdint.h>

int topla(int x, int y)
{
	return x+y;
}

int carp(int x, int y)
{
	return x*y;
}

void islemSonucu (int(*fp)(int,int),int a, int b)
{
	int sonuc = fp(a,b);
	
	printf("sonuc= %d \n",sonuc);
	
}

int main ()

{

islemSonucu(topla,10,2);

islemSonucu(carp,10,2);


}
