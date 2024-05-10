#include <iostream>
#define mod 1000000007
using namespace std;

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  int dp[51];
  dp[0] = 1;
  dp[1] = 1;
  for (int i = 2; i < 51; i++) {
    dp[i] = (dp[i - 1] + dp[i - 2] + 1) % mod;
  }
  int a;
  cin >> a;
  cout << dp[a] << "\n";
  return 0;
}