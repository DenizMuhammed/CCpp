
// CREATING VARIABLE SIZE ARRAYS.

#include <stdio.h>
#include <stdlib.h>

main()
{

int boyut;
printf("ogrenci sayisini giriniz: ");
scanf("%d",&boyut);
int *dizi = (int *) malloc(sizeof(int)*boyut);

for(int k=0; k<boyut; k++)
{
 scanf("%d",(dizi+k));
}

printf("\n");

for(int k=0;k<boyut;k++)
{
	printf(" %d ",dizi[k]);
}


}






