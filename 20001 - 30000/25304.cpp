#include <iostream>
using namespace std;
int main(void) {
	int x, n, a, b, tot = 0;
	cin >> x;
	cin >> n;
	while (n--) {
		cin >> a >> b;
		tot = tot + (a * b);
	}
	if (x == tot) cout << "Yes\n";
	else cout << "No\n";
	return 0;
}