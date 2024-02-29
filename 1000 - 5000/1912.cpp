#include <iostream>
#define ll long long
using namespace std;

ll max(ll a, ll b) {
  if (a > b)
    return a;
  return b;
}

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  int a;
  ll cnt = -100000000000007;
  cin >> a;
  int arr[a];
  ll dp[a];
  for (int i = 0; i < a; i++) {
    cin >> arr[i];
  }
  dp[0] = arr[0];
  for (int i = 1; i < a; i++) {
    dp[i] = max(arr[i] + dp[i - 1], arr[i]);
  }
  for (int i = 0; i < a; i++) {
    if (cnt < dp[i])
      cnt = dp[i];
  }
  cout << cnt << "\n";
  return 0;
}