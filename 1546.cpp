#include <iostream>
using namespace std;

int main(void)
{
	int a, b;
	int max = 0, tot = 0;
	cin >> a;
	for (int i = 1; i <= a; i++)
	{
		cin >> b;
		tot += b;
		if (b > max)
			max = b;
	}
	cout << (double)100.0 * tot / a / max << "\n";
	return 0;
}