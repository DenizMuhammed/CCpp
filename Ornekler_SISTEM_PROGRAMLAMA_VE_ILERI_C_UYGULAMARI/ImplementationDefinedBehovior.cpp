
#include <stdio.h>
#include <stdint.h> // Uygulama tanimli davranislar icin belirtmeler.


int main ()

{
  printf("Implementation Defined Behavior Example: \n");
  
  int x=32; // int bayt sayisi derleyiciden derleyiciye degisebilir.
  printf("int type is Implementation Defined Behavior -> %d",sizeof(x));
  
  printf("\n");
  
  int32_t y=23; // int32_t her zaman 4 bayt isaretli sayidir.
  printf("int32_t type is Defined Behavior -> %d",sizeof(y));
  
  printf("\n\n**********************************************\n");
  
  printf("Undefined Behavior Example: \n");
  
  int sonuc=0;
  int sayac=1;
  
  sonuc = ++sayac + ++sayac;
  
  printf("sonuc = %d \nsayac = %d",sonuc,sayac);
  
  
  
}
