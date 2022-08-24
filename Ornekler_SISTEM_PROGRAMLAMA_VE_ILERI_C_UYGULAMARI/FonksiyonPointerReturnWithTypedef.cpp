
/*
 return tipi bir fonksiyon pointer'� olan fonksiyon tan�mlama.
 Bu tan�mlama yap�l�rken typdef anahtar kelimesi kullanilarak ve kullan�lmadan olan ornekler kulaln�lm��t�r.
*/


#include <stdio.h>

#define WithTypedef 0
#define WithOutTypedef 1

#if WithOutTypedef

long kare (int x) // say�n�n karesini alana fonksiyon.
{
	printf("Kare alma islemi:\n");
	return x*x;
}

long kup (int x) // say�n�n k�p�n� alan fonksiyon

{
	printf("Kup alma islemi:\n");
	return x*x*x;	
}

// Return degeri long, parametresi int olan fonksiyonlara deger donen fonksiyon:
   long (*Us(char sec)) (int)
{
  	if(sec=='2') return kare;	
	
	if(sec=='3') return kup;
	
	else return NULL;
}

 int main ()

 {
  
   long(*UsSec)(int); // d�n�� tipi long ve parametresi int olan fonksiyonlar icin pointer.
   // UsSec ile "kare" yada "kup" fonksiyonu secilecek.
  
   UsSec = Us('3');
  
  UsSec==NULL ? printf("Hatali parametre girdiniz") : printf("%d",UsSec(12));
 
 }
#endif


#if WithTypedef
long kare (int x) // say�n�n karesini alana fonksiyon.
{
	printf("Kare alma islemi:\n");
	return x*x;
}

long kup (int x) // say�n�n k�p�n� alan fonksiyon

{
	printf("Kup alma islemi:\n");
	return x*x*x;	
}

typedef long (*ussel) (int); // parametresi "int" ve d�n�� tipi "long" olan fonksiyon g�stergesi i�in yeni tip.

ussel Us(char sec) // return degeri "ussel" tipli olan, parametresi char olan Us isimli fonksiyon.
{
  	if(sec=='2') return kare;	
	
	if(sec=='3') return kup;
	
	else return NULL;
}

 int main ()

 {
  
  ussel UsSec; // "ussel" tipli bir pointer. Bu pointer ussel tipli bir fonksiyon adresi tutar.
  
  UsSec = Us('a');
  
  if(UsSec != NULL)
  {
  	printf("%d",);
  }
  UsSec == NULL ? printf("Hatali parametre girdiniz") : printf("%d",UsSec(12));
 
 }

#endif
  
