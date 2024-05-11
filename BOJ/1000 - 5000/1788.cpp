#include <cmath>
#include <iostream>
using namespace std;

int dp[1000001];

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  dp[0] = 0;
  dp[1] = 1;
  dp[2] = 1;
  for (int i = 3; i <= 1000000; i++) {
    dp[i] = (dp[i - 1] + dp[i - 2]) % 1000000000;
  }
  int a;
  cin >> a;
  if (a == 0)
    cout << "0\n";
  else if (a > 0 || (a < 0 && a % 2 != 0))
    cout << "1\n";
  else if (a < 0 && a % 2 == 0)
    cout << "-1\n";
  cout << dp[abs(a)] << "\n";
  return 0;
}