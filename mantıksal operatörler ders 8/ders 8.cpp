#include "iostream"
using namespace std;
int main()
{
	int sayi1, sayi2;
	
	cout << "1. sayiyi giriniz = ";
	cin >> sayi1;
	cout << "2.sayiyi giriniz = ";
	cin >> sayi2;

	if (sayi1 > 0 && sayi2 > 0)
	{
		cout << "her 2 sayida pozitiftir. ";
	}
	if (sayi1 < 0 && sayi2 < 0)
	{
		cout << "her 2 sayida negatiftir. ";
	}
	else if (sayi1 < 0 || sayi2 < 0)  // dik �izgi i�in altgr ve <> i�areti
	{
		cout << "girdiginiz sayilardan biri negatiftir";
	}
	
	
	
	
	
	int x = 0;
	if (x >= 0)
	{	//<= yaz�nca da x s�f�ra esit veya kucuk
		cout << endl << "x 0 a esit veya buyuk";
	}
	
	
	
	
	return 0;
}