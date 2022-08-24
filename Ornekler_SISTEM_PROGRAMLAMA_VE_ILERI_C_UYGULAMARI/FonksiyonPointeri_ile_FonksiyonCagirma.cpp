
/*
Bir fonksiyonu fonksiyon göstericisi üzerinden kullanma.
*/
#include <stdio.h>
#include <stdint.h>

int main ()

{

int (*prt) (const char*,...); // parametre listesi esnek sayýda const char* olan ve dönüþ tipi int olan fonksiyonlara göstergedir.

prt = printf; // stdio.h içindeki printf fonksiyonu için bir prt göstericisi oluþturuluyor.

prt("Selam");

(*prt)("\nYukaridaki satirla ayni anlama gelir");



}
