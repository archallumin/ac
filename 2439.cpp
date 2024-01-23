#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int a = 0; a < n; a++)
	{
		for (int b = n - 1; b > a; b--)
		{
			cout << " ";
		}
		for (int c = 0; c <= a; c++)
		{
			cout << "*";
		}
		cout << "\n";
	}
	return 0;
}