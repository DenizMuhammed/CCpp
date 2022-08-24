
/*
Senaryo:
Sin�f i�erisinde public bir fonksiyon ve private iki adet int d�ei�keni var.
liste isimli sinif fonksiyonu obje �zerinden �a��r�l�yor. Bu fonksiyonun i�erisinde 
*/
#include <stdio.h>
#include <stdint.h>


// callback fonksiyonu:
int kullaniciFonksiyonu (int x, int y)
{
	printf("Kullanici fonksiyonu cagirildi: \n");
	printf("siniftan gelen parametre-1: %d \nsiniftan gelen parametre-2: %d",x,y);
	return 1;
}

 class ImportFunction{ 
	
  public:

typedef int (*ext) (int,int); // int donus tipli ve int, int parametrelerine sahip fonksiyonlara gosterge icin yeni tip.
  	
  void liste(ext callBack)
  {
  	printf("Class fonksiyonu cagirildi: \n");
  	parametre1=331;
  	parametre2=78;
  	callBack(parametre1,parametre2); // kullan�c�n�n fonksiyon adresi kullan�larak kullan�c�n�n fonksiyonu cag�r�l�yor.
  }
  
  private:
  	int parametre1;
  	int parametre2;
	
 };


int main ()

{
  ImportFunction obje;
  
  obje.liste(kullaniciFonksiyonu);
     
}



