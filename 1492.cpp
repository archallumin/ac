#include <iostream>
#include <cmath>
using namespace std;

int main() {
	unsigned long int n, k;
	unsigned long int val = 0;
	cin >> n >> k;
	for (int a = 1; a <= n; a++) {
		val = (int)(val + pow(a, k));
	}
	cout << val << "\n";
	return 0;
}

/*����ȭ...����ȭ...
  ���� ����*/