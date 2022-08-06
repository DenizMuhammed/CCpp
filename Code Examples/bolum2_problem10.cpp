
#include <stdio.h>
#include <conio.h>
#define boyut 20
 main ()
{
int s[3]={0,500,1001};
int sayac=0;
char aralik;

while(1)
{

if(s[2]-s[0]<=2) // erken tahmin yapmak icin.
 {
 printf("erken tahmin yapildi...\n");
 printf("tuttugunuz sayinin %d oldugu anlasildi\n",s[1]);
 printf("%d tahmin sonrasinda sayi bulundu!\n",sayac);
 break;	
 }
printf("tuttugun sayi %d ?\n",s[1]);
sayac++;
aralik=getch();

if(aralik=='b') // buyuk ise
{
 s[0]=s[1];
 s[2]=s[2];
 s[1]= (int)((s[0]+s[2])/2);
 
 printf("%d %d  %d \n",s[0],s[1],s[2]);
}

else if(aralik=='k') // kucuk ise
{
s[0]=s[0];
s[2]=s[1];
s[1]= (int)((s[0]+s[2])/2);	
printf("%d %d  %d \n",s[0],s[1],s[2]);
}

else if(aralik=='d') // esit ise
{
 printf("%d tahmin sonrasinda sayi bulundu!\n",sayac);
 break;	
}

else
printf("hatali bir giris yaptiniz...\n");

}
}
