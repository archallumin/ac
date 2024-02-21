#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
using namespace std;

int prime(int n) {
  if (n < 2)
    return 0;
  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0)
      return 0;
  }
  return 1;
}

int palin(int n) {
  string a = to_string(n);
  string b = a;
  reverse(b.begin(), b.end());
  if (a == b)
    return 1;
  else
    return 0;
}

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  int a;
  cin >> a;
  for (int i = a;; i++) {
    if (prime(i) && palin(i)) {
      cout << i << "\n";
      break;
    }
  }
  return 0;
}