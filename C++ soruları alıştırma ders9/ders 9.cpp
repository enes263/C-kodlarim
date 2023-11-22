#include "iostream"
using namespace std;
int main()
{

	// kullanýcýdan 3 tane tam sayý alýnýz 
	// bu 3 tam sayýnýn en büyüðünü bulup ekrana yazdýrýnýz 
	// bunlarý yaparken en az sayýda kod kullanýn 
	int x, y, z,sonuc;
	cout << "3 sayi giriniz" << endl;
	cin >> x >> y >> z;
	if (x >= y && x>=z)	{
		sonuc = x;
	}
	else if (y >= x && y >= z)
	{
		sonuc = y;
	}
	else {
		sonuc = z;
	}
	  
	cout << " girilen en buyuk sayi: " << sonuc;
	cout << endl;


	return 0;
}