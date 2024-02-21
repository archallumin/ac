#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int a, b, n;
	int c;
	cin >> a >> b >> n;
	for (int i = 0; i < n + 1; i++)
	{
		c = (int)a / b;
		a = (a % b) * 10;
	}
	cout << c << "\n";
	return 0;
}