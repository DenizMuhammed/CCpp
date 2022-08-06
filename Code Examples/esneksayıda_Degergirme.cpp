#include <stdio.h>

 void esnek(int t,...)
 {
 	int *p=&t;
 	
 	printf("ALINAN VERILER:\n");
 	
 	while(*p!=NULL)
 	{
 	 printf("%d ",*p);
	  p++;	
	}
 }




int main ()


{
gel_buraya:
register int a;
esnek(1,2,3,4,5,6,7,8,9,0,NULL);


 
}



