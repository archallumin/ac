#include <iostream>
using namespace std;

int dp[101][101][101];

int main(void) {
  // LCS
  cin.tie(0)->sync_with_stdio(0);
  string a, b, c;
  cin >> a >> b >> c;
  for (int i = 1; i <= a.length(); i++) {
    for (int j = 1; j <= b.length(); j++) {
      for (int k = 1; k <= c.length(); k++) {
        if (a[i - 1] == b[j - 1] && b[j - 1] == c[k - 1])
          dp[i][j][k] = dp[i - 1][j - 1][k - 1] + 1;
        else
          dp[i][j][k] =
              max(dp[i][j][k - 1], max(dp[i][j - 1][k], dp[i - 1][j][k]));
      }
    }
  }
  cout << dp[a.length()][b.length()][c.length()] << "\n";
  return 0;
}