#include <iostream>
using namespace std;

long long dp[1516];

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  dp[1] = 0;
  dp[2] = 1;
  dp[3] = 1;
  for (int i = 4; i <= 1515; i++) {
    dp[i] = (dp[i - 1] + (dp[i - 2] * 2)) % 1000000007;
  }
  int a;
  cin >> a;
  cout << dp[a] << "\n";
  return 0;
}