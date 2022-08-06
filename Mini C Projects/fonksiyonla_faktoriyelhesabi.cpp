#include<stdio.h>
#include<conio.h>


int faktorial(int);
int s;

main(){
	
	printf("bir sayi giriniz\n");
	
	scanf("%d",&s);
	
	printf("sayinin faktoriyeli %d ",faktorial(s));
	
	getch();return 0;}

int faktorial(int x){
	int carpim=1,i;


for(i=1;i<=x;i++)
{
carpim=carpim*i;
	
}
return carpim;
}
