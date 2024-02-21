#include <algorithm>
#include <iostream>

using namespace std;

int arr[1000000] = {
    0,
};

int main(void) {
  cin.tie(NULL);
  cout.tie(NULL);
  ios::sync_with_stdio(false);
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    cin >> arr[i];
  }
  sort(arr, arr + t, greater<int>());
  for (int i = 0; i < t; i++) {
    cout << arr[i] << "\n";
  }
  return 0;
}