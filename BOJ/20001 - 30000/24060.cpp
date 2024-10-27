#include <iostream>
using namespace std;

int *arr, *tmp, ans = -1, a, b, n, cnt = 0;

void merge(int *arr, int p, int q, int r) {
	int i, j, t;
	i = p;
	j = q + 1;
	t = 1;
	while ((i <= q) && (j <= r)) {
		if (arr[i] <= arr[j]) {
			tmp[t++] = arr[i++];
		} else {
			tmp[t++] = arr[j++];
		}
	}
	while (i <= q) {
		tmp[t++] = arr[i++];
	}
	while (j <= r) {
		tmp[t++] = arr[j++];
	}
	i = p;
	t = 1;
	while (i <= r) {
		arr[i++] = tmp[t++];
		cnt++;
		if (cnt == b) {
			ans = arr[i - 1];
			break;
		} // remember this
	}
}

void merge_sort(int *arr, int l, int r) {
	if (l < r) {
		int m = (l + r) / 2;
		merge_sort(arr, l, m);
		merge_sort(arr, m+1, r);
		merge(arr, l, m, r);
	}
}

int main(void) {
	cin.tie(0)->sync_with_stdio(0);
	cin >> a >> b;
	arr = new int[a];
	tmp = new int[a];
	for (int i=0; i<a; i++) {
		cin >> n;
		arr[i] = n;
	}
	merge_sort(arr, 0, a - 1);
	cout << ans << "\n";
	return 0;
}

