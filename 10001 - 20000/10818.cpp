#include <iostream>
using namespace std;

int main(void) {
	int min = 1000000;
	int max = -1000000;
	int a, b;
	cin >> a;
	for (int i = 0; i < a; i++) {
		cin >> b;
		if (b < min) min = b;
		else if (b > max) max = b;
	}
	cout << min << " " << max;
}