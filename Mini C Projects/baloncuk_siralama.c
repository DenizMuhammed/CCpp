#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main ()
{
	
	int m[10];
	int i,buyuk,kucuk ;
	
	printf("10 tane tam sayi giriniz\n");
	
	printf("  \n");
	
	
	for(i=0;i<10;i++) // on tana tam say�y� s�rayla girmek i�in gerekli d�ng�
	{
	
	
	getchar;
	
	scanf("%d",&m[i]);
	}
	
	i=0;
	
	while(1) // s�ralama ger�ekle�ene kadar bir loop (d�ng�) olu�turmak i�in gerekli while
	{
	
	while(m[i]<=m[i+1]) // say�lar�n t�m�n�n kucukten buyuge s�raland���n� test eden while
	{
		i=i+1;
		if(i>7)
		break;
		
	}
	
	if(i<8)
	{
		for(i=0;i<9;i++)
		{
			if(m[i]>=m[i+1])
			{
				buyuk=m[i]; kucuk=m[i+1];
				m[i]=kucuk; m[i+1]=buyuk;
			
			}
			
		}
		
		i=0;
	}
	
	else
	break;
	
}

/////////////////////////// ekrana yazd�rma i�lemi
printf("\n");

printf("kucukten buyuge siralama su sekildedir:\n");

	for(i=0;i<10;i++)
	printf("%d\n",m[i]);
		
getch();
	
return 0;	
	
}



