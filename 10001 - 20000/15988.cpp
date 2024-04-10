#include <iostream>
using namespace std;

long long dp[1000002];

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  dp[1] = 1;
  dp[2] = 2;
  dp[3] = 4;
  for (int i = 4; i < 1000001; i++) {
    dp[i] = (dp[i - 1] + dp[i - 2] + dp[i - 3]) % 1000000009;
  }
  int t;
  cin >> t;
  while (t--) {
    int a;
    cin >> a;
    cout << dp[a] << "\n";
  }
  return 0;
}