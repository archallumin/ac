#include <iostream>
using namespace std;

int main(void)
{
	int a, b;
	cin >> a >> b;
	if (a > b)
		cout << ">\n";
	else if (a < b)
		cout << "<\n";
	else if (a == b)
		cout << "==\n";
	return 0;
}