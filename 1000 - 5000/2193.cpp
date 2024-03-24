#include <iostream>
#define ll long long
using namespace std;

ll dp[91];

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  dp[1] = 1;
  dp[2] = 1;
  for (int i = 3; i < 91; i++) {
    dp[i] = dp[i - 1] + dp[i - 2];
  }
  int a;
  cin >> a;
  cout << dp[a] << "\n";
  return 0;
}