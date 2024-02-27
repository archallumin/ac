#include <iostream>
using namespace std;

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  int a;
  while (1) {
    int cnt = 0;
    cin >> a;
    if (a == 0)
      break;
    for (int i = 1; i <= a; i++) {
      cnt += i;
    }
    cout << cnt << "\n";
  }
  return 0;
}