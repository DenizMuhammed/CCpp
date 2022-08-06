#include <stdio.h>
#include <conio.h>
#include <math.h>

// fonksiyonun pozitif kökünü bulan program

float f(float);

int main(){
	
	
	
	
	float x=0,epsilon=0.000001,carpim=1;
	
	while(carpim>0){
		
		carpim=f(x)*f(x+epsilon);
		
		x=x+epsilon;
		
		//printf("%f\n",x);
		
	}
	

	printf("%f",x);
		
		
}

float f(float y){
	float d;
	
	d=exp(y)-y-2;
	
	
	return d;
}




