#include <iostream>
using namespace std;
typedef long long ll;

ll a, b, c;
ll ca(ll a, ll b, ll c)
{
	if (b == 0)
		return 1;
	else if (b == 1)
		return a % c;
	else if (b % 2 == 0)
	{
		ll an = ca(a, b / 2, c);
		return (an * an) % c;
	}
	else
	{
		return (a * ca(a, b - 1, c)) % c;
	}
}

int main(void)
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);
	cin >> a >> b >> c;
	if (c == 0)
	{
		cout << "ERROR"
			 << "\n";
	}
	else
	{
		cout << ca(a, b, c) << "\n";
	}
	return 0;
}