#include <algorithm>
#include <iostream>

using namespace std;

int main(void) {
  int t;
  int cnt = 0;
  int total = 0;
  cin >> t;
  int arr[t];
  for (int i = 0; i < t; i++) {
    cin >> arr[i];
  }
  sort(arr, arr + t);
  while (t--) {
    cnt++;
    for (int j = 0; j < cnt; j++) {
      total += arr[j];
    }
  }
  cout << total << "\n";
  return 0;
}