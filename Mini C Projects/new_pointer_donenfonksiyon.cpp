#include <stdio.h>
#include <string.h> // strlen fonksiyonu i�in kullan�l�yor.

char* getname(void)
{
	char *g=NULL;
	/*static*/ char buffer[100]; // buffer olabilecek en uzun isim i�in bir tampon dizisi
	printf("Ad ve soyad bilginizi giriniz:\n");
	gets(buffer);
	g= new char [strlen(buffer)+1]; // new ile olu�turulan haf�za b�lgesi fonksiyon yok oldu�unda yok olmuyor !!! ???
	delete []g;
	
	strcpy(g,buffer); // buffer dizisini g ile g�sterilen adreseten itibaren y�kler. NULL de�erini de y�kler.
	return g;
}

int main()
{

char* p;
p=getname();
puts(p);

}


