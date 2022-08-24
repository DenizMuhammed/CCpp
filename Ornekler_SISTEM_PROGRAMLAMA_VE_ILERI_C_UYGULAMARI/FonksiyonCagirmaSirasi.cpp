
#include <stdio.h>

/* Derleyicinin islem icerisinde fonksiyon cagirma sirasinin kontrol edilmesi*/

int order=0;

 f1()
{

order++;
printf("\nf1 %d. Sirada Cagirildi.\n",order);
return 1;	
}

 f2()
{

order++;
printf("\nf2 %d. Sirada Cagirildi.\n",order);
return 2;	
}

 f3()
{

order++;
printf("\nf3 %d. Sirada Cagirildi.\n",order);
return 3;	
}

 f4()
{

order++;
printf("\nf4 %d. Sirada Cagirildi.\n",order);
return 4;	
}

int main ()

{

int result;

result = f1() + f2() + f3() * f4();



}
