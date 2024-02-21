#include <iostream>
using namespace std;

int main(void) {
	int h, m;
	cin >> h >> m;
	m = m - 45;
	if (m < 0) {
		m = m + 60;
		h = h - 1;
		if (h < 0) {
			h = 23;
		}
	}
	cout << h << " " << m << "\n";
	return 0;
}