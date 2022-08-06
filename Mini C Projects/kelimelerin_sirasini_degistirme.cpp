
#include <stdio.h>

main()
{
	char *metin=" dunya yine de donuyor"; // metnin basina bosluk koy. boþluðun ascii deðeri 32 dir.
	// çýktý: deniz muhammed ismim benim merhaba
	
int indis=0;
unsigned int adet=0;
int sayac=1;
int bosluk[20]; // max 20+1 kelime varsayýlýyor.


while(*(metin+(++indis))!=0);
//printf("%d",indis);
adet=indis; // metindeki karakter adeti bilgisi

while(indis>0)
{
if(metin[indis]==' ')
{
bosluk[sayac]=indis;
sayac++;
}
indis--;
}

bosluk[0]=adet;
bosluk[sayac]=0;
for(int j=0; j<=sayac; j++)
printf(" %d ",bosluk[j]);

printf("\n\n********************************************************\n\n");

for(int h=0;h<sayac;h++)
{

for(unsigned int k=bosluk[h+1]; k<bosluk[h];k++)
{
	printf("%c",metin[k]);
}

}

}
