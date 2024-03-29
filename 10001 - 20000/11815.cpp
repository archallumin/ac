#include <cmath>
#include <iostream>

typedef long long ll;
using namespace std;

int main(void) {
  int t;
  cin >> t;
  while (t--) {
    ll a;
    cin >> a;
    ll tmp;
    tmp = sqrtl(a);
    if (tmp == sqrtl(a))
      cout << 1 << " ";
    else
      cout << 0 << " ";
  }
  return 0;
}