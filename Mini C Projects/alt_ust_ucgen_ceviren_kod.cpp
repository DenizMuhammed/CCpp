#include <stdio.h>
#include <conio.h>

// matrisi alt ve üst üçgen matris yapan kod

int n;

float M[10][10];

float k;

main ()

{
	
printf("kare matris icin boyut giriniz: ");
scanf("%d",&n); puts(" ");puts(" ");

for(int satir=0; satir<n;satir++) // matris elemanlarýný girme iþlemi
{
	for(int sutun=0; sutun<n;sutun++)
	{
		scanf("%f",&M[satir][sutun]);
	}
}
//////////////////////////

for(int sutun=0;sutun<n;sutun++)
{
	for(int satir=0;satir<n;satir++)
	{
		if(satir!=sutun) // asal köþegene sýfýrlama iþlemi uygulamamak için gerekli koþul
		{
		
		k=M[satir][sutun]/M[sutun][sutun];
		
		for(int h=0;h<n;h++)
		{
			M[satir][h]=M[satir][h]-k*M[sutun][h];
		}
		
		
		}
	}
}

/////////////////////////////////// Bu blok tamamlandýðýnda alt ve üst matris oluþmuþ olacaktýr.

for(int satir=0; satir<n;satir++)

{
	for(int sutun=0; sutun<n;sutun++)
	
	{
	 printf("%0.2f\t",M[satir][sutun]);	
	}
	puts(" ");puts(" ");
}
	
	
	
	
	
	
	
	
	
	
	getch(); return 0;
}
