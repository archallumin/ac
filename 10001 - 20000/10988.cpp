#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(void) {
	string a, b;
	cin >> a;
	b = a;
	reverse(a.begin(), a.end());
	if (b.compare(a) == 0) {
		cout << "1\n";
	}
	else {
		cout << "0\n";
	}
	return 0;
}