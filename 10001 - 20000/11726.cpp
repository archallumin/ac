#include <iostream>
#define fastio cin.tie(0)->sync_with_stdio(0);
using namespace std;

int dp[1001];

int main(void) {
  fastio;
  dp[1] = 1;
  dp[2] = 2;
  int a;
  cin >> a;
  for (int i = 3; i <= a; i++) {
    dp[i] = (dp[i - 1] + dp[i - 2]) % 10007;
  }
  cout << dp[a] << "\n";
}