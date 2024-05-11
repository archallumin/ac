#include <iostream>
using namespace std;

int gcd(int a, int b) {
  int mod = a % b;
  while (mod > 0) {
    a = b;
    b = mod;
    mod = a % b;
  }
  return b;
}

int lcm(int a, int b) { return (a * b) / gcd(a, b); }

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  int t;
  cin >> t;
  while (t--) {
    int x, y;
    cin >> x >> y;
    cout << lcm(x, y) << "\n";
  }
  return 0;
}