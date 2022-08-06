#include <stdio.h>
#include <conio.h>
int main ()

{
	
int a[30];
int gecici,s;


printf("SayI adedini giriniz: ");
scanf("%d",&s); puts(" ");

printf ("%d tane sayIyI sIrayla giriniz: ",s); puts(" ");puts(" ");

for(int i=0;i<s;i++) // dizi elemanlarýný girme döngüsü

{
	scanf("%d",&a[i]);
}

 puts(" ");printf("Girilen dizi: ");

for(int i=0;i<s;i++)
{
	printf("%d",a[i]);printf(" ");
}

puts(" "); puts(" ");


for(int i=0; i<s;i++) // dizinin elemanlarýný sýrayla seçer.
{
	for(int j=i+1;j<s;j++) // seçilen dizi elemanýný sýrayla saðýndakilerle kýyaslar.
	
	{
		if(a[i]>a[j]) // kýyaslanan elemanlardan saðdaki soldakinden küçükse ise bu iki eleman yer deðiþtireceklerdir.
		
		{
			gecici=a[i];
			a[i]=a[j];
			a[j]=gecici;
		}
	}
}

puts(" ");
printf("Kucukten buyuge sIralama: ");
for(int i=0; i<s; i++) // sýralanan diziyi ekrana yazdýrma döngüsü

{
	printf(" %d ",a[i]);
}
	
getch(); return 0;
}
