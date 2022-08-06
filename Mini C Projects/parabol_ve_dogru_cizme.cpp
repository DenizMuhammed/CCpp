#include <stdio.h>
#include <conio.h>
#include <math.h>

float x=1;
float yukseklik=0;

double k;

int n,sinir;
float h;

float a,c;


int main()

{
	
	while(1)
	{
	
	printf("y=a.x^n+c icin degiskenleri gir:");
	printf("\n");
	printf("\n");
	printf("a=");
	scanf("%f",&a);
	printf("\n");
	
	printf("n=");
	scanf("%d",&n);
	printf("\n");
	
	printf("c=");
	scanf("%d",&c);
	printf("\n");

	printf("\n");
	
	if(n>1)
	{
	
	h=0.5;sinir=8;
}
	
	else
	{
	h=1;sinir=12;
	}
	
	 
	while(x<sinir)
	{
	
	x=x+h;
	
	k=48/(a*pow(sinir-1,n));
	
	yukseklik=(a*k*pow(x,n)+c);
	for( int i=0; i<=yukseklik;i++)
	{
		printf(" ");
		
	}
	printf(".");
	printf("\n");
	
	
}
printf("\n");
printf("--------------------------------");
printf("\n");
printf("\n");
x=1;
}
	
	
	getch();
	return 0;
}
