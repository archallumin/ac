#include <iostream>
using namespace std;

int main(void) {
	int a, r=0, i=0;
	cin >> a;
	while (a--) {
		int s;
		cin >> s;
		if (s>3) s%=3;
		if (s==1) r++;
		else if (s==2) { r--; i--; }
		else i++;
	}
	cout << r << ".000000000 " << i << ".000000000\n";
	return 0;
}
