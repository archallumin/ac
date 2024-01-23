#include <iostream>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	for (int a = 0; a < n; a++) {
		for (int b = n; b > a; b--) {
			cout << "*";
		}
		cout << "\n";
	}
	return 0;
}