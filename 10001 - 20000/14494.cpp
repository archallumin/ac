#include <iostream>
using namespace std;

long long dp[1001][1001];

int main(void) {
  dp[1][1] = 1;
  for (int i = 2; i < 1001; i++) {
    for (int j = 2; j < 1001; j++) {
      if (i == 2)
        dp[i - 1][j] = 1;
      if (j == 2)
        dp[i][j - 1] = 1;
      dp[i][j] = (dp[i - 1][j] + dp[i][j - 1] + dp[i - 1][j - 1]) % 1000000007;
    }
  }
  int a, b;
  cin >> a >> b;
  cout << dp[a][b] << "\n";
  return 0;
}