#include <iostream>
using namespace std;

int main(void)
{
	int max = 0;
	int a, num = 0;
	for (int i = 0; i < 10; i++)
	{
		cin >> a;
		if (a > max)
		{
			max = a;
			num = i;
		}
	}
	cout << max << "\n"
		 << num << "\n";
	return 0;
}