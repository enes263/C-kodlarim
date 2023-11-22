#include "iostream"
using namespace std;
int main()
{
	int t[3][3] = { {5,3,2},{2,4,6},{1,5,6} };
	int carp = 1;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			carp *= t[i][j];
		}
		cout << i << ". satir elemanlari carpimi: " << carp << endl;
		carp = 1;
	}
	return 0;
}