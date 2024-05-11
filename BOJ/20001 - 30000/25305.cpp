#include <algorithm>
#include <iostream>
using namespace std;

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  int a, b;
  cin >> a >> b;
  int arr[a];
  for (int i = 0; i < a; i++) {
    int num;
    cin >> num;
    arr[i] = num;
  }
  sort(arr, arr + a, greater<int>());
  cout << arr[b - 1] << "\n";
  return 0;
}