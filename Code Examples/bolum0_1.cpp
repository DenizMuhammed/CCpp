
#include <stdio.h>

 main ()
{
char kar;
if((kar=getchar())!='\n')
main(); 
putchar(kar); // ?????girilen de�eri ascii de�eri olarak al�p karaktere cevirir.
}
