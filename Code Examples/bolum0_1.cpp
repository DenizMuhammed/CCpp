
#include <stdio.h>

 main ()
{
char kar;
if((kar=getchar())!='\n')
main(); 
putchar(kar); // ?????girilen deðeri ascii deðeri olarak alýp karaktere cevirir.
}
