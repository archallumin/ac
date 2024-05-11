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
  int a;
  cin >> a;
  int p = 2;
  while (a > 1) {
    while (a % p == 0) {
      cout << p << "\n";
      a /= p;
    }
    p++;
  }
  return 0;
}