#include <iostream>
using namespace std;

int main() {
	char a, b, c, d;

bas:
	cout << "sifre giriniz:";
	cin >> a >> b >> c >> d;
	if (a == 'e' , b == 'n' , c == 'e' , d == 's')
	{
		cout << "Hosgeldiniz" << endl;
		system("pause");
	}
	else {
		cout << "Sifre Hatali" << endl;
		goto bas;
	}

	float KisaKenar, UzunKenar, DikdortgenAlan, KareAlan, KareCevre, DikdortgenCevre, KareKenar;
	int secim;

basla:
	cout << "1-Dikdortgen Alani:" << endl << "2-Dikdortgen Cevresi:" << endl << "3-Karenin Alani:" << endl << "4-Karenin Cevresi:" << endl << "5-Cikis" << endl;
	cin >> secim;

	if (secim == 1) {
		cout << "kisa kenar ve uzun kenar giriniz:";
		cin >> KisaKenar >> UzunKenar;
		DikdortgenAlan = KisaKenar * UzunKenar;
		cout << "Dikdortgenin Alani=" << DikdortgenAlan << endl;
		goto basla;
	}
	else if (secim == 2) {
		cout << "kisa kenar ve uzun kenar giriniz:";
		cin >> KisaKenar >> UzunKenar;
		DikdortgenCevre = 2 * (KisaKenar + UzunKenar);
		cout << "dikdortgenin cevresi=" << DikdortgenCevre << endl;
		goto basla;
	}
	else if (secim == 3) {
		cout << "kenar giriniz:";
		cin >> KareKenar;
		KareAlan = KareKenar * KareKenar;
		cout << "Karenin alani=" << KareAlan << endl;
		goto basla;
	}
	else if (secim == 4) {
		cout << "kenar giriniz";
		cin >> KareKenar;
		KareCevre = 4 * KareKenar;
		cout << "Karenin cevresi=" << KareCevre << endl;
		goto basla;
	}
	else if (secim == 5) {
		return 0;
	}

		
}



