#include <iostream>
using namespace std;

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  int a;
  cin >> a;
  // 두 포인터 연습
  int ans = 1, st = 1, en = 1, s = 1;
  while (en != a) {
    //! remember
    if (s < a) {
      en++;
      s += en;
    } else if (s >= a) {
      s -= st;
      st++;
    }
    if (s == a)
      ans++;
    //! remember
  }
  cout << ans << "\n";
  return 0;
}