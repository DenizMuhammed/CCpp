/* "�K�DEN B�Y�K HER ��FT SAYI 2 ASAL SAYININ TOPLAMI OLARAK �FADE ED�LEB�L�R" D�YEN GOLDBACH KEST�R�M�N� SINAYAN KOD. G�R�LEN HER ��FT SAYIYI:
  --> 2 ASAL SAYININ TOPLAMI B���M�NDE L�STELER.
  --> G�R�LEN ��FT SAYININ KA� ADET �K� TANE ASAL SAYININ TOPLAMI B���M�NDE YAZILDI�I B�LG�S�N� EKRANA YAZAR
  --> ASAL SAYI �K�L�LER�N�N �LG�L� TEK SAYI K�MES�NDEK� YO�UNLU�UNU HESAPLAR
  NOT: KODDA KULLANILAN TEK SAYI K�MES�NDEN ASAL �K�L�LER� ELDE ETME YAKLA�IMI BANA A�TT�R. BA�KA YAKLA�IMLARLA DA BU ��LEM YAPILAB�L�R.*/

#include <stdio.h>
#include <math.h>


bool asal(int);
bool goldbach=false;

long s;
long adet;
long tek[100000]; // 100.000 elemanl� dizi tan�mlad���m�z i�in girile bilecek en b�y�k �ift say�; 200.000 dir. Bu de�er artt�r�labilir.

float yogunluk;

long ters_tek[100000];

long i,j,sayac;

int main ()
{
	printf("\n                   G O L D B A C H   K E S T i R i M i\n\n");
	printf("GiRiLEN CiFT SAYIYI 2 ASAL SAYININ TOPLAMI BiCiMiNDE YAZAN PROGRAM.\n\n");
	
	while(1)
	{
	
	baslangic:
		goldbach=false;
		adet=0;
printf("2'den buyuk bir cift sayI giriniz: ");

scanf("%d",&s);	

if(s%2==1) // �zel durum 1
{
	printf("\nTek sayI girdiniz... Lutfen cift sayI giriniz.\n\n");
	goto baslangic;
}

else if(s<=2) // �zel durum 2
{
     printf("\n2'den buyuk bir cift sayI girmelisiniz!\n\n");
	goto baslangic;	
}

else if(s==4) // �zel durum 3
{
printf("4= 2 + 2\n");
goto baslangic;
}


for(i=0,sayac=1; sayac<s; sayac=sayac+2,i++) // girilen �ift say� i�in gerekli olan tek say�lar dizisini �reten for d�ng�s�.
{
	tek[i]=sayac;
}


i=i-1; // saya�lar�n d�zg�n denk gelebilmesi i�in yap�lan d�zeltme.


if(i%2==0) // olu�an tek say� dizisinin eleman say�s� tek ise bu ko�ula girecek. �rne�in s=10 (4 �n kat� de�ilse) i�in tek[i]=1,3,5,7,9 ve i=4 gibi.

{
	for(int j=0;j<=i;j++) // tek[] dizisinin elemanlar� tersten s�ralan�p tek_ters[] dizisine kaydediliyor.
	{
		ters_tek[j]=tek[i-j];
	}
	
	for(int j=0; j<((i+2)/2);j++) // tek[] ve ters_tek[] dizilerinin ortas�na kadar olan elemanlar� e�lemek i�in gerekli d�ng�. �rne�in tek[]=1,3,5,7,9 ve
	// ters_tek[]=9,7,5,3,1 elemanlar� e�lenirken sadece 1,3,5 ve
	//                                                   9,7,5 e�lenmesi gibi. ��nk� bu e�lemenin devam�nda ayn� elemanlar tekrar e�lenecek.
	
	{
		if(asal(tek[j]) & asal(ters_tek[j])==true) // kar��l�kl� elemanlar�n ikisi de asal ise ger�ekle�ecek komut. dikkat; bool asal(int) fonksiyonuna gidiliyor...
		{
			printf("%d= %d + %d",s,tek[j],ters_tek[j]); puts (" "); // girilen s say�s�n� veren asal ikililer varsa ekrana yaz�l�yor.
			adet=adet+1; // ka� tane 2li oldugunu say�yor.
			goldbach=true;
		}
		
		
	}
	printf("\t\t\t%d adet listelendi. ",adet); yogunluk=(100*adet);printf("Yogunluk= %% %0.3f\n",yogunluk/((i/2)+1));
	printf("-------------------------------------------------------------\n");
	
	if(goldbach==false)
	{
	printf("\nGOLDBACH KESTiRiMiNiN YANLIS OLDUGUNU BULDUN !!!");
	printf("\n\n BU iNANILMAZ BiR KESiF ! ! !");
	while(1);}
}

else if(i%2==1) // yukar�daki if ko�ulu sa�lanmad�ysa bu ko�ul �al��acak. �rne�in s=12 (s 4�n kat� ise) i�in tek[i]=1,3,5,7,9,11 i=5 gibi.

{
	for(int j=0;j<=i;j++) // tek[] dizisinin elemanlar� tersten s�ralan�p tek_ters[] dizisine kaydediliyor.
	{
		ters_tek[j]=tek[i-j];
	}
	
	for(int j=0; j<((i+1)/2);j++) // �stteki benzer kodda oldu�u gibi dizi elemanlar�n�n yar�s�n� e�lemek i�in gerekli d�ng� (for(int j=0; j<((i+2)/2);j++) ifadesine bak)
	
	{
		if(asal(tek[j]) & asal(ters_tek[j])==true) // kar��l�kl� elemanlar�n ikisi de asal ise ger�ekle�ecek komut. dikkat; bool asal(int) fonksiyonuna gidiliyor...
		{
			printf("%d= %d + %d",s,tek[j],ters_tek[j]); puts (" "); // girilen s say�s�n� veren asal ikililer varsa ekrana yaz�l�yor.
			adet=adet+1; // ka�tane 2li oldu�unu say�yor.
			goldbach=true;
		}
		
		
	}
	printf("\t\t\t%d adet listelendi. ",adet); yogunluk=(100*adet);printf("Yogunluk= %% %0.3f\n",yogunluk/((i/2)+1));
	printf("-------------------------------------------------------------\n");
		if(goldbach==false)
	{
	printf("\nGOLDBACH KESTiRiMiNiN YANLIS OLDUGUNU BULDUN !!!");
	printf("\n\n BU iNANILMAZ BiR KESiF ! ! !");
	while(1);}
}

printf("\n");
}
}

//// ASAL SAYI TEST ETME FONKS�YONU

bool asal(int p)
{
	
int sayac1=0,k,kalan;

if(p<=1)
return false;
	
	
for(k=2;k<p;k++)
{
	kalan=p%k;
	if(kalan==0){
	
	sayac1++;
	break;
}
	else
	sayac1=0;
	}
	if(sayac1==0)
	return true;
	else
	return false;
		
}
