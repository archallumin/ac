#include <iostream>
using namespace std;

int main(void) {
  int a, b, c, d, cnt = 0;
  cin >> a >> b >> c >> d;
  for (int i = c - d; i <= c + d; i++) {
    if (i >= a && i <= b)
      cnt++;
  }
  if (cnt)
    cout << cnt << "\n";
  else
    cout << "IMPOSSIBLE\n";
  return 0;
}