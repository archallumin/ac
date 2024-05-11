#include <iostream>
#define ll long long
using namespace std;

ll dp[101];

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  dp[1] = 1;
  dp[2] = 1;
  dp[3] = 1;
  dp[4] = 2;
  dp[5] = 2;
  for (int i = 6; i <= 100; i++) {
    dp[i] = dp[i - 1] + dp[i - 5];
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
