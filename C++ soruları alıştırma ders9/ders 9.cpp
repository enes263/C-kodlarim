#include "iostream"
using namespace std;
int main()
{

	// kullan�c�dan 3 tane tam say� al�n�z 
	// bu 3 tam say�n�n en b�y���n� bulup ekrana yazd�r�n�z 
	// bunlar� yaparken en az say�da kod kullan�n 
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