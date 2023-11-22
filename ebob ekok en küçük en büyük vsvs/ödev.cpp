#include <iostream>

using namespace std;

int main()

{

	int ilksecim, sifre, ikincisecim, sayi1, sayi2, sayi3, sayi4, enbuyuk, enkucuk, ebob = 1, ekok = 1;

	string kullaniciadi;

	cout << "Hosgeldiniz." << endl << "1-Giris" << endl << "2-Cikis" << endl;

	cin >> ilksecim;

	if (ilksecim == 1) 

	{

	kullaniciadi:

		cout << "Lutfen kullanici adinizi giriniz." << endl << "KullaniciAdi:";

		cin >> kullaniciadi;

		if (kullaniciadi == "enesercan")

		{ 

		sifre:

			cout << "Sifre:";

			cin >> sifre;

			if (sifre == 1096) 

			{

			secenekler:

				cout << "Secenekler" << endl << "1-En Buyuk Sayiyi Bulma" << endl << "2-En Kucuk Sayiyi Bulma" << endl;

				cout << "3-EBOB Hesabi" << endl << "4-EKOK Hesabi" << endl << "5-CIKIS" << endl;

				cin >> ikincisecim;

				if (ikincisecim == 1) 

				{

					cout << "4 sayi giriniz:" << endl;

					cin >> sayi1 >> sayi2 >> sayi3 >> sayi4;

					if (sayi1 > sayi2 && sayi1 > sayi3 && sayi1 > sayi4)

					{

						enbuyuk = sayi1;

					}

					else if (sayi2 > sayi1 && sayi2 > sayi3 && sayi2 > sayi4)

					{

						enbuyuk = sayi2;

					}

					else if (sayi2 > sayi1 && sayi2 > sayi3 && sayi2 > sayi4)

					{

						enbuyuk = sayi2;

					}

					else if (sayi3 > sayi1 && sayi3 > sayi2 && sayi3 > sayi4)

					{

						enbuyuk = sayi3;

					}

					else if (sayi4 > sayi1 && sayi4 > sayi2 && sayi4 > sayi3)

					{

						enbuyuk = sayi4;

					}

					cout << "En Buyuk Sayi:" << enbuyuk << endl;

					goto secenekler;

				}

				else if (ikincisecim == 2) 

				{

					cout << "4 sayi giriniz:" << endl;

					cin >> sayi1 >> sayi2 >> sayi3 >> sayi4;

					if (sayi1 < sayi2 && sayi1 < sayi3 && sayi1 < sayi4)

					{

						enkucuk = sayi1;

					}

					else if (sayi2 < sayi1 && sayi2 < sayi3 && sayi2 < sayi4)

					{

						enkucuk = sayi2;

					}

					else if (sayi2 < sayi1 && sayi2 < sayi3 && sayi2 < sayi4)

					{

						enkucuk = sayi2;

					}

					else if (sayi3 < sayi1 && sayi3 < sayi2 && sayi3 < sayi4)

					{

						enkucuk = sayi3;

					}

					else if (sayi4 < sayi1 && sayi4 < sayi2 && sayi4 < sayi3)

					{

						enkucuk = sayi4;

					}

					cout << "En Kucuk Sayi:" << enkucuk << endl;

					goto secenekler;

				}

				else if (ikincisecim == 3) 

				{

					cout << "2 sayi giriniz" << endl;

					cin >> sayi1 >> sayi2;

					int k = 1; 

					while (k <= sayi1 && k <= sayi2)

					{

						if (sayi1 % k == 0 && sayi2 % k == 0)

						{

							ebob = k;

						}

						k++;

					}

					cout << "Girdiginiz 2 sayinin ebobu=" << ebob << endl;

					goto secenekler;

				}

				else if (ikincisecim == 4) 

				{

					cout << "2 sayi giriniz" << endl;

					cin >> sayi1 >> sayi2;

					for (int i = 1; i <= sayi1 * sayi2; i++) {

						if ((i % sayi1 == 0) && (i % sayi2 == 0)) {

							cout << "EKOK: " << i << endl;

							break;

						}

					}

					goto secenekler;

				}

				else 

				{

					exit(0);

				}

			}

			else

			{

				cout << "Yanlis sifre. Lütfen sifrenizi tekrar giriniz.";

				goto sifre;

			}

		}

		else

		{

			cout << "Yanlis kullanýcý adi. Lutfen tekrar deneyin." << endl;

			goto kullaniciadi;

		}

	}

	else 

		exit(0);

}