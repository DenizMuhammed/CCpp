/*
fonksiyona referans ile de�er ge�irme �rne�i:
Ama�: 2 say�n�n de�erlerini  de�i�tiren fonksiyon.
�rne�in: x=3 y=4 ise f(x,y) i�leminen sonra x=4 y=3 olmal�d�r.
*/
#include <stdio.h>

void kd(int *xg, int *yg)
{
int gecici;
gecici=*xg;
*xg=*yg;
*yg=gecici;
}

main ()
{
int x,y;
printf("x= ");scanf("%d",&x); printf("\n"); printf("y= ");scanf("%d",&y);
kd(&x,&y);
printf("\nsonuc:\n\n");
printf("x= %d\ny= %d",x,y);
 
}
