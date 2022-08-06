#include <stdio.h>
#include <conio.h>

 main ()
 {
 	while(1)
 	{
	 
 	int sayac=1; int sayi; int bolen=0; int kalan;
 	printf(" bir tam sayI giriniz: ");
 	
 	scanf("%d",&sayi);printf("\n");
 	if(sayi<=1)
 	{
	 printf("1 den buyuk bir tam sayi giriniz \n");
 	break;}
 	
	 while(sayac<=sayi)
 	{
 		kalan=sayi%sayac;
 		if(kalan==0)
 		bolen++; sayac++;
		 }
 		if(bolen==2)
	  printf(" girilen sayI ASALDIR!");
	    else
	 printf(" girilen sayI asal DEGiLDiR!");
	 printf("\n");
	 printf("--------------------------------------");
	 printf("\n");
	 printf("\n");
	 }
getch();
     }
