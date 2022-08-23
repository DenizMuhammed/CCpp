
// Bir dizinin elemanlarinin baytlarini ve nibble'larini toplayan program.


#include <stdio.h>


unsigned short dizi[] = {0xABCD,0x1234,0x5678,0x32AF};

unsigned int byteSum=0; 

unsigned int nibbleSum=0; 


/*
dizieki tum baytlari toplayin. toplam : 877 ,112
*/

unsigned char *ptr;


int main()
{

 ptr = (unsigned char*) dizi;
 

for(ptrdiff_t i=0; i<sizeof(dizi); i++)
{
	byteSum+= *(ptr+i);
	
	nibbleSum += ptr[i] - (0xF * (ptr[i]>>4));
	
}

printf("byte toplamlari = %d",byteSum);

printf("\nnibble toplamlari = %d",nibbleSum);



return 0;
} 
