#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int t;
	string a;
	cin >> t;
	while (t--)
	{
		cin >> a;
		cout << a[0] << a[a.length() - 1] << "\n";
	}
	return 0;
}