
/*
Senaryo:
Sinýf içerisinde public bir fonksiyon ve private iki adet int dðeiþkeni var.
liste isimli sinif fonksiyonu obje üzerinden çaðýrýlýyor. Bu fonksiyonun içerisinde 
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
  	callBack(parametre1,parametre2); // kullanýcýnýn fonksiyon adresi kullanýlarak kullanýcýnýn fonksiyonu cagýrýlýyor.
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



