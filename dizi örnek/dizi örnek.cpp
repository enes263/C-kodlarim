#include "iostream"
using namespace std;
int main()
{
	int a[4] = { 3, 7, 9, 4 }, b[4] = { 2, -16, 1, 3 }, top = 0;
	for (int i=0;i<4;i++)
	{
		top += a[i] * b[i];
	}
	cout<< "a ve b dizisinin skaler carpimi" << top;
}