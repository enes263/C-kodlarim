#include "iostream"
using namespace std;
int main()
{
	int sifre;
	cout << "bir sifre belirleyiniz: ";
	cin >> sifre;
	cout << "sifreniz belirlendi: " << endl;
	//sifre sorma
	int kullaniciSifre;
	cout << "lutfen sifre giriniz: ";
	cin >> kullaniciSifre;
	
	if (kullaniciSifre == sifre)
	{
		cout << "sifre dogru";
	}  //else yazarsak alttaki gibi belirtmeden cout <<"sifre yanlis"; yazdýrabilirsin
	else if (kullaniciSifre!=sifre){
		cout << "sifre yanlis";
	}
	return 0;
	
}