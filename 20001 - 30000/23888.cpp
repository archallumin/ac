// 등차수열과 쿼리

#include <iostream>
#define ll long long
using namespace std;

ll gcd(ll a, ll b) {
  while (b != 0) {
    ll temp = a % b;
    a = b;
    b = temp;
  }
  return a;
}

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  int a, b, t;
  cin >> a >> b;
  cin >> t;
  while (t--) {
    int q;
    cin >> q;
    if (q == 1) {
      ll x, y;
      cin >> x >> y;
      ll l, r;
      l = ((x - 1) * ((2 * a) + ((x - 2) * b))) / 2;
      r = (y * ((2 * a) + ((y - 1) * b))) / 2;
      cout << (ll)r - l << "\n";
    } else if (q == 2) {
      ll x, y;
      cin >> x >> y;
      if (x == y)
        cout << (ll)a + (x - 1) * b << "\n";
      else
        cout << (ll)gcd(a + (x - 1) * b, b) << "\n";
    }
  }
  return 0;
}