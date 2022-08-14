#include <stdio.h>
#include <string.h>
//W34_54fgX-?
   
 static  char sonuc[100]={};
 static  char *anahtar="W34_4fd4_^+g";
 static  char *sifre="";
 static  char kod[]={0x2e,0x52,0x46,0x36,0x5b,0x14,0x4,0x6,0x2c,0x44,0x1f,0x34,0x56,0x44,0x37,0x50,0x47,0xf,0x9,0x3c, \
 0x48,0x51,0x77,0x47,0x55,0x2d,0x47,0x41,0x1c,0x47,0x3a,0x4c,0x4c,0x3b,0x52,0x4d,0x3e,0x56,0x55,0xd,0x5c,0x78,0x1d,0xa,0x6d, \
 0x7,0x1,0x78,0x51,0x51};

int main()

{

   if(strlen(anahtar)==0)
   {
       printf("Bir anahtar gir!");
       return 0;
   }
   
   if(strlen(sifre)!=0 && sizeof(kod)==0)
   {
       printf("Uretilen kod:\n");
      for(int i=0; i<strlen(sifre);i++)
      {
          kod[i]= (int) sifre[i];
        
      }
      
      for(int i=0; i<strlen(sifre);i++)
      {
         sonuc[i] =kod[i]^ ((int) anahtar[i%strlen(anahtar)]);
        
      }
      
      for(int i=0; i<strlen(sifre);i++)
      {
          if(i<strlen(sifre)-1)
          printf("0x%x,",sonuc[i]);
          else
          printf("0x%x",sonuc[i]);
      }
   }
   
   else if(strlen(sifre)==0 && sizeof(kod)!=0)
   {
       printf("Bulunan sifre:\n");
      for(int i=0; i<sizeof(kod);i++)
      {
         sonuc[i] =kod[i]^ ((int) anahtar[i%strlen(anahtar)]);
      }
      
      for(int i=0; i<sizeof(kod);i++)
      printf("%c",sonuc[i]);
   }
   
   else
   {
       printf("Kod ve sifreden yalniz ve yalniz birini gir!");
   }
   
   return 0;
}
