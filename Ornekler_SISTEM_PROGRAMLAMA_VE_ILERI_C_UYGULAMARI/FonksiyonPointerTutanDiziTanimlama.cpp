
//  return degeri int, parametresi void olan fonksiyon adreslerini tutan bir dizi tanimlama:


#include <stdio.h>

int f1 (void)
{
	return 1;
}

int f2 (void)
{
	return 2;
}

int f3 (void)
{
	return 3;
}

int f4 (void)
{
	return 4;
}

int main ()

{
   int (*fpDizi[4]) (void);
   
   // yukaridaki satir asagidaki 2 satirda yer aldigi gibi degistirilebilir.
   typedef int (*fp) (void); // int donus tipli ve void parametreli fonksiyonlar icin yeni tip.
   fp Dizi[4];
   
   fpDizi[0]= f1;
   fpDizi[1]= f2;
   fpDizi[2]= f3;
   fpDizi[3]= f4;
   
   for(int i=0; i<4; i++)
   {
   	 int result = fpDizi[i] ();
   	 
   	 printf("\n%d",result);
   	 
   }
}
