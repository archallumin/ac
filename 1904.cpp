#include <iostream>
using namespace std;

int dp[1000001];

int main(void) {
  cin.tie(0);
  ios::sync_with_stdio(false);
  dp[1] = 1;
  dp[2] = 2;
  for (int i = 3; i < 1000001; i++) {
    dp[i] = (dp[i - 1] + dp[i - 2]) % 15746;
  }
  int a;
  cin >> a;
  cout << dp[a] << "\n";
  return 0;
}