#include "iostream" 
using namespace std;
int main() {
	string isim = "Enes Ercan";         // altta yaz�lan �ey bunun i�inde ge�erli                                   
	int yas = 18;                        // alt sat�ra yas= yaz�p ba�ka bir de�er atarsan bu de�er g�r�nmez can�m                                  
	char notOrt = 'A';                //ASCII deki kar��l��� olan 65 i girersen de ekrana A yazd�r�r                               
	float sayisalNotOrtalamasi = 3.95;            //tam say� olmad��� i�in b�yle tan�mlad�k                                
	bool sinavaGirdiMi = true;      // 1 yazsak da olur yada 0 = false ve bool en c++ da en k���k de�ere sahip olan komuttur							   
	double pi = 3.1415926536897;          // float noktadan sonra az g�sterir fakat double daha fazla g�sterir 
	int not1 = 70;
	int not2 = 80;
	int sinavlarOrt = (not1 + not2) / 2; //veya alt sat�ra sinavlarOrt=(not1+not2)/2; yaz


	cout << "Merhaba " << endl << endl << "Ogrenci Adi-Soyadi: " << isim << endl;
	cout << "Ogrenci yasi:" << yas << endl;
	cout << "Ogrenci Not Ortalamasi " << notOrt << endl;
	cout << "Ogrenci Sayisal Not Ortalamasi" << sayisalNotOrtalamasi << endl;
	cout << "Ogrenci Sinava Girdi mi: " << sinavaGirdiMi << endl;
	cout << "Sinavlar Ortalamasi: " << sinavlarOrt << endl;
	cout << endl;
	
	/*int x = 2345; // en yak�n sat�r 2.9 olsada integer oldu�u i�in her t�rl� 2 yazar yuvarlama yapmaz 
	int y = 5;    // bir tanesi float tan�ml� ise sonucu float yapar ama sadece z float olursa yine integer gelir
	 // veya x++ ayn� �ey veya ++x x+1
	int z = x % 10; // 12 nin 10 a b�l�m�nden kalan� al�r
	cout << z;   */
	
	return 0;


}
