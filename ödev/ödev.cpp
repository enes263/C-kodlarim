#include "iostream"
using namespace std;
int main() {
	char a, b, c, d;
baslangic:
	int sifre = 1096, sifregir;
	float kısakenar, yukseklik, uzunkenar, taban, alan, kenar;
	string kullaniciadi = "enes", kadgir;
	cout << "kullanici adi giriniz: ";
	cin >> kadgir;
	if (kadgir == kullaniciadi)
	{
		gel:
		cout << "sifre girin: ";
		cin >> sifregir;
		if (sifregir == sifre) {
			cout << "sifre dogru hosgeldiniz" << endl;

			cout << "Secenekler" << endl << "1-ucgenin alani" << endl << "2-karenin alani" << endl << "3-dikdortgenin alani" << endl << "4-cikis" << endl;
			int secenek;
			cin >> secenek;
			if (secenek == 1)
			{
				cout << "taban ve yukseklik giriniz";
				cin >> taban >> yukseklik;
				alan = taban * yukseklik / 2;
				cout << "ucgenin alani=  " << alan << endl;
				return 0;
			}
			if (secenek == 2)
			{
				cout << "kenar giriniz";
				cin >> kenar;
				alan = kenar * kenar;
				cout << "karenin alani=  " << alan << endl;
				return 0;
			}
			if (secenek == 3)
			{
				cout << "kısa ve uzun kenar giriniz \n";
				cin >> kısakenar >> uzunkenar;
				alan = kısakenar * uzunkenar;
				cout << "dikdortgenin alani=  " << alan << endl;
				return 0;
			}
			if (secenek == 4)
			{
				goto cikis;
			}
		}
		else
		{
			cout << "sifre yanlis" << endl;
			goto gel;
		}

	cikis:
		system("pause");

	}



}