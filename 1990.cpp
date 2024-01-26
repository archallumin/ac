#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

bool prime(int n) {
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0)
      return false;
  }
  return true;
}

int palins[10000001];

void palin(int n, int m) {
  for (int i = n; i <= m; i++) {
    string x = to_string(i);
    string y = x;
    reverse(y.begin(), y.end());
    if (x == y) {
      palins[i] = 1;
    }
  }
}

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  int a, b;
  cin >> a >> b;
  palin(a, min(10000000, b));
  for (int i = a; i <= min(10000000, b); i++) {
    if (palins[i]) {
      if (prime(i))
        cout << i << "\n";
    }
  }
  cout << "-1\n";
  return 0;
}