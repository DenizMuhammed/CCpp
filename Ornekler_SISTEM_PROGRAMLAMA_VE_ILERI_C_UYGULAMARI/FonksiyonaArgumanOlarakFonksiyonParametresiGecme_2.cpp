
/*
Fonksiyon Göstericilerinin Fonksiyon Parametresi Olarak Kullanýlmasý

SÝSTEM PROGRAMLAMA ve ÝLERÝ C UYGULAMALARI 
Sayfa: 36'da yer alan ornek.
*/
#include <stdio.h>
#include <stdlib.h>
void *mymalloc (size_t size, void(*pfailure)(void))
{
void *pblock;
do {
pblock = malloc(size);
pblock = NULL; // "Eger hafiza ayrilmaz ise, yani malloc NULL donerse" durumunu simule etmek icin NULL atandi. !?
if (pblock)
 break;
pfailure();
} while (pblock == NULL);

return pblock;
}
void handler(void)
{
printf("Not enough memory!..\n");
exit(EXIT_FAILURE); // stdlib.h icinde bir fonksiyon. C++ kodunu sonlandirir.
}
int main(void)
{
int *ptr = (int *)mymalloc(10 * sizeof(int), handler);
/**************
******************/
free(ptr);
return 0;
} 
