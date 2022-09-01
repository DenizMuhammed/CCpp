#include <stdio.h>

/*
Tek For ile Dik Ucgen Olusturma:

Asagýdaki gibi C de dik ucgen olusturmak için ic ice 2 tane for kullanilir. Bu durumda zaman karmasikligi O(n^2) dir.
Bu program ise tek bir for kullanarak O(n) zaman karmasikliginda problemi cozmektedir.

*          
**
***
****
*****
******

ALGORITMA:

Yukaridaki ciktinin deseni:   " *a**a***a****a*****a*****a " seklindedir. Burada a= "\n" karakteridir. 

for dongusu icerisinde 2 degiskenimiz olsun.

Bunlardan biri "t" olsun. t, o ana kadar ekrana basilan toplam yildiz sayisini tutan dongu degiskeni olsun.
Diger degiskenimiz "k" olsun. k, o ana kadar ekrana basilan "a" karakterinin (bu ornekte "yeni satir" karakteri oluyor) sayisini
tutan degisken olsun.

Yukaridaki oruntunun 1 + 2 + 3 + 4 + 5... toplami ile yakindan iliskili oldugu gorulur. Burada "t" dizinin toplamidir.
a ise sozkonusu ayni dizinin son elemaninin degeridir. Bu durumda a*(a+1) = 2*t iliskisi vardýr. (Gauss toplami)

Ornegin:

1, 2, 3, 4, 5, 6 dizisi icin t = 1 + 2 + 3 + 4 + 5 + 6 = 21. a =6 dir. ve 6 * (6+1) = 2 * 21 dogrudur.

*/

int main(int argc, char **argv)
{
	#define adet 25 // ucgenin kac satir olacaginin terci icin
	const char *point = "*";
	const char *endPoint = "\n";
	
   for(int t=1, k=1; k<adet; t++)
   {
     printf("%s",point);
   	 
   	 if(k * (k+1) == 2 * t)
   	 {
   	   printf("%s",endPoint);
   	   k++;
	 }
   }
}
