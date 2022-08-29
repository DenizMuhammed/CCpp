
// Tipik bir Queue Veri Yapisi Uygulamasi Ornegi uzerinden template kullanýmý ornegi:

#include <iostream>

using namespace std;

int DugumSayac = 0; // Heap'te olusturulan dugum nesnelerinin sayisini tutar.

// typename kullanarak farklý tipteki degiskenleri iceren kuyruklar olusturabiliriz.



template <typename TypeName>

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
	TypeName deger;
};

template <typename TypeName>

class Kuyruk{
	

	Dugum<TypeName> *bas = NULL;
	Dugum<TypeName> *son = NULL;
	
	
	public:
		
	Kuyruk(){
	}
	
	void addValue(TypeName val) // dugumleri siraya koyacak
	{
		
		Dugum<TypeName> *Newdugum = new Dugum<TypeName>();
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
	
	TypeName getValue(void) // dugumleri sýradan alacak
	{
		TypeName value;
		
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

 Kuyruk<string> *Qu = new Kuyruk<string>();
 
 Qu->addValue("ali");
 Qu->addValue("veli");
 Qu->addValue("canan");
 
 cout << Qu->getValue() << endl;
 cout << Qu->getValue() << endl;
 cout << Qu->getValue() << endl;

 
 
}



 
