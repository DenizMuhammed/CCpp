#include <stdio.h>
#include <conio.h>
int main()
{
float f=0.85;int i;
float d0=0.1,d1=0.1,d2=0.1,d3=0.1,d4=0.1,d5=0.1,d6=0.1,d7=0.1,d8=0.1,d9=0.1; 
for(i=0;i<40;i++) 
	{   d0=0.015+f*((d5/8)+(d6/8)+(d7/7)+(d8/6));
		d1=0.015+f*((d5/8)+(d6/8));
		d2=0.015+f*((d5/8)+(d6/8));
		d3=0.015+f*((d5/8)+(d6/8)+(d7/7)+(d8/6));
		d4=0.015+f*((d5/8)+(d7/7)+(d8/6)+(d9/5));
		d5=0.015+f*((d0/4)+(d1/2)+(d2/2)+(d3/4)+(d4/4)+(d6/8)+(d7/7)+(d9/5));
		d6=0.015+f*(d0/4+d1/2+d2/2+d3/4+d5/8+d7/7+d8/6+d9/5);
		d7=0.015+f*(d0/4+d3/4+d4/4+d5/8+d6/8+d8/6+d9/5);
		d8=0.015+f*(d0/4+d3/4+d4/4+d6/8+d7/7+d9/5);
		d9=0.015+f*(d4/4+d5/8+d6/8+d7/7+d8/6);}
     printf("%f\n",d0);printf("%f\n",d1);printf("%f\n",d2);printf("%f\n",d3);printf("%f\n",d4);printf("%f\n",d5);printf("%f\n",d6);
	 printf("%f\n",d7);printf("%f\n",d8);printf("%f\n",d9);
	 getch();
	 return 0;}








