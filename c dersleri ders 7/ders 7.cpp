#define _CRT_SECURE_NO_WARNINGS
#include "iostream"
using namespace std;
int main()
{
	int x = 5;
	float y = 3.2;
	//cout <<"sayilar: x: " << x << " ve y: " << y ;
	// printf(sayilar: x: %d ve y: %.2f,x,y);
	//string metin="merhaba";
	//cout<<metin;
	char metin[] = "merhaba";
	// printf("metin : % s", metin);
	// cout << metin;
	 // cin >> x;
	//	cout << x;

	//	scanf("%d", &x);
		// printf("%d", x);
		char isim[25];
		printf("lutfen isminizi girin:");
		scanf("%s", isim);
		printf("merhaba %s", isim);
 }