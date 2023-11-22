#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int i, t, p;
	p = 1;
	i = 2;
	while (i <= 62)
	{
		t = t + pow(i, 7) * p;
		p = -p;
		i = i + 2;
		}
	return 0;
}