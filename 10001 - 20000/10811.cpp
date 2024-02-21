#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	int n, m;
	int a, b;
	int arr[100] = { 0, };
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		arr[i] = i;
	}
	while (m--) {
		cin >> a >> b;
		reverse(&arr[a], &arr[b + 1]);
	}
	for (int i = 1; i <= n; i++) {
		cout << arr[i] << " ";
	}
	cout << "\n";
	return 0;
}