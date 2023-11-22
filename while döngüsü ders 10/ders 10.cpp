#include "iostream"
using namespace std;
int main()
{
	// while icindeki durum dogru oldugu sürece sonsuz kere çalýþýr

	int index = 0;
	while (index <= 4)
	{
		cout << index << endl;
		index = index + 1;
	}

	cout << endl;
	return 0;
}