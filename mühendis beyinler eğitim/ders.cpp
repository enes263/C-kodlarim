#include "iostream"
using namespace std;
int main() 
{
	int number = 0, sum = 0;
	while (number < 10)
	{
		number++;
		if(number==1)
		{
			continue;
			sum += number;
		}
		cout << "the sum is " << sum;
	}

}