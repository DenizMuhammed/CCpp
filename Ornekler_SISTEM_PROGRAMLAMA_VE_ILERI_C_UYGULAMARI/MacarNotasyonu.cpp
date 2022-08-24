
// Hungarian Notation (Macar Gosterimi)

#include <stdio.h>
#include <windows.h > 
#include <stdint.h> // int8_t vs.


 // Fonksiyon isimlendirme:
 // kural: fiil + nesne

  void CopyMemoryFonction (WORD dwSize)
 {
 	dwSize++;
 }
 
int main ()

{
 
 // Degisken isimlendirmeleri:
 
 WORD wMinSelection =32;
 
 long lResultFind =43;
 
 BOOL bReturns = 1;
 
 PSTR pszName;
 
 int* pPointerVariables;
 
 char* pcKaraterPointeri;
 
 uint32_t dwSayacDegeri;
 

 

 
}



//Macar Notasyonunda Önek ve Tür:
#if 0 

c char 
p pointer
l long 
pc char *
d double 
pl long *
s short 
pv void *
f float
psz (zero terminated) Yazý gösteren
string  char *
u unsigned int 
b BYTE
b BOOL 
w WORD
f flag 
dw DWORD 
#endif

//
#if 0
global degiskenler: g_
statik degiskenler: s_
C++ dilinde sinif veri elemanlari: m_
baslayarak isimlendirilir.
#endif




