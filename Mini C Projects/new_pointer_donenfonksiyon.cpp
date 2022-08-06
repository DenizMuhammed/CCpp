#include <stdio.h>
#include <string.h> // strlen fonksiyonu için kullanýlýyor.

char* getname(void)
{
	char *g=NULL;
	/*static*/ char buffer[100]; // buffer olabilecek en uzun isim için bir tampon dizisi
	printf("Ad ve soyad bilginizi giriniz:\n");
	gets(buffer);
	g= new char [strlen(buffer)+1]; // new ile oluþturulan hafýza bölgesi fonksiyon yok olduðunda yok olmuyor !!! ???
	delete []g;
	
	strcpy(g,buffer); // buffer dizisini g ile gösterilen adreseten itibaren yükler. NULL deðerini de yükler.
	return g;
}

int main()
{

char* p;
p=getname();
puts(p);

}


