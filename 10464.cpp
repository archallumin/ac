#include <iostream>
using namespace std;

int xotal(int n) {
  int res;
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
  int t;
  cin >> t;
  while (t--) {
    int a, b;
    int xores;
    cin >> a >> b;
    xores = xotal(a - 1) ^ xotal(b);
    cout << xores << "\n";
  }
  return 0;
}