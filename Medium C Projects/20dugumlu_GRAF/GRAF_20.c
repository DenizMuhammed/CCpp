#include<stdio.h>
#include<conio.h>
int main ()
{

int dugum_deger[20]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19}; // her bir düðümün baþlangýçtaki deðeri (rengi)

int node; // graftaki düðümler.
int komsu_node; // bir düðüme komþu olmasý test edilen düðüm.
int renk; // döngüler sonunda düðümlerin toplamda kaç farklý deðerleri ( renkleri) olduðunu saymamýzý saðlayan sayac.
int node_secici; // her bir düðümü sýrayla graftan çýkarmak için kullanýlan sayac
int ilk_deger; //  her yeni node seçiminde "dugum_deger[]" deðiþkenlerini ilk deðerine(rengine) çeken deðiþken.
int baslangic_node; // komsu düðümleri renklendirmek için her seferinde farklý düðümden baþlatan sayac
int par_dugum_sayisi=20;
int satir,sutun; // KM yazdirmak için kullanýlan döngü deðiþkenleri


int KM [20][20]=  // KOMSULUK MATRISI:
{

{0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, //0 nolu DÜÐÜM 1.satýr
{1,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0}, //1 nolu DÜÐÜM 2.satýr
{1,1,0,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0}, //2 nolu DÜÐÜM 3.satýr
{0,0,1,0,1,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0}, //3 nolu DÜÐÜM 4.satýr
{0,0,1,1,0,1,0,1,0,0,0,0,0,0,0,0,0,1,0,0}, //4 nolu DÜÐÜM 5.satýr
{0,0,0,1,1,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0}, //5 nolu DÜÐÜM 6.satýr
{0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, //6 nolu DÜÐÜM 7.satýr
{0,0,0,0,1,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0}, //7 nolu DÜÐÜM 8.satýr
{0,0,0,0,0,0,0,1,0,1,0,1,0,0,0,0,0,0,0,0}, //8 nolu DÜÐÜM 9.satýr
{0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0}, //9 nolu DÜÐÜM 10.satýr
{0,0,0,1,0,1,0,0,0,0,0,0,0,0,1,1,0,0,0,0}, //10 nolu DÜÐÜM 11.satýr
{0,0,0,0,0,0,0,0,1,0,0,0,1,1,0,0,0,0,1,0}, //11 nolu DÜÐÜM 12.satýr
{0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0}, //12 nolu DÜÐÜM 13.satýr
{0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0}, //13 nolu DÜÐÜM 14.satýr
{0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1,0,0,0,0}, //14 nolu DÜÐÜM 15.satýr
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,1,0,0,0}, //15 nolu DÜÐÜM 16.satýr
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0}, //16 nolu DÜÐÜM 17.satýr
{0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1}, //17 nolu DÜÐÜM 18.satýr
{0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0}, //18 nolu DÜÐÜM 19.satýr
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0} //19 nolu DÜÐÜM 20.satýr

};

printf("DUGUMLERIN GRAFI PARCALAYIP PARCALAMADIGINI GORMEK ICIN ENTER'e BAS \n");

getchar();
for(node_secici=0;node_secici<20;node_secici++) // program sýrayla çýkarýlacak olan düðümleri seçiyor.


{
	getchar();


for(baslangic_node=0;baslangic_node<20;baslangic_node++) // renklendirme(komþuluða göre deðer atamanýn) yapýlacaðý ilk düðüm seçiliyor.
{

for(node=baslangic_node;node<20;node++) // baþlangýç nodundan itibaren birer artýmla tüm nodlar komþuluk testi için sýrayla seçiliyor.

{
	if(node==node_secici) // koparýlan düðüm seçilmiþse bu düðüm üzerinde  renk deðiþtirme(deðer deðiþtirme) iþlemini yapmamak için kullanýlýyor.
	continue;


	for(komsu_node=0;komsu_node<20;komsu_node++) // bir üstteki "for" da seçilen düðümle diðer tüm düðümlerin komþuluðu test ediliyor.
	{
		if(KM[node][komsu_node]==1) // düðümler komþu mu test ediliyor.
		{
			dugum_deger[komsu_node]=dugum_deger[node]; // düðümler komþuysa ayný renk (deðer) atanýyor.
		}
	}
}


for(renk=0;renk<19;renk++) // alltaki kod için sayýcý
{
	if(dugum_deger[renk]==dugum_deger[renk+1]) // ardýþýk düðümlerin deðeri (rengi) ayný ise renk deðiþkeni artýyor. deðilse döngüden o an çýkýlýyor.
	continue;
	break;


}
}
if(renk!=19) // döngüden alýnan "renk" deðiþkeni deðeri 19 deðilse; yani düðüm deðerleri(renkleri) sayýsý "1"den farklýysa graf parçalanmýþ demektir.
{
	printf(" %d NOD'unun cikarilmasi GRAFI PARCALAR\n",node_secici);
printf("\n");

par_dugum_sayisi--; // parcalanmayan düðüm sayýsýný tespit etmek için kullanýlýyor.

}
else{}


for(ilk_deger=0;ilk_deger<20;ilk_deger++) // en baþta graftan çýkarýlan düðüm deðiþtirilmeden önce "dugum_deger[]" deðiþkenleri ilk deðerlerine çekiliyor.
{
	dugum_deger[ilk_deger]=ilk_deger;
}

}

if(par_dugum_sayisi==20) // parçalanmayan düðüm sayýsý ilk deðerindeyse; yani 20 ise grafta parçalanma yoktur.
{printf("GRAFI PARÇALAYAN BIR DÜÐÜM YOKTUR \n");}


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
