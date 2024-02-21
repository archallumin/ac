#include <iostream>
#define ll long long
using namespace std;

ll xotal(ll n) {
  ll res;
  if (n % 4 == 0)
    res = n;
  else if (n % 4 == 1)
    res = 1;
  else if (n % 4 == 2)
    res = n + 1;
  else if (n % 4 == 3)
    res = 0;
  return res;
}

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  ll a, b;
  cin >> a >> b;
  cout << (xotal(a - 1) ^ xotal(b)) << "\n";
  return 0;
}