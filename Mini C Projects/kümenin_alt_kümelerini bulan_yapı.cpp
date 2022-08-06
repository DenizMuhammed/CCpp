#include <stdio.h>
#include <conio.h>
#include <math.h>


 int x, k[7],tk[7],i=0;
 int d,j,h,s,a,z;
 int g;
 void cevir(void);
 int agirlik[6]={7,10,9,8,3,5};
	int fiyat[6]={23,32,37,42,55,78};
	int sonuc[2][64];
 
 
 int main()
 {
 	d=0;
 	
 	for(a=64;a<128;a++,d++)
 	{
 		x=a;
 	
 		cevir();
 		
 		
 		
 		for(h=0;h<6;h++)
 		{
 			sonuc[0][d]=sonuc[0][d]+((tk[h+1])*(agirlik[h]));
 			
 			sonuc[1][d]=sonuc[1][d]+((tk[h+1])*(fiyat[h]));
		 }
		 //d++;
	 }
	 
	  
	 // yazdýrma
	 printf("AGIRLIKLAR: ");
	 	printf("FIYATLAR:\n");
	 for(z=0;z<64;z++)
	 {
	 	
	 
	 	printf("%5d",sonuc[0][z]);
	 	printf("%12d",sonuc[1][z]);
	 	printf("\n");
	 	
	 }
	 
	
 	
 	
 	getch();
 	return 0;
 }
 
void cevir(void){

	i=0;
    
        
       while(x >= 1){
               
               k[i] = x%2;
               x = x / 2;
               i++;
       }
       
    
       
       tk[0]=k[6]; tk[1]=k[5]; tk[2]=k[4]; tk[3]=k[3]; tk[4]=k[2]; tk[5]=k[1]; tk[6]=k[0];
        
        
       
       
}
