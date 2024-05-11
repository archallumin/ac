#include <iostream>
#define ll long long
using namespace std;

// 분할 정복을 이용한 거듭제곱

ll fac(ll a) {
  ll res = 1;
  for (ll i = 1; i <= a; i++) {
    res *= i;
    res %= 1000000007;
  }
  return res;
}

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
  int a, b;
  cin >> a >> b;
  cout << fac(a) * dacpow((fac(b) * fac(a - b)) % 1000000007, 1000000005) %
              1000000007
       << "\n";
  return 0;
}