
/*
void pointer kullanimi
void pointer ile degiskenin baytlarina ulasma

*/
#include <stdio.h>
#include <stdint.h>

int main ()

{

void* ptr=NULL; // tipsiz pointer. 

uint32_t number=0xA1B2C3D4; // 4 bayt degisken
printf("Degisken degeri: %x\n",number);

ptr = &number; // ptr, number'in baseaddress'ini gosteriyor. (ilk baytý).
         //Fakat henuz pointer aritmatigi tanimli degil. bunun anlami ptr+n'in nereyi gösterecegi belirsizdir. (n:0,1,2...)

uint8_t* ptr2; // 1 baytlýk pointer tanimlaniyor. (Pointer aritmatigi belirlenmis)

ptr2 = (uint8_t*) ptr; // void ptr icin pointer aritmatigi 1 baytlik olarak belirleniyor 
                     // ve ptr2'nin ptr ile ayni baseaddress'i gostermesi saglaniyor.

// SONUC: ptr = ptr2 = number baseAddress (1 baytlik aritmatik ile)

printf("According Little Endian: ");                  
for (size_t i=0; i<sizeof(int); i++) // littleEndian kuralina gore number'in baytlari ekrana yaziliyor.
{
	printf("%x ",*(ptr2+i));
}

printf("\n");
printf("According Big Endian:    ");   
for (size_t i=sizeof(uint32_t)-1; ; i--) // BigEndian kuralina gore number'in baytlari ekrana yaziliyor.
{
    printf("%x ",*(ptr2+i));
   //printf("%x ",ptr2[i]);
   
   if(i==0)break;
   		
}

}
