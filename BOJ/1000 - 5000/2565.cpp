#include <algorithm>
#include <iostream>
using namespace std;

struct v {
  int a;
  int b;
};

bool comp(v a, v b) { return a.a < b.a; }

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  int t;
  cin >> t;
  v arr[101];
  int arr2[101], dp[101], res = -1;
  for (int i = 0; i < t; i++) {
    cin >> arr[i].a >> arr[i].b;
  }
  sort(arr, arr + t, comp);
  for (int i = 0; i < t; i++) {
    arr2[i] = arr[i].b;
  }
  // LIS
  for (int i = 0; i < t; i++) {
    dp[i] = 1;
    for (int j = 0; j < i; j++) {
      if (arr2[j] < arr2[i]) {
        dp[i] = max(dp[i], dp[j] + 1);
      }
    }
  }
  // LIS END
  for (int i = 0; i < t; i++) {
    if (res < dp[i])
      res = dp[i];
  }
  cout << t - res << "\n";
  return 0;
}