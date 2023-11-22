#include "iostream"
using namespace std;
int main()
{
	cout << "2 sayi giriniz" << endl;
	int sayi1, sayi2;

	cin >> sayi1 >> sayi2;
	for (int i = 1; i <= sayi1 * sayi2; i++) {
		if ((i % sayi1 == 0) && (i % sayi2 == 0)) {
			cout << "EKOK: " << i << endl;
		}

	}
}