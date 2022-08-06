#include <stdio.h>
#include <math.h>
#include <conio.h>

// 1 - 1/3 + 1/5 - 1/7 + 1/9 - 1/11...+ 1/n toplamýný hesaplayan program

float power,toplam=0;

int i,n,k,kalan;

int main () {


printf("bir tek tam sayi giriniz\n");
scanf("%d",&n);	

for( k=1,i=1;i<=n;k=k+1,i=i+2)
 {
 	
 	
 	power=pow(i,-1);
 	
 	kalan=k%2;
 

 if(kalan==1)
 toplam=toplam + power;
 else
 toplam=toplam - power;

 //printf("kalan= %d , k= %d , n= %d , i= %d , power= %f , toplam= %0.19f \n",kalan,k,n,i,power,toplam);
 printf("toplam= %0.25f \n",toplam);
 
}
getch();
	
	return 0;
}
