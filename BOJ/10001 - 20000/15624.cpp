#include <iostream>
using namespace std;

int dp[1000001];

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  dp[0] = 0;
  dp[1] = 1;
  dp[2] = 1;
  for (int i = 3; i < 1000001; i++) {
    dp[i] = (dp[i - 1] + dp[i - 2]) % 1'000'000'007;
  }
  int a;
  cin >> a;
  cout << dp[a] << "\n";
}