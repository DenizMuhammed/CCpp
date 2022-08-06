
#include <stdio.h>

int main()
{
  struct yapim {char x;int r;};	
  
  struct yapim *p=0;
  struct yapim veri;
  p=&veri;
  printf("p = %d\n",p);
  p++;
  printf("p++ = %d\n",p);
  printf("struct boyutu= %d\n",sizeof(yapim));
}
