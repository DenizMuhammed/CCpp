#include <iostream>
using namespace std;

void yazdir(int a[],int boy);

  main() {
	
	 int sayilar[10],poz[10],neg[10];
	int pozi=0,negi=0;
	cout<<"on sayi giriniz: ";
	for(int i=0;i<10;i++)
	{
		cin>>sayilar[i];
		if(sayilar[i]>0)
		poz[pozi++]=sayilar[i];
		else if(sayilar[i]<0)
		neg[negi++]=sayilar[i];
	}
	
	cout<<"girilen sayilar: ";
	
	yazdir( sayilar,10);
	
	cout<<"pozitif sayilar: ";
	yazdir(poz,pozi);
	
	cout<<"negatif sayilar: ";
	
	yazdir(neg,negi);
	
	return 0;
}

void yazdir (int a[],int boy)
{
	for(int i=0;i<boy;i++)
	{
	cout<<a[i];
	cout<<" ";}
	cout<<endl;
}
