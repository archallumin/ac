#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string add(string a, string b);
string add(string a, string b)
{
	string x; // res
	int maxL = max(a.length(), b.length());
	a = string(maxL - a.length(), '0') + a;
	b = string(maxL - b.length(), '0') + b;
	int c = 0; // �ø�
	for (int i = maxL - 1; i >= 0; i--)
	{
		int digit = (a[i] - '0') + (b[i] - '0') + c;
		c = digit / 10;
		x += (digit % 10) + '0';
	}
	if (c > 0)
	{
		x += c + '0';
	}
	reverse(x.begin(), x.end());
	return x;
}

int main(void)
{
	string a, b;
	cin >> a >> b;
	cout << add(a, b) << "\n";
	return 0;
}