#include <stdio.h>
main ()
{
char *metin="dunya yine de donuyor...";
int indis=0;
while(*(metin+(++indis))!=0);
while(--indis>-1)
printf("%c",*(metin+indis));
}
