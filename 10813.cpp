#include <iostream>
using namespace std;

int arr[101] = { 0, };

static void s(int a, int b) {
	int tmp = arr[a];
	arr[a] = arr[b];
	arr[b] = tmp;
}

int main(void) {
	int n, m;
	int a, b;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		arr[i] = i;
	}
	for (int i = 1; i <= m; i++) {
		cin >> a >> b;
		s(a, b);
	}
	for (int j = 1; j <= n; j++) {
		cout << arr[j] << " ";
	}
	cout << "\n";
	return 0;
}