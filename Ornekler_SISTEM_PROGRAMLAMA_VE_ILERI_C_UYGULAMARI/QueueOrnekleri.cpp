
// Tipik bir Queue Veri Yapisi Uygulamasi:

#include <iostream>

using namespace std;

int DugumSayac = 0; // Heap'te olusturulan dugum nesnelerinin sayisini tutar.

class Dugum {
	
	public:
	Dugum (){
		
		DugumSayac++;
	}
	
	~Dugum (){
		
		DugumSayac--;
	}
	
	Dugum *on   = NULL;
	Dugum *arka = NULL;
	int deger;
};


class Kuyruk{
	

	Dugum *bas = NULL;
	Dugum *son = NULL;
	
	
	public:
		
	Kuyruk(){
	}
	
	void addValue(int val) // dugumleri siraya koyacak
	{
		
		Dugum *Newdugum = new Dugum();
		Newdugum->deger = val;
		
		if(bas == NULL && son == NULL) // kuyrukta hic dugum yoksa. Kuyruk bos ise.
		{
			
			bas = Newdugum;
			son = Newdugum;
			
		}
		
		else // kuyrukta birden fazla dugum var ise.
		{
			
		  son->arka = Newdugum;
		  Newdugum->on = son;
		  son = Newdugum;
		  	
		}
		
	   cout << "\n Heap'teki dugum sayisi :" << DugumSayac<< endl;
	}
	
	int getValue(void) // dugumleri sýradan alacak
	{
		int value;
		
		if(bas == NULL && son == NULL) // kuyruk bos ise
		{   
		    throw  "Kuyruk bos!\n"; // exeption
		   /*
			cout << "Kuyruk bos!\n";
			value = 0;
			*/
		}
		
		else if (bas == son) // kuyrukta tek dugum var ise
		{
			value = bas->deger;
			delete bas;
			bas = NULL;
			son = NULL;
		}
		
		else  // kuyrukta birden fazla dugum var ise
		{
			value = bas->deger;
			bas = bas->arka;
			delete bas->on;
			bas->on = NULL;
				
		}
		
		cout << "\n Heap'teki dugum sayisi :" << DugumSayac<< endl;
		return value;
	}
	
};


int main ()
{ 

 Kuyruk *Qu = new Kuyruk();
 
 Qu->addValue(12);
 Qu->addValue(77);
 Qu->addValue(34);
 
 cout << Qu->getValue() << endl;
 cout << Qu->getValue() << endl;
 cout << Qu->getValue() << endl;
 cout << Qu->getValue() << endl;
 
 
}



 
