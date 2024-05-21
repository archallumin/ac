#include <iostream>
using namespace std;

int dp[1001][3], arr[1001][3];

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  int a;
  cin >> a;
  for (int i = 1; i <= a; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> arr[i][j];
    }
  }
  dp[0][0] = dp[0][1] = dp[0][2] = 0;
  arr[0][0] = arr[0][1] = arr[0][2] = 0;
  for (int i = 1; i <= a; i++) {
    dp[i][0] = min(dp[i - 1][1], dp[i - 1][2]) + arr[i][0];
    dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]) + arr[i][1];
    dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]) + arr[i][2];
  }
  cout << min(min(dp[a][0], dp[a][1]), dp[a][2]) << "\n";
  return 0;
}