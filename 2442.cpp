#include <iostream>
using namespace std;

int main(void)
{
	int n;
	int a_ = 1;
	cin >> n;
	for (int a = 0; a < n; a++)
	{
		for (int b = n - 1; b > a; b--)
		{
			cout << " ";
		}
		for (int c = 0; c < a_; c++)
		{
			cout << "*";
		}
		a_ = a_ + 2;
		cout << "\n";
	}
	return 0;
}