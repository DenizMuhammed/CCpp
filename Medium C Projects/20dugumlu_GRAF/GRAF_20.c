#include<stdio.h>
#include<conio.h>
int main ()
{

int dugum_deger[20]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19}; // her bir d���m�n ba�lang��taki de�eri (rengi)

int node; // graftaki d���mler.
int komsu_node; // bir d���me kom�u olmas� test edilen d���m.
int renk; // d�ng�ler sonunda d���mlerin toplamda ka� farkl� de�erleri ( renkleri) oldu�unu saymam�z� sa�layan sayac.
int node_secici; // her bir d���m� s�rayla graftan ��karmak i�in kullan�lan sayac
int ilk_deger; //  her yeni node se�iminde "dugum_deger[]" de�i�kenlerini ilk de�erine(rengine) �eken de�i�ken.
int baslangic_node; // komsu d���mleri renklendirmek i�in her seferinde farkl� d���mden ba�latan sayac
int par_dugum_sayisi=20;
int satir,sutun; // KM yazdirmak i�in kullan�lan d�ng� de�i�kenleri


int KM [20][20]=  // KOMSULUK MATRISI:
{

{0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, //0 nolu D���M 1.sat�r
{1,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0}, //1 nolu D���M 2.sat�r
{1,1,0,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0}, //2 nolu D���M 3.sat�r
{0,0,1,0,1,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0}, //3 nolu D���M 4.sat�r
{0,0,1,1,0,1,0,1,0,0,0,0,0,0,0,0,0,1,0,0}, //4 nolu D���M 5.sat�r
{0,0,0,1,1,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0}, //5 nolu D���M 6.sat�r
{0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, //6 nolu D���M 7.sat�r
{0,0,0,0,1,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0}, //7 nolu D���M 8.sat�r
{0,0,0,0,0,0,0,1,0,1,0,1,0,0,0,0,0,0,0,0}, //8 nolu D���M 9.sat�r
{0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0}, //9 nolu D���M 10.sat�r
{0,0,0,1,0,1,0,0,0,0,0,0,0,0,1,1,0,0,0,0}, //10 nolu D���M 11.sat�r
{0,0,0,0,0,0,0,0,1,0,0,0,1,1,0,0,0,0,1,0}, //11 nolu D���M 12.sat�r
{0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0}, //12 nolu D���M 13.sat�r
{0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0}, //13 nolu D���M 14.sat�r
{0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1,0,0,0,0}, //14 nolu D���M 15.sat�r
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,1,0,0,0}, //15 nolu D���M 16.sat�r
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0}, //16 nolu D���M 17.sat�r
{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1}, //17 nolu D���M 18.sat�r
{0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0}, //18 nolu D���M 19.sat�r
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0} //19 nolu D���M 20.sat�r

};

printf("DUGUMLERIN GRAFI PARCALAYIP PARCALAMADIGINI GORMEK ICIN ENTER'e BAS \n");

getchar();
for(node_secici=0;node_secici<20;node_secici++) // program s�rayla ��kar�lacak olan d���mleri se�iyor.


{
	getchar();


for(baslangic_node=0;baslangic_node<20;baslangic_node++) // renklendirme(kom�ulu�a g�re de�er ataman�n) yap�laca�� ilk d���m se�iliyor.
{

for(node=baslangic_node;node<20;node++) // ba�lang�� nodundan itibaren birer art�mla t�m nodlar kom�uluk testi i�in s�rayla se�iliyor.

{
	if(node==node_secici) // kopar�lan d���m se�ilmi�se bu d���m �zerinde  renk de�i�tirme(de�er de�i�tirme) i�lemini yapmamak i�in kullan�l�yor.
	continue;


	for(komsu_node=0;komsu_node<20;komsu_node++) // bir �stteki "for" da se�ilen d���mle di�er t�m d���mlerin kom�ulu�u test ediliyor.
	{
		if(KM[node][komsu_node]==1) // d���mler kom�u mu test ediliyor.
		{
			dugum_deger[komsu_node]=dugum_deger[node]; // d���mler kom�uysa ayn� renk (de�er) atan�yor.
		}
	}
}


for(renk=0;renk<19;renk++) // alltaki kod i�in say�c�
{
	if(dugum_deger[renk]==dugum_deger[renk+1]) // ard���k d���mlerin de�eri (rengi) ayn� ise renk de�i�keni art�yor. de�ilse d�ng�den o an ��k�l�yor.
	continue;
	break;


}
}
if(renk!=19) // d�ng�den al�nan "renk" de�i�keni de�eri 19 de�ilse; yani d���m de�erleri(renkleri) say�s� "1"den farkl�ysa graf par�alanm�� demektir.
{
	printf(" %d NOD'unun cikarilmasi GRAFI PARCALAR\n",node_secici);
printf("\n");

par_dugum_sayisi--; // parcalanmayan d���m say�s�n� tespit etmek i�in kullan�l�yor.

}
else{}


for(ilk_deger=0;ilk_deger<20;ilk_deger++) // en ba�ta graftan ��kar�lan d���m de�i�tirilmeden �nce "dugum_deger[]" de�i�kenleri ilk de�erlerine �ekiliyor.
{
	dugum_deger[ilk_deger]=ilk_deger;
}

}

if(par_dugum_sayisi==20) // par�alanmayan d���m say�s� ilk de�erindeyse; yani 20 ise grafta par�alanma yoktur.
{printf("GRAFI PAR�ALAYAN BIR D���M YOKTUR \n");}


for(satir=0;satir<20;satir++){

for(sutun=0;sutun<20;sutun++)
{
	printf("%d",KM[satir][sutun]);
	printf("   ");
}
printf("\n");
}

    getch(); return 0;
}
