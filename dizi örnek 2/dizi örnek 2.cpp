#include "iostream"
using namespace std;
int main() {
	int a[5]{},f=1,p=1,k=3;
	for (int i = 0; i <= 4; i++)
	{
		for (int j = 1; j <= k; j++)
		{
			f *= j;
		}
		k += 2;
		a[i] = f * p;
		f = 1;
		p = -p;
	
	}
	for (int s = 0; s < 5; s++)
	{
		cout << a[s] << endl;
	}
}