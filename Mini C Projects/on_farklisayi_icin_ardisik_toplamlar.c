#include <stdio.h>
#include <conio.h>

int main(){
	
	int a [10],toplam,sayac,i,j;
	
	printf("10 tam sayi gir\n");
	
	for(i=0;i<10;i++) // girilen say�lar� dizinin elemanlar�na at�yor.
	{
		
		printf ("%d nolu sayiyi gir:  ",i+1);
		
		scanf("%d",&a[i]);
		
		
		}
		
		printf("\n ");
		
		for(j=0;j<10;j++) //  whilede dizi elelamnalr�n� s�rayla s�namak i�in dizi indisleri giriliyor
		{
			
			toplam=0;
			sayac=0;
			
		
		
		while(sayac<=a[j]) // 0 dan incelenen dizi eleman�n�n de�erine gelene kadar say�lar toplan�p toplam de�i�kenine atanacak
		
		{
			toplam=toplam+sayac;
			sayac++;
		}
		
	printf("0 ile %d arasi tam sayilarin toplami %d dir. \n",a[j],toplam);
	printf(" ")	;
}
	getch();
	return 0;
}
