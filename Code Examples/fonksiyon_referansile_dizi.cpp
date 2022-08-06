
#include <stdio.h>

 void fonk(int a[])
 {
  a[1]=77;
 } 
 main ()
{
int a[]={10,20,30,40,50};
fonk(&a[3]);
printf("%d %d %d %d %d",a[0],a[1],a[2],a[3],a[4]);

}

