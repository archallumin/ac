#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	int x;
	int a[10] = {0};
	cin >> x;
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cin >> a[j];
		}
		sort(a, a + 10);
		cout << a[7] << "\n";
	}
	return 0;
}