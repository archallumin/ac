#include <iostream>
using namespace std;

int main(void) {
	int t, a, b, tmp;
	cin >> t;
	while (t--) {
		cin >> a >> b;
		tmp = 1;
		while (b--) {
			tmp = tmp * a % 10;
		}
		if (tmp == 0) tmp = 10;
		cout << tmp << "\n";
	}
	return 0;
}