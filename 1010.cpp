#include <iostream>
using namespace std;

static void time()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
}

int main(void)
{
	time();
	int t;
	cin >> t;
	for (int i = 0; i < t; ++i)
	{
		int m, n, r = 1, tmp = 1;
		cin >> m >> n;
		for (int j = n; j > n - m; --j)
		{
			r = r * j;
			r = r / tmp++;
		}
		cout << r << "\n";
	}
	return 0;
}