
#include <iostream>

using namespace std; // fonksiyonlar icin bu isim uzayini kullan. "std:: " anlamina gelir.

int main ()
{ 

 int s = 32;
 
 int &b = s; // referans tanimalama. Degeri sonrandan degistirilemez.
 
 int *c = &s;
 
 b = *c;
 
 cout << b;
 
 cout << s;

int a;

 cin >> a; // cin bir std nesnesidir.
 cout << a << endl; // cout bir std nesnesidir.
 
 string str; // string bir std nesnesidir.
 
 cin >> str; // stringi \n e kadar okur.
 cout << str << endl; 
 
 getline(cin,str,'a'); // 'a' karakterine kadar ekrandna string okumasi yapar.
 // getline bir dosyadan okuma yaaprken cin parametresi yerine baska nesleler arguman olarak gecilebilir !!!!
 
 cout << str << endl;
 
 // sstream kutuphanesi stringler uzerinde islemler yapmamýza olanak veriyor. 
 
 

 
}



 
