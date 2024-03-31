#include <iostream>
#define ll long long
using namespace std;

// 분할 정복을 이용한 거듭제곱

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
  int a;
  ll b;
  cin >> a >> b;
  if (a != 1)
    cout << (dacpow(a, b) - 1) * dacpow(a - 1, 1000000005) % 1000000007 << "\n";
  else
    cout << b % 1000000007 << "\n";
  return 0;
}