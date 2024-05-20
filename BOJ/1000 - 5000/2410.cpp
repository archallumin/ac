#include <iostream>
using namespace std;

int dp[1000001];

int main(void) {
  dp[1] = 1;
  dp[2] = 2;
  dp[3] = 2;
  dp[4] = 4;
  dp[5] = 4;
  for (int i = 6; i < 1000001; i++) {
    if (i % 2 == 0)
      dp[i] = (dp[i - 1] + dp[i / 2]) % 1000000000;
    else
      dp[i] = dp[i - 1] % 1000000000;
  }
  int a;
  cin >> a;
  cout << dp[a] << "\n";
  return 0;
}