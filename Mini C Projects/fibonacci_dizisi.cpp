#include <stdio.h>
#include <conio.h>

int fonk(int);
 int main()
{
int i,deger, a,b,sonuc; 

puts("n'inci Fibonacci sayisini bulan program:\n");
puts("Bir deger giriniz:");
puts(" ");
printf("n= ");

scanf("%d",&deger); puts(" ");


a=1; b=1; sonuc=2;

if(deger<=2 & deger>0)
sonuc=1;
else if(deger<=0)
{printf("pozitif sayI giriniz...");
return 0;
}
for(i=3;i<deger;i++)
{
a=b;
b=sonuc;
sonuc=a+b;
}
printf("%d'inci Fibonacci sayisi = %d",deger,sonuc);
getch();
}
