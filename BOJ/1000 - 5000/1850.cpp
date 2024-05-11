#include <iostream>
#define ll long long
using namespace std;

ll gcd(ll a, ll b) {
  ll c;
  while (b != 0) {
    c = a % b;
    a = b;
    b = c;
  }
  return a;
}

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  ll a, b;
  cin >> a >> b;
  for (ll i = 0; i < gcd(a, b); i++) {
    cout << "1";
  }
  cout << "\n";
  return 0;
}