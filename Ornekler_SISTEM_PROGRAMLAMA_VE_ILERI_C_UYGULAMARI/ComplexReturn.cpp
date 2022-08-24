
//  KARMASIK YAPILI RETURN VE PARAMETRE'YE SAHIP OLAN BIR FONKSIYON OLUSTURMA ORNEGIDIR.

#include <stdio.h>


#if 0

Temel Formul:

// R: return ifadesini, P: parametre ifadesini, F: fonksiyon adýný veya isaretcisini ifade eder.
Fonksiyon ifadesi: R F (P) 
Fonksiyon pointeri ifadesi: R (*F) (P)

Soru:
	return ifadesi, (return ifadesi (return ifadesi void, parametresi esnek int olan fonksiyonlara gosterge olan), 
	parametresi long, olan fonksiyonlara gosterge olan) 
	ve parametreleri (short, return ifadesi int, parametresi double olan fonksiyonlara gosterge olan ) 
	olan "Kaos" isimli fonksiyonu yaziniz.

Cozum:
	1- R F (P)
	P = short, return ifadesi int, parametresi double olan fonksiyonlara gosterge
	typedef int(*P) (double); -> IFADE 1
	P = "short, P" olur.
	
	2- R = return ifadesi (return ifadesi void, parametresi esnek int olan fonksiyonlara gosterge olan), 
	       parametresi long
	    
	   typedef R2 (*R) (long); -> IFADE 2
	   
	   R1 = return ifadesi void, parametresi esnek int olan fonksiyonlara gosterge olan
	   
	   typedef void (*R1) (int,...); -> IFADE 3
	
	 R = " typedef typedef void (*R2) (int,...) (*R) (long) " olur
	
#endif


// RESUALT:

 typedef int(*P) (double);     // IFADE 1
 typedef void (*R1) (int,...); // IFADE 3
 typedef R1 (*R) (long);      // IFADE 2
 
 
  R Kaos (short,P); // -> SONUC
 

int main ()

{

}
