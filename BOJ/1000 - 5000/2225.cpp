#include <iostream>
using namespace std;

int dp[202][202];

int main(void) {
  for (int i = 1; i <= 201; i++) {
    dp[0][i] = 1;
    dp[i][1] = 1;
  }
  for (int i = 1; i <= 201; i++) {
    for (int j = 2; j <= 201; j++) {
      dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % 1000000000;
    }
  }
  int a, b;
  cin >> a >> b;
  cout << dp[a][b] % 1000000000 << "\n";
  return 0;
}