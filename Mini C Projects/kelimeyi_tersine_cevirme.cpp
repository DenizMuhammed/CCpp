#include <stdio.h>
#include <conio.h>
#include<string.h> // string kütüphanesi

int main ()

{
	while(1)
	{
	
	
	char metin[30];
	
	printf(" bir metin giriniz:\n");
	
	scanf("%s",metin); puts(" ");
	
	
	for(int i=strlen(metin);i>0;i--) // strlen(metin) komutu 'metin' stringindeki karakret sayısını verir.
	
	{
		printf("%c",metin[i-1]);
	}
	
	puts("");puts("");
	
}
	
	
	
	
	getch(); return 0;
}
