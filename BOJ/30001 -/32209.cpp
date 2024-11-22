#include <iostream>
using namespace std;

int main(void) {
	int t, c = 0;
	cin >> t;
	while (t--) {
		int a, b;
		cin >> a >> b;
		if (a == 1) c += b;
		else if (a == 2) {
			if (c < b) { cout << "Adios\n"; return 0; }
			else c -= b;
		}
	}
	cout << "See you next month\n";
	return 0;
}
