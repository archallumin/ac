#include <cmath>
#include <iostream>

using namespace std;
typedef long long ll;

int a, chs[15];
ll cnt;

int canPlace(int n) {
  for (int i = 0; i < n; i++) {
    if (chs[n] == chs[i] || abs(n - i) == abs(chs[n] - chs[i]))
      return 0;
  }
  return 1;
}

void bt(int n) {
  if (n == a) {
    cnt++;
    return;
  } else {
    for (int i = 0; i < a; i++) {
      chs[n] = i;
      if (canPlace(n))
        bt(n + 1);
    }
  }
}

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  cin >> a;
  bt(0);
  cout << cnt << "\n";
  return 0;
}