#include <iostream>
#define ll long long
using namespace std;

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  int t;
  cin >> t;
  for (int n = 1; n <= t; n++) {
    ll dp[10001];
    dp[1] = 1;
    dp[2] = 1;
    int a, b;
    cin >> a >> b;
    for (int i = 3; i <= a; i++) {
      dp[i] = (dp[i - 1] + dp[i - 2]) % b;
    }
    cout << "Case #" << n << ": " << dp[a] % b << "\n";
  }
  return 0;
}