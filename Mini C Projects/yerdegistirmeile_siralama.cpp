#include <stdio.h>
#include <conio.h>
int main ()

{
	
int a[30];
int gecici,s;


printf("SayI adedini giriniz: ");
scanf("%d",&s); puts(" ");

printf ("%d tane sayIyI sIrayla giriniz: ",s); puts(" ");puts(" ");

for(int i=0;i<s;i++) // dizi elemanlar�n� girme d�ng�s�

{
	scanf("%d",&a[i]);
}

 puts(" ");printf("Girilen dizi: ");

for(int i=0;i<s;i++)
{
	printf("%d",a[i]);printf(" ");
}

puts(" "); puts(" ");


for(int i=0; i<s;i++) // dizinin elemanlar�n� s�rayla se�er.
{
	for(int j=i+1;j<s;j++) // se�ilen dizi eleman�n� s�rayla sa��ndakilerle k�yaslar.
	
	{
		if(a[i]>a[j]) // k�yaslanan elemanlardan sa�daki soldakinden k���kse ise bu iki eleman yer de�i�tireceklerdir.
		
		{
			gecici=a[i];
			a[i]=a[j];
			a[j]=gecici;
		}
	}
}

puts(" ");
printf("Kucukten buyuge sIralama: ");
for(int i=0; i<s; i++) // s�ralanan diziyi ekrana yazd�rma d�ng�s�

{
	printf(" %d ",a[i]);
}
	
getch(); return 0;
}
