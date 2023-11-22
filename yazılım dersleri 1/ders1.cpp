#include "iostream" 
using namespace std;
int main() {
	string isim = "Enes Ercan";         // altta yazýlan þey bunun içinde geçerli                                   
	int yas = 18;                        // alt satýra yas= yazýp baþka bir deðer atarsan bu deðer görünmez caným                                  
	char notOrt = 'A';                //ASCII deki karþýlýðý olan 65 i girersen de ekrana A yazdýrýr                               
	float sayisalNotOrtalamasi = 3.95;            //tam sayý olmadýðý için böyle tanýmladýk                                
	bool sinavaGirdiMi = true;      // 1 yazsak da olur yada 0 = false ve bool en c++ da en küçük deðere sahip olan komuttur							   
	double pi = 3.1415926536897;          // float noktadan sonra az gösterir fakat double daha fazla gösterir 
	int not1 = 70;
	int not2 = 80;
	int sinavlarOrt = (not1 + not2) / 2; //veya alt satýra sinavlarOrt=(not1+not2)/2; yaz


	cout << "Merhaba " << endl << endl << "Ogrenci Adi-Soyadi: " << isim << endl;
	cout << "Ogrenci yasi:" << yas << endl;
	cout << "Ogrenci Not Ortalamasi " << notOrt << endl;
	cout << "Ogrenci Sayisal Not Ortalamasi" << sayisalNotOrtalamasi << endl;
	cout << "Ogrenci Sinava Girdi mi: " << sinavaGirdiMi << endl;
	cout << "Sinavlar Ortalamasi: " << sinavlarOrt << endl;
	cout << endl;
	
	/*int x = 2345; // en yakýn satýr 2.9 olsada integer olduðu için her türlü 2 yazar yuvarlama yapmaz 
	int y = 5;    // bir tanesi float tanýmlý ise sonucu float yapar ama sadece z float olursa yine integer gelir
	 // veya x++ ayný þey veya ++x x+1
	int z = x % 10; // 12 nin 10 a bölümünden kalaný alýr
	cout << z;   */
	
	return 0;


}
