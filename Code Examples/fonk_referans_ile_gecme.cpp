/*
fonksiyona referans ile deðer geçirme örneði:
Amaç: 2 sayýnýn deðerlerini  deðiþtiren fonksiyon.
Örneðin: x=3 y=4 ise f(x,y) iþleminen sonra x=4 y=3 olmalýdýr.
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
