// �K� MATR�S� �ARPAN PROGRAM

#include <stdio.h>
#include <conio.h>
unsigned int az;


float A[10][10];
float B[10][10];

float AB[10][10];

int satA,satB,sutA,sutB,ortak;

int main()
{
	
	
printf(" matris A'nIn satIrInI giriniz: "); scanf("%d",&satA);puts(" ");
printf(" matris A'nIn sutununu giriniz: "); scanf("%d",&sutA);puts(" ");
printf(" matris B'nin satIrInI giriniz: "); scanf("%d",&satB);puts(" ");
printf(" matris B'nin sutununu giriniz: "); scanf("%d",&sutB);puts(" ");

if(sutA!=satB)
{
	printf("Bu iki matris carpIlamaz...\n\nCunku A'nIn sutun sayIsI B'nin satIr sayIsIna esit degil.");
	while(1);
	{}
}

else
{
ortak=sutA;
ortak=satB;
}

//MATR�SLER� G�RME:

printf("A matrisini giriniz:\n\n");

for(int sat=0; sat<satA;sat++)
{
	for(int sut=0; sut<sutA;sut++)
	{
	scanf("%f",&A[sat][sut]);	
	}
	printf("\n");
}

puts(" ");puts(" ");


printf("B matrisini giriniz:\n\n");

for(int sat=0; sat<satB;sat++)
{
	for(int sut=0; sut<sutB;sut++)
	{
	 scanf("%f",&B[sat][sut]);	
	}
	
	printf("\n");
}

puts(" ");puts(" ");



// MATR�SLER� �ARPMA:

 for(int sat=0;sat<satA;sat++) // A n�n sat�rlar�n� se�iyoruz

  {
  	
  	for(int sut=0;sut<sutB;sut++) // An�n sutun eleman�n� se�tik
  	{
  		
  		for(int n=0;n<ortak;n++)
  		{
		  
  		AB[sat][sut]=AB[sat][sut]+A[sat][n]*B[n][sut];
  		
  	   }
	}
  
  }

/////// �ARPIMI YAZDIRMA:

printf("AxB=\n\n");
for(int sat=0; sat<satA;sat++)
{
	for(int sut=0;sut<sutB;sut++)
	
	{
		printf("%0.1f",AB[sat][sut]);printf("\t");
	}
	
puts(" ");puts(" ");
}

	
	
	
	
	
	getch(); return 0;
}
