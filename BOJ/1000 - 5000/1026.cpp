#include <algorithm>
#include <iostream>
using namespace std;

int main(void) {
  int ans = 0;
  int a;
  cin >> a;
  int arr1[a];
  int arr2[a];
  for (int i = 0; i < a; i++) {
    cin >> arr1[i];
  }
  for (int j = 0; j < a; j++) {
    cin >> arr2[j];
  }
  sort(arr1, arr1 + a);
  sort(arr2, arr2 + a, greater<>());
  for (int k = 0; k < a; k++) {
    ans += arr1[k] * arr2[k];
  }
  cout << ans << "\n";
  return 0;
}