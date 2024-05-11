#include <iostream>
#define ll long long
using namespace std;

ll dp[31];

int main(void) {
  dp[1] = 0;
  dp[2] = 3;
  dp[3] = 0;
  dp[4] = 11;
  dp[5] = 0;
  for (int i = 6; i <= 30; i++) {
    dp[i] = (dp[i - 2] * 4) - dp[i - 4];
  }
  int a;
  cin >> a;
  cout << dp[a] << "\n";
}