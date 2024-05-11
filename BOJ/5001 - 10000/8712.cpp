#include <iostream>
using namespace std;

int main(void) {
  cin.tie(0)->sync_with_stdio(0);
  int a;
  cin >> a;
  int cnt = 1;
  for (int i = 1; i <= a; i++) {
    if ((cnt & 1) == 0) {
      for (int i = a * cnt; i > a * (cnt - 1); i--) {
        cout << i << " ";
      }
    } else {
      for (int i = (a * (cnt - 1)) + 1; i <= a * (cnt); i++) {
        cout << i << " ";
      }
    }
    cout << "\n";
    cnt++;
  }
  return 0;
}