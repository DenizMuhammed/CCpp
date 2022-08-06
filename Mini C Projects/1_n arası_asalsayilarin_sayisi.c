#include <stdio.h>
#include <conio.h>
#include <math.h>

int asal(int);

int main(){
	

	
	
	int sayi,toplam=0,i;
	
	float yogunluk;
	
	printf("\n");
	printf(" 2 ILE BIR N DOGAL SAYISI ARASINDAKI ASAL SAYILARIN SAYISINI HESAPLAYAN PROGRAM\n");
	printf("\n");
		while(1)
	{
	printf("BIR TAM SAYI GIR: ");
	
	scanf("%d",&sayi);
	
	
	if(sayi==2){
		
		printf ("2 sayisina kadar 1 tane asal sayi vardir.");
	}
	
	else if(sayi<2)
	printf (" bu tur araliklarda asal sayi bulunmaz.\n tavsiye: asal sayilari taratmak icin '1'den buyuk dogal sayi giriniz.\n\a ornegin 1453");
	
	else{
	
	
	 for(i=3;i<=sayi;i++)
	 {
	 toplam=toplam+asal(i);
     }
	 
	 printf("\n%d sayisina kadar %d tane asal sayi vardir.",sayi,toplam+1); yogunluk=toplam+1;
	 printf(" Yogunluk=%% %0.3f",100*(yogunluk/sayi));
}
toplam=0;printf("\n----------------------------------------------------------------\n\n"); printf("\a");
}
	


}

int asal(int p)
{
	
int sayac=0,i,kalan;
	
	
for(i=2;i<p;i++)
{
	kalan=p%i;
	if(kalan==0){
	
	sayac++;
	break;
}
	else
	sayac=0;
	}
	if(sayac==0)
	return 1;
	else
	return 0;
		
}
