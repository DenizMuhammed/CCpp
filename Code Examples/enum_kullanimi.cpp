
#include <stdio.h>
 main ()
{
	
	enum plaka {
	adana=1,adiyaman,afyon,agri,amasya,ankara,antalya,artvin,aydin,balikesir,bilecik,bingol,bitlis,bolu,
	burdur,bursa,canakkale,cankiri,corum,denizli,diyarbakir,edirne,elazig,erzincan,erzurum,eskisehir,
	gaziantep,giresun,gumushane,hakkari,hatay,isparta,mersin,istanbul,izmir,kars,kastamonu,kayseri,kirklareli,
	kirsehir,kocaeli,konya,kutahya,malatya,manisa,kahramanmaras,mardin,mugla,mus,nevsehir,nigde,ordu,rize,sakarya,
	samsun,siirt,sinop,sivas,tekirdag,tokat,trabzon,tunceli,sanliurfa,usak,van,yozgat,zonguldak,aksaray,bayburt,
	karaman,kirikkale,batman,sirnak,bartin,ardahan,igdir,yalova,karabuk,kilis,osmaniye,duzce};
	
	
	enum plaka s1,s2,s3; // plaka tipinde "sehirler" adýnda bir deðiþken üretildi
	
	s1=bolu;
	s2=duzce;
	s3=mardin;
	printf("%d %d %d\n",bolu,duzce,mardin);
	printf("%d+%d+%d=%d",s1,s2,s3,s1+s2+s3);
}

