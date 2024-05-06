#include <iostream>
#define ll long long
using namespace std;

ll dp[82] = {1, 1, 2};

int main(void) {
  for (int i = 2; i < 82; i++) {
    dp[i] = dp[i - 1] + dp[i - 2];
  }
  int a;
  cin >> a;
  cout << dp[a + 1] * 2 << "\n";
}