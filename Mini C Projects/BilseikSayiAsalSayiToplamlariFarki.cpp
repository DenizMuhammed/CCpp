#include <stdio.h>
/*
0-N arasindaki asal sayilarin toplami A, ayni araliktaki bilesik sayilarin toplami B ise
B-A farkini bulan program.
*/

int asal(int p)
{
	if(p<2) return 0; // ne bilseik ne asal sayi olmayan sayilar.
	
	for(int i=2; i<=p/2; i++)
	{
		if(p%i==0) 
		return +1; // bilesik ise.
	}
	
	return -1; // asal ise.
}


int main(int argc, char **argv)
{
     const int N=720;
     int B_A=0; // A-B farki
     
     for(int i=0; i<=N; i++)
     {
     	B_A += i * asal(i);
	 }
     
     printf("\n0 - %d arasindaki sayilar icin B-A = %d", N, B_A);
     
     
      
}




