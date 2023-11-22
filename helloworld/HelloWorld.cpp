#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int i,top,p;
	p = 1;
	top = 0;
	for (i = 2; i <= 62; i = i + 2)
	{
		t = t + pow(i, 7) * p;
		p = -p;
	}
	cout << "t=" << t;
}