/* "ÝKÝDEN BÜYÜK HER ÇÝFT SAYI 2 ASAL SAYININ TOPLAMI OLARAK ÝFADE EDÝLEBÝLÝR" DÝYEN GOLDBACH KESTÝRÝMÝNÝ SINAYAN KOD. GÝRÝLEN HER ÇÝFT SAYIYI:
  --> 2 ASAL SAYININ TOPLAMI BÝÇÝMÝNDE LÝSTELER.
  --> GÝRÝLEN ÇÝFT SAYININ KAÇ ADET ÝKÝ TANE ASAL SAYININ TOPLAMI BÝÇÝMÝNDE YAZILDIÐI BÝLGÝSÝNÝ EKRANA YAZAR
  --> ASAL SAYI ÝKÝLÝLERÝNÝN ÝLGÝLÝ TEK SAYI KÜMESÝNDEKÝ YOÐUNLUÐUNU HESAPLAR
  NOT: KODDA KULLANILAN TEK SAYI KÜMESÝNDEN ASAL ÝKÝLÝLERÝ ELDE ETME YAKLAÞIMI BANA AÝTTÝR. BAÞKA YAKLAÞIMLARLA DA BU ÝÞLEM YAPILABÝLÝR.*/

#include <stdio.h>
#include <math.h>


bool asal(int);
bool goldbach=false;

long s;
long adet;
long tek[100000]; // 100.000 elemanlý dizi tanýmladýðýmýz için girile bilecek en büyük çift sayý; 200.000 dir. Bu deðer arttýrýlabilir.

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

if(s%2==1) // özel durum 1
{
	printf("\nTek sayI girdiniz... Lutfen cift sayI giriniz.\n\n");
	goto baslangic;
}

else if(s<=2) // özel durum 2
{
     printf("\n2'den buyuk bir cift sayI girmelisiniz!\n\n");
	goto baslangic;	
}

else if(s==4) // özel durum 3
{
printf("4= 2 + 2\n");
goto baslangic;
}


for(i=0,sayac=1; sayac<s; sayac=sayac+2,i++) // girilen çift sayý için gerekli olan tek sayýlar dizisini üreten for döngüsü.
{
	tek[i]=sayac;
}


i=i-1; // sayaçlarýn düzgün denk gelebilmesi için yapýlan düzeltme.


if(i%2==0) // oluþan tek sayý dizisinin eleman sayýsý tek ise bu koþula girecek. örneðin s=10 (4 ün katý deðilse) için tek[i]=1,3,5,7,9 ve i=4 gibi.

{
	for(int j=0;j<=i;j++) // tek[] dizisinin elemanlarý tersten sýralanýp tek_ters[] dizisine kaydediliyor.
	{
		ters_tek[j]=tek[i-j];
	}
	
	for(int j=0; j<((i+2)/2);j++) // tek[] ve ters_tek[] dizilerinin ortasýna kadar olan elemanlarý eþlemek için gerekli döngü. örneðin tek[]=1,3,5,7,9 ve
	// ters_tek[]=9,7,5,3,1 elemanlarý eþlenirken sadece 1,3,5 ve
	//                                                   9,7,5 eþlenmesi gibi. çünkü bu eþlemenin devamýnda ayný elemanlar tekrar eþlenecek.
	
	{
		if(asal(tek[j]) & asal(ters_tek[j])==true) // karþýlýklý elemanlarýn ikisi de asal ise gerçekleþecek komut. dikkat; bool asal(int) fonksiyonuna gidiliyor...
		{
			printf("%d= %d + %d",s,tek[j],ters_tek[j]); puts (" "); // girilen s sayýsýný veren asal ikililer varsa ekrana yazýlýyor.
			adet=adet+1; // kaç tane 2li oldugunu sayýyor.
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

else if(i%2==1) // yukarýdaki if koþulu saðlanmadýysa bu koþul çalýþacak. örneðin s=12 (s 4ün katý ise) için tek[i]=1,3,5,7,9,11 i=5 gibi.

{
	for(int j=0;j<=i;j++) // tek[] dizisinin elemanlarý tersten sýralanýp tek_ters[] dizisine kaydediliyor.
	{
		ters_tek[j]=tek[i-j];
	}
	
	for(int j=0; j<((i+1)/2);j++) // üstteki benzer kodda olduðu gibi dizi elemanlarýnýn yarýsýný eþlemek için gerekli döngü (for(int j=0; j<((i+2)/2);j++) ifadesine bak)
	
	{
		if(asal(tek[j]) & asal(ters_tek[j])==true) // karþýlýklý elemanlarýn ikisi de asal ise gerçekleþecek komut. dikkat; bool asal(int) fonksiyonuna gidiliyor...
		{
			printf("%d= %d + %d",s,tek[j],ters_tek[j]); puts (" "); // girilen s sayýsýný veren asal ikililer varsa ekrana yazýlýyor.
			adet=adet+1; // kaçtane 2li olduðunu sayýyor.
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

//// ASAL SAYI TEST ETME FONKSÝYONU

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
