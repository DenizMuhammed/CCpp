#include <stdio.h>
#include <conio.h>
int j=0,k=0;
int m[20],cift[20],tek[20];

int main ()
{
printf("20 tane tam sayI giriniz: \n");puts(" ");

for(int i=0; i<20;i++)	
{
	scanf("%d",&m[i]);
	if(m[i]%2==0)
	{
		cift[j]=m[i];
		j++;
	}
	else
	{
		tek[k]=m[i];
		k++;
	}
}

puts(" ");

printf("cift sayIlar: ");

for(int i=0;i<j;i++)
{
	printf("%d",cift[i]); printf("  ");
}

printf("\n");printf("\n");

printf("tek sayIlar: ");

for(int i=0; i<k;i++)
{
	printf("%d",tek[i]); printf("  ");
}
getch(); return 0;
}
