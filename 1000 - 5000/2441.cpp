#include <iostream>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	for (int a = 0; a < n; a++) {
		for (int b = 0; b < a; b++) {
			cout << " ";
		}
		for (int c = n; c > a; c--) {
			cout << "*";
		}
		cout << "\n";
	}
	return 0;
}