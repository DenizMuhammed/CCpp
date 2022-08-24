// Ýsim soyisimden olusan bir yapiyi isimlerine gore alfabetik siralama
// SÝSTEM PROGRAMLAMA ve ÝLERÝ C UYGULAMALARI sayfa 44.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Sort (void *pvArray, unsigned size, unsigned witdh,
int (*Compare)(const void *, const void*))
{
unsigned i,j,k;
char *pcArray = (char*) pvArray, *pc1, *pc2, temp;

for(i = 0; i < size; ++i)
 for (k = 0; k < size - i - 1; ++k) {
 pc1 = pcArray + witdh * k;
 pc2 = pcArray + witdh * (k + 1);

 if (Compare(pc1, pc2) > 0)
 for (j = 0; j < witdh; ++j) {
 temp = pc1[j];
pc1[j] = pc2[j];
pc2[j] = temp;
 }
}
} 

typedef struct tagPERSON
{
char name[32];
int no;
}PERSON;

int Compare(const void *pv1, const void *pv2)
{
const PERSON *p1 = (const PERSON *) pv1;
const PERSON *p2 = (const PERSON *) pv2;
return strcmp(p1->name, p2->name);

}

int main()
{
PERSON people[] = {
 {"Ali Serce", 123},{"Ali Serce", 576}, {"Necati Ergin", 231},
 {"Metin Kaya", 78}, {"Gurbuz Aslan", 643}, {"Guray Sonmez", 322}
 };
 
 
int i;
Sort(people, 6, sizeof(PERSON), Compare);
for(i = 0; i < 6; ++i)
printf("%s\t\t\t\%d\n", people[i].name, people[i].no);
putchar('\n');
return 0;
} 
