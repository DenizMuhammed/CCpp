#include <stdio.h>
#include <conio.h>
#include <math.h>


float m [3][3],toplam1,toplam2,determinant;


int toplam;

main()
{
puts("SARRUS iLE 3X3 MATRIS DETERMINANT HESAPLAMA PROGRAMI");puts("");
	puts("3X3 MATRIS GIRINIZ:");puts("");
	
	for(int satir=0; satir<3;satir++)  // 3*3 matrisin satýr ve sütununu girme döngüleri
	{
		
		for(int sutun=0; sutun<3;sutun++)
		{
			scanf("%f",&m[satir][sutun]);
			
		}
		
	} 
	
	
	toplam1=(m[0][0]*m[1][1]*m[2][2])+(m[0][1]*m[1][2]*m[2][0])+(m[0][2]*m[1][0]*m[2][1]); // sarrus kuralýna göre çarpýlýp toplanmasý gereken indisler
	
	toplam2=(m[0][2]*m[1][1]*m[2][0])+(m[0][0]*m[1][2]*m[2][1])+(m[0][1]*m[1][0]*m[2][2]);
	
	determinant=toplam1-toplam2;
	
	printf("\n");
	
	printf("determinant=%0.3f",determinant);
	
getch();
return 0;
}
