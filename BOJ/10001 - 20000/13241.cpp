#include <iostream>
#define ll long long
using namespace std;

ll gcd(ll a, ll b) {
  ll mod = a % b;
  while (mod > 0) {
    a = b;
    b = mod;
    mod = a % b;
  }
  return b;
}

ll lcm(ll a, ll b) { return (a * b) / gcd(a, b); }

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  ll x, y;
  cin >> x >> y;
  cout << lcm(x, y) << "\n";
  return 0;
}