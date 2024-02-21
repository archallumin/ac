#include <iostream>
using namespace std;

int main(void)
{
	int a, b;
	cin >> a;
	while (1)
	{
		cin >> b;
		if (b == 0)
			break;
		else if (b % a == 0)
			cout << b << " is a multiple of " << a << ".\n";
		else
			cout << b << " is NOT a multiple of " << a << ".\n";
	}
	return 0;
}