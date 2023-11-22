#include "iostream"
using namespace std;
int main()
{
	int sayi1, sayi2,secilen›slem,sonuc;
	sonuc = -1;
	cout << "lutfen 1. sayiyi giriniz: ";
	cin >> sayi1;
	cout << "lutfen 2. sayiyi giriniz: ";
	cin >> sayi2;
	cout << "lutfen isleminizi seciniz(1:+ 2:- 3:* 4:/)";
	cin >> secilen›slem;
	cout << endl;
	if (secilen›slem == 1) {
		sonuc = sayi1 + sayi2;
	}
	else if (secilen›slem == 2)
	{
		sonuc = sayi1 - sayi2;	
	}
	else if (secilen›slem == 3)
	{
		sonuc = sayi1 * sayi2;	
	}	
	else if (secilen›slem == 4)
	{
		sonuc = sayi1 / sayi2;	
	}
	else {
		cout << "lutfen gecerli bir islem giriniz" << endl;
	}
	if (sonuc != -1)
	{
		cout << "isleminizin sonucu=" << sonuc << endl;
	}
	
	
	}
