#include <iostream>
using namespace std;

int main(void) {
  int arr[101] = {
      0,
  };
  int n, m;
  int i, j, k;
  cin >> n >> m;
  for (int a = 0; a < m; a++) {
    cin >> i >> j >> k;
    for (int b = i; b <= j; b++) {
      arr[b] = k;
    }
  }
  for (int i = 1; i <= n; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";
  return 0;
}