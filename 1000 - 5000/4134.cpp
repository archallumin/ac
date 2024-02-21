#include <iostream>
#define ll long long
using namespace std;

int isPrime(ll n) {
  if (n < 2)
    return 0;
  for (ll i = 2; i * i <= n; i++) {
    if (n % i == 0)
      return 0;
  }
  return 1;
}

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  ll a;
  int t;
  cin >> t;
  while (t--) {
    cin >> a;
    for (ll i = a;; i++) {
      if (isPrime(i)) {
        cout << i << "\n";
        break;
      }
    }
  }
  return 0;
}