#include <iostream>
using namespace std;

long long gcd(long long a, long long b) {
  long long mod = a % b;
  while (mod > 0) {
    a = b;
    b = mod;
    mod = a % b;
  }
  return b;
}

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  long long a, b, c, d;
  cin >> a >> b;
  cin >> c >> d;
  long long res1 = a * d + c * b;
  long long res2 = b * d;
  long long GO = gcd(res1, res2);
  res1 /= GO;
  res2 /= GO;
  cout << res1 << " " << res2 << "\n";
  return 0;
}