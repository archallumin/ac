#include <iostream>
using namespace std;

static long double f(int n)
{
	long double *a = new long double[n + 1];
	a[0] = 0;
	a[1] = 1;
	for (int i = 2; i <= n; i++)
	{
		a[i] = a[i - 1] + a[i - 2];
	}
	return a[n];
}

int main(void)
{
	int n;
	cin >> n;
	cout.precision(0);
	cout << fixed << f(n) << "\n";
	return 0;
}