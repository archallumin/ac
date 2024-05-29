#include <iostream>
using namespace std;

int dp[4040][4040];

int main(void) {
  // LCS
  cin.tie(0)->sync_with_stdio(0);
  string a, b;
  cin >> a >> b;
  for (int i = 1; i <= a.length(); i++) {
    for (int j = 1; j <= b.length(); j++) {
      if (a[i - 1] == b[j - 1])
        dp[i][j] = dp[i - 1][j - 1] + 1;
    }
  }
  for (int i = 0; i < 20; i++) {
    for (int j = 0; j < 20; j++) {
      cout << dp[i][j] << " ";
    }
    cout << "\n";
  }
  cout << dp[a.length()][b.length()] << "\n";
  return 0;
}