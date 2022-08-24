
/*
Bir fonksiyonu fonksiyon g�stericisi �zerinden kullanma.
*/
#include <stdio.h>
#include <stdint.h>

int main ()

{

int (*prt) (const char*,...); // parametre listesi esnek say�da const char* olan ve d�n�� tipi int olan fonksiyonlara g�stergedir.

prt = printf; // stdio.h i�indeki printf fonksiyonu i�in bir prt g�stericisi olu�turuluyor.

prt("Selam");

(*prt)("\nYukaridaki satirla ayni anlama gelir");



}
