#include <iostream>
using namespace std;

int main(void) {
	int h, m, t;
	cin >> h >> m;
	cin >> t;
	m = m + t;
	while (m >= 60) {
		m = m - 60;
		h = h + 1;
		if (h >= 24) {
			h = 0;
		}
	}
	cout << h << " " << m << "\n";
	return 0;
}