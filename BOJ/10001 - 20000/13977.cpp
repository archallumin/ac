#include <iostream>
#define ll long long
using namespace std;

// 분할 정복을 이용한 거듭제곱

ll fac[4000001] = {
    1,
};

ll dacpow(ll a, ll b) {
  if (b == 0)
    return 1;
  ll tmp = dacpow(a, b / 2);
  ll ans = (tmp * tmp) % 1000000007;
  if (b % 2 == 1)
    ans = (ans * a) % 1000000007;
  return ans;
}

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  for (int i = 1; i <= 4000000; i++) {
    fac[i] = (fac[i - 1] * i) % 1000000007;
  }
  int t;
  cin >> t;
  while (t--) {
    int a, b;
    cin >> a >> b;
    cout << fac[a] * dacpow((fac[b] * fac[a - b]) % 1000000007, 1000000005) %
                1000000007
         << "\n";
  }
  return 0;
}