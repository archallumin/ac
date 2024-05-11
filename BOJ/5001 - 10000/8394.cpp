#include <iostream>
using namespace std;

int dp[10000001];

int main(void) {
  dp[1] = 1;
  dp[2] = 2;
  for (int i = 3; i < 10000001; i++) {
    dp[i] = (dp[i - 1] + dp[i - 2]) % 10;
  }
  int a;
  cin >> a;
  cout << dp[a] << "\n";
  return 0;
}