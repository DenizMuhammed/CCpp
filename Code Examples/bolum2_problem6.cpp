
#include <stdio.h>
#include <conio.h>
#define boyut 20
 main ()
{

char a[boyut];

for(int i=0; i<boyut ;i++)
{
 a[i]=getch();
 printf("%c",a[i]);	
}

printf("\n");

for(int j=0; j<boyut-3; j++)
{
	
	if(a[j]==a[j+1] && a[j+1]==a[j+2] && a[j+2]!=a[j+3])
	printf("%c",a[j]);
	
	if(a[j]==a[j+1] && a[j+1]==a[j+2] && a[j+2]==a[j+3])
	j=j+3;
	
}

if(a[boyut-1]==a[boyut-2] && a[boyut-1]==a[boyut-3] && a[boyut-1]!=a[boyut-4] ) // en sonda tam 3 ayný karakter var ise
printf("%c",a[boyut-1]);



}
