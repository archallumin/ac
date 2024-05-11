#include <iostream>
using namespace std;

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  int a;
  long long cnt = 0, xor_ = 0;
  cin >> a;
  while (a--) {
    int q;
    cin >> q;
    if (q == 1) {
      long long n;
      cin >> n;
      cnt += n;
      xor_ ^= n;
    }
    if (q == 2) {
      long long n;
      cin >> n;
      cnt -= n;
      xor_ ^= n;
    }
    if (q == 3) {
      cout << cnt << "\n";
    }
    if (q == 4) {
      cout << xor_ << "\n";
    }
  }
  return 0;
}